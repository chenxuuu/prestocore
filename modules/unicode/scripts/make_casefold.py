#! /usr/bin/python
import sys
import re
import array

def error(message):
	print >>sys.stderr, message
	sys.exit(1)

def get_status(base):
	return 'CF_' + base

pattern = re.compile('([\dA-Fa-f]+); ([CFS]); ([\dA-Fa-f ]+); # (.*)')
table_simple = []
table_full = []
NO_COMPRESSION, DELTA, SET_BIT0, CLEAR_BIT0, DELTA_FOR_EVEN, DELTA_FOR_ODD = range(0,6)
compressionEnum = ['CFC_' + x for x in ['NO_COMPRESSION', 'DELTA', 'SET_BIT0', 'CLEAR_BIT0', 'DELTA_FOR_EVEN', 'DELTA_FOR_ODD']]

lastCodepoint = 0
bmpSentinelAdded = False

# The selftest for simple case folding supports BMP and SMP only (there is no case folding beside those planes anyway).
selftest_table_simple = range(0, 0x20000)

# The selftest for full case folding supports BMP only. Each code point in BMP can be unfolded to not more than 3 other code points in BMP.
selftest_table_full = [0 if x%3 else x/3 for x in range(0, 3*0x10000)]

# Open and parse the input data
try:
	file = open('../data/CaseFolding.txt', 'r')
except:
	error("Error opening CaseFolding.txt")

def add_simple_mapping(codepoint, mapping, comment):
	if len(table_simple) == 0:
		table_simple.append([codepoint, mapping-codepoint, comment, NO_COMPRESSION])
		return
		
	global lastCodepoint
	if codepoint != 0 and lastCodepoint + 1 != codepoint:
		for i in range(lastCodepoint+1, codepoint):
			add_simple_mapping(i, i, "SEPARATOR")
			if table_simple[-1][3] == NO_COMPRESSION:
				table_simple.append([codepoint, mapping-codepoint, comment, NO_COMPRESSION])
				lastCodepoint = codepoint
				return;
						
	# The code below does the compression magic - data for simple case folding can be compressed in 5 ways:
	# 1. by defining blocks with constant delta
	# 2. by defining blocks with "set bit 0" rule
	# 3. by defining blocks with "clear bit 0" rule
	# 4. by defining blocks with constant delta for even codepoints, and zero delta for odd ones
	# 5. by defining blocks with constant delta for odd codepoints, and zero delta for even ones
	lastDelta = table_simple[-1][1]
	if table_simple[-1][3] in [NO_COMPRESSION, SET_BIT0] and table_simple[-1][0] + lastDelta == (table_simple[-1][0] | 0x0001) and (codepoint | 0x0001) == mapping:
		table_simple[-1][3] = SET_BIT0
	elif table_simple[-1][3] in [NO_COMPRESSION, CLEAR_BIT0] and table_simple[-1][0] + lastDelta == (table_simple[-1][0] & 0xfffe) and (codepoint & 0xfffe) == mapping:
		table_simple[-1][3] = CLEAR_BIT0
	elif table_simple[-1][3] in [NO_COMPRESSION, DELTA] and codepoint + lastDelta == mapping:
		table_simple[-1][3] = DELTA
	elif table_simple[-1][3] in [NO_COMPRESSION, DELTA_FOR_EVEN] and codepoint + ((codepoint + 1) % 2) * lastDelta == mapping:
		table_simple[-1][3] = DELTA_FOR_EVEN
	elif table_simple[-1][3] in [NO_COMPRESSION, DELTA_FOR_ODD] and codepoint + (codepoint % 2) * lastDelta == mapping:
		table_simple[-1][3] = DELTA_FOR_ODD
	else:
		table_simple.append([codepoint, mapping-codepoint, comment, NO_COMPRESSION])
	lastCodepoint = codepoint

add_simple_mapping(0, 0, "START BMP")

for line in file.readlines():
	m = pattern.match(line)
	if not m:
		continue

	# Get code, status field, mapping and comment from the parsed line
	code_s, status_field, mapping_s, comment = m.group(1,2,3,4)

	code = int(code_s, 16)
	status = get_status(status_field)
	mapping  = [int(a,16) for a in mapping_s.split(' ')]
	mapping.extend([0] * (3-len(mapping)))

	if status in ['CF_S', 'CF_C']:
		if not bmpSentinelAdded and code>0xffff:
			add_simple_mapping(0xffff, 0xffff, "BMP Sentinel")
			table_simple.append([0x10000, 0, "NonBMP Start", NO_COMPRESSION])
			lastCodepoint = 0x10000
			bmpSentinelAdded = True
		add_simple_mapping(code, mapping[0], comment)
	
	if status == 'CF_F':
		table_full.append([code, mapping, comment])
	
	# store data for selftest
	if status in ['CF_S', 'CF_C']:
		selftest_table_simple[code] = mapping[0]
	if status in ['CF_F', 'CF_C'] and code<0x10000:
		(selftest_table_full[code*3], selftest_table_full[code*3+1], selftest_table_full[code*3+2]) = (mapping[0], mapping[1], mapping[2])

add_simple_mapping(0xffffff, 0xffffff, "END")
		
# Write the selftest data
out = open("scasefolding.dat", "wb")
array.array("I", selftest_table_simple).tofile(out)
out.close()

out = open("fcasefolding.dat", "wb")
array.array("H", selftest_table_full).tofile(out)
out.close()

# Write the requested table
# Write tables used by ToCaseFoldSimple and ToCaseFoldFull functions
print "/** @file casefold.inl"
print " * This file is auto-generated by modules/unicode/scripts/make_casefold.py."
print " * DO NOT EDIT THIS FILE MANUALLY."
print " */\n"
print "#ifdef USE_UNICODE_INC_DATA"

print "enum CaseFoldSimpleCompressionType {" + ",".join(compressionEnum) + "};\n"

print "static const CaseFoldFullMapping casefold_full_data[] = {"
for m in table_full:
	print "\t{0x%.4x, {%s}}, // %s" % (m[0], ", ".join(["0x%.4x" % ch for ch in m[1]]), m[2])
print "};"

print "static const CaseFoldSimpleMappingBMP casefold_simple_data_bmp[] = {"
for m in table_simple:
	if m[0]<=0xffff:
		print "\t{0x%.4x, %d, %d}, // %s" % (m[0], m[1], m[3], m[2])
print "};"

print "static const CaseFoldSimpleMappingNonBMP casefold_simple_data_nonbmp[] = {"
for m in table_simple:
	if m[0]>0xffff:
		print "\t{0x%.4x, %d, %d}, // %s" % (m[0], m[1], m[3], m[2])
print "};"

print "#endif // USE_UNICODE_INC_DATA"
