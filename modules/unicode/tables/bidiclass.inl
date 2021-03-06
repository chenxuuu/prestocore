/** @file bidiclass.inl
 * This file is auto-generated by modules/unicode/scripts/make_bidi.pike.
 * DO NOT EDIT THIS FILE MANUALLY.
 */

#ifdef USE_UNICODE_INC_DATA
static const short bidi_planes[][2] = {
	{0,639},{640,721},{722,723},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{724,727},
};
static const uni_char bidi_chars[] = {
	0x0,
	0x9,
	0xa,
	0xb,
	0xc,
	0xd,
	0xe,
	0x1c,
	0x1f,
	0x20,
	0x21,
	0x23,
	0x26,
	0x2b,
	0x2c,
	0x2d,
	0x2e,
	0x30,
	0x3a,
	0x3b,
	0x41,
	0x5b,
	0x61,
	0x7b,
	0x7f,
	0x85,
	0x86,
	0xa0,
	0xa1,
	0xa2,
	0xa6,
	0xaa,
	0xab,
	0xad,
	0xae,
	0xb0,
	0xb2,
	0xb4,
	0xb5,
	0xb6,
	0xb9,
	0xba,
	0xbb,
	0xc0,
	0xd7,
	0xd8,
	0xf7,
	0xf8,
	0x2b9,
	0x2bb,
	0x2c2,
	0x2d0,
	0x2d2,
	0x2e0,
	0x2e5,
	0x2ee,
	0x2ef,
	0x300,
	0x370,
	0x374,
	0x376,
	0x37e,
	0x386,
	0x387,
	0x388,
	0x3f6,
	0x3f7,
	0x483,
	0x48a,
	0x58a,
	0x58f,
	0x591,
	0x5be,
	0x5bf,
	0x5c0,
	0x5c1,
	0x5c3,
	0x5c4,
	0x5c6,
	0x5c7,
	0x5d0,
	0x600,
	0x606,
	0x608,
	0x609,
	0x60b,
	0x60c,
	0x60d,
	0x60e,
	0x610,
	0x61b,
	0x64b,
	0x660,
	0x66a,
	0x66b,
	0x66d,
	0x670,
	0x671,
	0x6d6,
	0x6dd,
	0x6de,
	0x6df,
	0x6e5,
	0x6e7,
	0x6e9,
	0x6ea,
	0x6ee,
	0x6f0,
	0x6fa,
	0x711,
	0x712,
	0x730,
	0x74d,
	0x7a6,
	0x7b1,
	0x7c0,
	0x7eb,
	0x7f4,
	0x7f6,
	0x7fa,
	0x816,
	0x81a,
	0x81b,
	0x824,
	0x825,
	0x828,
	0x829,
	0x830,
	0x859,
	0x85e,
	0x8a0,
	0x8e4,
	0x903,
	0x93a,
	0x93b,
	0x93c,
	0x93d,
	0x941,
	0x949,
	0x94d,
	0x94e,
	0x951,
	0x958,
	0x962,
	0x964,
	0x981,
	0x982,
	0x9bc,
	0x9bd,
	0x9c1,
	0x9c7,
	0x9cd,
	0x9ce,
	0x9e2,
	0x9e6,
	0x9f2,
	0x9f4,
	0x9fb,
	0xa01,
	0xa03,
	0xa3c,
	0xa3e,
	0xa41,
	0xa59,
	0xa70,
	0xa72,
	0xa75,
	0xa83,
	0xabc,
	0xabd,
	0xac1,
	0xac9,
	0xacd,
	0xad0,
	0xae2,
	0xae6,
	0xaf1,
	0xb01,
	0xb02,
	0xb3c,
	0xb3d,
	0xb3f,
	0xb40,
	0xb41,
	0xb47,
	0xb4d,
	0xb57,
	0xb62,
	0xb66,
	0xb82,
	0xb83,
	0xbc0,
	0xbc1,
	0xbcd,
	0xbd0,
	0xbf3,
	0xbf9,
	0xbfa,
	0xc01,
	0xc3e,
	0xc41,
	0xc46,
	0xc58,
	0xc62,
	0xc66,
	0xc78,
	0xc7f,
	0xcbc,
	0xcbd,
	0xccc,
	0xcd5,
	0xce2,
	0xce6,
	0xd41,
	0xd46,
	0xd4d,
	0xd4e,
	0xd62,
	0xd66,
	0xdca,
	0xdcf,
	0xdd2,
	0xdd8,
	0xe31,
	0xe32,
	0xe34,
	0xe3f,
	0xe40,
	0xe47,
	0xe4f,
	0xeb1,
	0xeb2,
	0xeb4,
	0xebd,
	0xec8,
	0xed0,
	0xf18,
	0xf1a,
	0xf35,
	0xf36,
	0xf37,
	0xf38,
	0xf39,
	0xf3a,
	0xf3e,
	0xf71,
	0xf7f,
	0xf80,
	0xf85,
	0xf86,
	0xf88,
	0xf8d,
	0xfbe,
	0xfc6,
	0xfc7,
	0x102d,
	0x1031,
	0x1032,
	0x1038,
	0x1039,
	0x103b,
	0x103d,
	0x103f,
	0x1058,
	0x105a,
	0x105e,
	0x1061,
	0x1071,
	0x1075,
	0x1082,
	0x1083,
	0x1085,
	0x1087,
	0x108d,
	0x108e,
	0x109d,
	0x109e,
	0x135d,
	0x1360,
	0x1390,
	0x13a0,
	0x1400,
	0x1401,
	0x1680,
	0x1681,
	0x169b,
	0x16a0,
	0x1712,
	0x1720,
	0x1732,
	0x1735,
	0x1752,
	0x1760,
	0x1772,
	0x1780,
	0x17b4,
	0x17b6,
	0x17b7,
	0x17be,
	0x17c6,
	0x17c7,
	0x17c9,
	0x17d4,
	0x17db,
	0x17dc,
	0x17dd,
	0x17e0,
	0x17f0,
	0x180b,
	0x180e,
	0x1810,
	0x18a9,
	0x18aa,
	0x1920,
	0x1923,
	0x1927,
	0x1929,
	0x1932,
	0x1933,
	0x1939,
	0x1940,
	0x1946,
	0x19de,
	0x1a00,
	0x1a17,
	0x1a19,
	0x1a56,
	0x1a57,
	0x1a58,
	0x1a61,
	0x1a62,
	0x1a63,
	0x1a65,
	0x1a6d,
	0x1a73,
	0x1a80,
	0x1b00,
	0x1b04,
	0x1b34,
	0x1b35,
	0x1b36,
	0x1b3b,
	0x1b3c,
	0x1b3d,
	0x1b42,
	0x1b43,
	0x1b6b,
	0x1b74,
	0x1b80,
	0x1b82,
	0x1ba2,
	0x1ba6,
	0x1ba8,
	0x1baa,
	0x1bab,
	0x1bac,
	0x1be6,
	0x1be7,
	0x1be8,
	0x1bea,
	0x1bed,
	0x1bee,
	0x1bef,
	0x1bf2,
	0x1c2c,
	0x1c34,
	0x1c36,
	0x1c3b,
	0x1cd0,
	0x1cd3,
	0x1cd4,
	0x1ce1,
	0x1ce2,
	0x1ce9,
	0x1ced,
	0x1cee,
	0x1cf4,
	0x1cf5,
	0x1dc0,
	0x1e00,
	0x1fbd,
	0x1fbe,
	0x1fbf,
	0x1fc2,
	0x1fcd,
	0x1fd0,
	0x1fdd,
	0x1fe0,
	0x1fed,
	0x1ff2,
	0x1ffd,
	0x2000,
	0x200b,
	0x200e,
	0x200f,
	0x2010,
	0x2028,
	0x2029,
	0x202a,
	0x202b,
	0x202c,
	0x202d,
	0x202e,
	0x202f,
	0x2030,
	0x2035,
	0x2044,
	0x2045,
	0x205f,
	0x2060,
	0x2070,
	0x2071,
	0x2074,
	0x207a,
	0x207c,
	0x207f,
	0x2080,
	0x208a,
	0x208c,
	0x2090,
	0x20a0,
	0x20d0,
	0x2100,
	0x2102,
	0x2103,
	0x2107,
	0x2108,
	0x210a,
	0x2114,
	0x2115,
	0x2116,
	0x2119,
	0x211e,
	0x2124,
	0x2125,
	0x2126,
	0x2127,
	0x2128,
	0x2129,
	0x212a,
	0x212e,
	0x212f,
	0x213a,
	0x213c,
	0x2140,
	0x2145,
	0x214a,
	0x214e,
	0x2150,
	0x2160,
	0x2189,
	0x2212,
	0x2213,
	0x2214,
	0x2336,
	0x237b,
	0x2395,
	0x2396,
	0x2488,
	0x249c,
	0x24ea,
	0x26ac,
	0x26ad,
	0x2800,
	0x2900,
	0x2c00,
	0x2ce5,
	0x2ceb,
	0x2cef,
	0x2cf2,
	0x2cf9,
	0x2d00,
	0x2d7f,
	0x2d80,
	0x2de0,
	0x2e00,
	0x3000,
	0x3001,
	0x3005,
	0x3008,
	0x3021,
	0x302a,
	0x302e,
	0x3030,
	0x3031,
	0x3036,
	0x3038,
	0x303d,
	0x3041,
	0x3099,
	0x309b,
	0x309d,
	0x30a0,
	0x30a1,
	0x30fb,
	0x30fc,
	0x31c0,
	0x31f0,
	0x321d,
	0x3220,
	0x3250,
	0x3260,
	0x327c,
	0x327f,
	0x32b1,
	0x32c0,
	0x32cc,
	0x32d0,
	0x3377,
	0x337b,
	0x33de,
	0x33e0,
	0x33ff,
	0x3400,
	0x4dc0,
	0x4e00,
	0xa490,
	0xa4d0,
	0xa60d,
	0xa610,
	0xa66f,
	0xa673,
	0xa674,
	0xa67e,
	0xa680,
	0xa69f,
	0xa6a0,
	0xa6f0,
	0xa6f2,
	0xa700,
	0xa722,
	0xa788,
	0xa789,
	0xa802,
	0xa803,
	0xa806,
	0xa807,
	0xa80b,
	0xa80c,
	0xa825,
	0xa827,
	0xa828,
	0xa830,
	0xa838,
	0xa840,
	0xa874,
	0xa880,
	0xa8c4,
	0xa8ce,
	0xa8e0,
	0xa8f2,
	0xa926,
	0xa92e,
	0xa947,
	0xa952,
	0xa980,
	0xa983,
	0xa9b3,
	0xa9b4,
	0xa9b6,
	0xa9ba,
	0xa9bc,
	0xa9bd,
	0xaa29,
	0xaa2f,
	0xaa31,
	0xaa33,
	0xaa35,
	0xaa40,
	0xaa43,
	0xaa44,
	0xaa4c,
	0xaa4d,
	0xaab0,
	0xaab1,
	0xaab2,
	0xaab5,
	0xaab7,
	0xaab9,
	0xaabe,
	0xaac0,
	0xaac1,
	0xaac2,
	0xaaec,
	0xaaee,
	0xaaf6,
	0xab01,
	0xabe5,
	0xabe6,
	0xabe8,
	0xabe9,
	0xabed,
	0xabf0,
	0xfb1d,
	0xfb1e,
	0xfb1f,
	0xfb29,
	0xfb2a,
	0xfb50,
	0xfd3e,
	0xfd50,
	0xfdfd,
	0xfe00,
	0xfe10,
	0xfe20,
	0xfe30,
	0xfe50,
	0xfe51,
	0xfe52,
	0xfe54,
	0xfe55,
	0xfe56,
	0xfe5f,
	0xfe60,
	0xfe62,
	0xfe64,
	0xfe69,
	0xfe6b,
	0xfe70,
	0xfeff,
	0xff01,
	0xff03,
	0xff06,
	0xff0b,
	0xff0c,
	0xff0d,
	0xff0e,
	0xff10,
	0xff1a,
	0xff1b,
	0xff21,
	0xff3b,
	0xff41,
	0xff5b,
	0xff66,
	0xffe0,
	0xffe2,
	0xffe5,
	0xffe8,
	0xffff,
	0x0,
	0x101,
	0x102,
	0x140,
	0x1d0,
	0x1fd,
	0x280,
	0x800,
	0x91f,
	0x920,
	0xa01,
	0xa10,
	0xa38,
	0xa40,
	0xb39,
	0xb40,
	0xe60,
	0x1000,
	0x1001,
	0x1002,
	0x1038,
	0x1047,
	0x1052,
	0x1066,
	0x1080,
	0x1082,
	0x10b3,
	0x10b7,
	0x10b9,
	0x10bb,
	0x1100,
	0x1103,
	0x1127,
	0x112c,
	0x112d,
	0x1136,
	0x1180,
	0x1182,
	0x11b6,
	0x11bf,
	0x16ab,
	0x16ac,
	0x16ad,
	0x16ae,
	0x16b0,
	0x16b6,
	0x16b7,
	0x16c0,
	0x6f8f,
	0x6f93,
	0xd167,
	0xd16a,
	0xd173,
	0xd17b,
	0xd183,
	0xd185,
	0xd18c,
	0xd1aa,
	0xd1ae,
	0xd200,
	0xd242,
	0xd245,
	0xd360,
	0xd6db,
	0xd6dc,
	0xd715,
	0xd716,
	0xd74f,
	0xd750,
	0xd789,
	0xd78a,
	0xd7c3,
	0xd7c4,
	0xd7ce,
	0xee00,
	0xeef0,
	0xf100,
	0xf110,
	0xf16a,
	0xf170,
	0xf300,
	0xffff,
	0x0,
	0xffff,
	0x0,
	0x1,
	0x100,
	0xffff
#define BIDI_LAST_255 49
};
static const char bidi_data[] = {
	BIDI_BN,
	BIDI_S,
	BIDI_B,
	BIDI_S,
	BIDI_WS,
	BIDI_B,
	BIDI_BN,
	BIDI_B,
	BIDI_S,
	BIDI_WS,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_ES,
	BIDI_CS,
	BIDI_ES,
	BIDI_CS,
	BIDI_EN,
	BIDI_CS,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_BN,
	BIDI_B,
	BIDI_BN,
	BIDI_CS,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_BN,
	BIDI_ON,
	BIDI_ET,
	BIDI_EN,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_EN,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_ET,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_AN,
	BIDI_ON,
	BIDI_AL,
	BIDI_ET,
	BIDI_AL,
	BIDI_CS,
	BIDI_AL,
	BIDI_ON,
	BIDI_NSM,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AN,
	BIDI_ET,
	BIDI_AN,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AN,
	BIDI_ON,
	BIDI_NSM,
	BIDI_AL,
	BIDI_NSM,
	BIDI_ON,
	BIDI_NSM,
	BIDI_AL,
	BIDI_EN,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AL,
	BIDI_NSM,
	BIDI_AL,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_ON,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_AL,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ET,
	BIDI_L,
	BIDI_ET,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ET,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_ET,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_WS,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ET,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_NSM,
	BIDI_WS,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_WS,
	BIDI_BN,
	BIDI_L,
	BIDI_R,
	BIDI_ON,
	BIDI_WS,
	BIDI_B,
	BIDI_LRE,
	BIDI_RLE,
	BIDI_PDF,
	BIDI_LRO,
	BIDI_RLO,
	BIDI_CS,
	BIDI_ET,
	BIDI_ON,
	BIDI_CS,
	BIDI_ON,
	BIDI_WS,
	BIDI_BN,
	BIDI_EN,
	BIDI_L,
	BIDI_EN,
	BIDI_ES,
	BIDI_ON,
	BIDI_L,
	BIDI_EN,
	BIDI_ES,
	BIDI_ON,
	BIDI_L,
	BIDI_ET,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ET,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_ES,
	BIDI_ET,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_EN,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_ON,
	BIDI_WS,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_ON,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ET,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_ES,
	BIDI_R,
	BIDI_AL,
	BIDI_ON,
	BIDI_AL,
	BIDI_ON,
	BIDI_NSM,
	BIDI_ON,
	BIDI_NSM,
	BIDI_ON,
	BIDI_CS,
	BIDI_ON,
	BIDI_CS,
	BIDI_ON,
	BIDI_CS,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_ES,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_AL,
	BIDI_BN,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	BIDI_ES,
	BIDI_CS,
	BIDI_ES,
	BIDI_CS,
	BIDI_EN,
	BIDI_CS,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ET,
	BIDI_ON,
	BIDI_ET,
	BIDI_ON,
	0,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_R,
	BIDI_ON,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_NSM,
	BIDI_R,
	BIDI_ON,
	BIDI_R,
	BIDI_AN,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_BN,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_NSM,
	BIDI_L,
	BIDI_ON,
	BIDI_NSM,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_EN,
	BIDI_AL,
	BIDI_ON,
	BIDI_EN,
	BIDI_L,
	BIDI_ON,
	BIDI_L,
	BIDI_ON,
	0,
	BIDI_L,
	0,
	0,
	BIDI_BN,
	BIDI_NSM,
	0
};
#endif // USE_UNICODE_INC_DATA
