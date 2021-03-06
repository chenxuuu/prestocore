#!/usr/bin/pike
/* -*- Mode: pike; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */

// Generate a table for character classes. Parts stolen from
// makelinebreak.py, which in turn had parts was stolen from
// makelinebreak.pl. We need one version for each p* language. :-)
#define USE_UNICODE_LINEBREAK
#define UNICODE_BUILD_TABLES
#include "../unicode.h"

// Map from UnicodeData class name to our enum name and check that
// it is defined in unicode.h
string get_lbt(string lbt)
{
	if (lbt != "XX" && !this["LB_"+lbt])
		werror("*** ERROR ***: Unknown class: "+lbt+"\n");
	return "LB_"+lbt;
}

// Map unicode point to plane
int get_plane(int codepoint)
{
	return (codepoint & 0xff0000) >> 16;
}

void main()
{
	// New linebreaking data
	array(array) new_table = ({});
	array(int) flat_new_linebreaks = ({});
	string newlbt = "\0"*0x30000;

	// Read LineBreak.txt
	foreach(Stdio.read_file("../data/LineBreak.txt") / "\n"; int lno; string line)
	// foreach(Stdio.stdin.line_iterator(); int lno; string line)
	{
		// Strip comments and split into semi-colon separated fields
		array(string) info = String.trim_all_whites((line/"#")[0])/";";
		if (sizeof(info) != 2)
			continue;

		// Fetch codepoints, either single or range
		int c1, c2;
		string linebreak_class = get_lbt(info[1]);
		string original_linebreak_class = linebreak_class;
		// Table compaction for Hangul; see corresponding hack in unicode_properties.cpp
		if (linebreak_class == "LB_H3")
		{
			linebreak_class = "LB_H2";
		}

		if (sscanf(info[0], "%x..%x", c1, c2) == 2)
		{
			// Range
		}
		else
		{
			// Single codepoint
			c2=c1;
		}

		// Special hacks
		if (c1 == 0xE000) continue; // Emoji in PUA
//		 if (c1 < 0x3000) continue;
//		 if (c1 > 0xFA6A && c1 < 0xFF00) continue;

		// Special hack for CORE-11340.
		// Treat U+3001 and U+3002 as BA, rather than CL as the spec suggests.
		if (c1 == 0x3001 || c1 == 0x3002)
		{
			original_linebreak_class = linebreak_class = get_lbt("BA");
		}

		// Store information
		for (int c = c1; c<=c2; c++)
		{
			int plane = get_plane(c);

			// Only support BMP, SMP and SIP
			if (plane > 0x2)
				continue;

			// Remember for selftest
			if (c < 0x30000)
			{
				newlbt[c] = this[original_linebreak_class];
			}

			// Store in flat table for U+0000-U+00FF
			if (c < 256)
			{
				flat_new_linebreaks += ({ linebreak_class });
			}
			else
			{
				// Store in run-length encoded table
				if (sizeof(new_table) && linebreak_class == new_table[-1][1] &&
				    new_table[-1][0] + new_table[-1][2] == c)
				{
					// Continue previous range
					new_table[-1][2]++;
				}
				else// if (this[linebreak_class])
				{
					// Create a new range
					new_table += ({ ({ c, linebreak_class, 1 }) });
				}
			}
		}
	}

	// Hacks for emoji in PUA
	for (int c = 0xe000; c<0xe119; c++)
	{
		newlbt[c] = this[get_lbt("ID")];
	}
	for (int c = 0xe630; c<0xe757; c++)
	{
		newlbt[c] = this[get_lbt("ID")];
	}

	// New format
	new_table += ({	// emoji (private use, area 1 0xe00 - 0xe630)
			({ 0xe000, get_lbt("ID"), 0x119 }),
			({ 0xe630, get_lbt("ID"), 0x127 }),
	});
	new_table += ({ // plane sentinels
		({ 0xffff, 0, 1 }),
		({ 0x1ffff, 0, 1 }),
		({ 0x2ffff, 0, 1 }),
	});
	new_table = sort(new_table);

	// Write selftest data
	Stdio.write_file("lbt2.dat", newlbt);

	// Write output
	write(#"/** @file linebreak.inl
 * This file is auto-generated by modules/unicode/scripts/make_linebreak.pike.
 * DO NOT EDIT THIS FILE MANUALLY.
 */\n
#ifdef USE_UNICODE_INC_DATA\n");

	write("static const char line_break_flat_new[] = {\n\t");
	write((array(string))flat_new_linebreaks * ",");
	write("\n};\n");

	// Write indices for linebreak info and create the data table
	write("static const uni_char line_break_chars_new[] = {");
	int last_end_new = 0x100, ent_new, lbl_new;
	string data_new = "", tbl_new = "";
	array new_planes = ({({"0", "0"})});
	for(int i = 0; i < 2; i++)
		new_planes += ({({"-1", "-1"})});
	int p = 0, prevp = 0, mark = 0;
	foreach (new_table, array t)
	{
		if (last_end_new != t[0])
		{
			if (ent_new)
			{
				data_new += ", ";
				tbl_new  += ", ";
			}
			if (!(ent_new & 7))
			{
				data_new += "\n\t";
				tbl_new  += "\n\t";
			}
			ent_new ++;
			tbl_new += sprintf("0x%04x", last_end_new&0xffff);
			data_new += "LB_XX";
		}

		if (ent_new)
		{
			data_new += ", ";
			tbl_new  += ", ";
		}
		if (!(ent_new & 7))
		{
			data_new += "\n\t";
			tbl_new  += "\n\t";
		}

		// Detect plane boundry
		if (get_plane((int)t[0]) > p)
		{
			p = get_plane(t[0]);
			new_planes[p][0] = (string)ent_new;
			new_planes[prevp][1] = (string)(ent_new-1);
			prevp = p;
		}

		ent_new ++;
		tbl_new += sprintf("0x%04x", t[0]&0xffff);
		last_end_new = t[0]+t[2];
		data_new += t[1];
	}
	write(tbl_new + "\n};\n\n");

	// Write the data table
	write("static const char line_break_data_new[] = {" + data_new + "\n};\n");

	// Write the planes table
	new_planes[-1][1] = (string)ent_new;
	write( "static const short line_break_planes_new[][2] = {\n\t");
	foreach (new_planes, array p)
		write( "{" + p*"," + "},");
	write("\n};\n#endif // USE_UNICODE_INC_DATA\n");

	werror("%O/%O entries\n", ent_new, sizeof(new_table));
}
