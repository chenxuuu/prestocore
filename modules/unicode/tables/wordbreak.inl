/** @file wordbreak.inl
 * This file is auto-generated by modules/unicode/scripts/make_wordbreak.pike.
 * DO NOT EDIT THIS FILE MANUALLY.
 */

#ifdef USE_UNICODE_INC_DATA
static const uni_char word_break_chars[] = {
	0x0000, 0x000a, 0x000b, 0x000d, 0x000e, 0x0027, 0x0028, 0x002c, 
	0x002d, 0x002e, 0x002f, 0x0030, 0x003a, 0x003b, 0x0041, 0x005b, 
	0x005f, 0x0060, 0x0061, 0x007b, 0x0085, 0x0086, 0x00aa, 0x00ab, 
	0x00ad, 0x00ae, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00ba, 0x00bb, 
	0x00c0, 0x00d7, 0x00d8, 0x00f7, 0x00f8, 0x02c2, 0x02c6, 0x02d2, 
	0x02e0, 0x02e5, 0x02ec, 0x02ed, 0x02ee, 0x02ef, 0x0300, 0x0370, 
	0x0375, 0x0376, 0x0378, 0x037a, 0x037e, 0x037f, 0x0386, 0x0387, 
	0x0388, 0x038b, 0x038c, 0x038d, 0x038e, 0x03a2, 0x03a3, 0x03f6, 
	0x03f7, 0x0482, 0x0483, 0x048a, 0x0528, 0x0531, 0x0557, 0x0559, 
	0x055a, 0x0561, 0x0588, 0x0589, 0x058a, 0x0591, 0x05be, 0x05bf, 
	0x05c0, 0x05c1, 0x05c3, 0x05c4, 0x05c6, 0x05c7, 0x05c8, 0x05d0, 
	0x05eb, 0x05f0, 0x05f4, 0x05f5, 0x0600, 0x0605, 0x060c, 0x060e, 
	0x0610, 0x061b, 0x0620, 0x064b, 0x0660, 0x066a, 0x066b, 0x066c, 
	0x066d, 0x066e, 0x0670, 0x0671, 0x06d4, 0x06d5, 0x06d6, 0x06dd, 
	0x06de, 0x06df, 0x06e5, 0x06e7, 0x06e9, 0x06ea, 0x06ee, 0x06f0, 
	0x06fa, 0x06fd, 0x06ff, 0x0700, 0x070f, 0x0710, 0x0711, 0x0712, 
	0x0730, 0x074b, 0x074d, 0x07a6, 0x07b1, 0x07b2, 0x07c0, 0x07ca, 
	0x07eb, 0x07f4, 0x07f6, 0x07f8, 0x07f9, 0x07fa, 0x07fb, 0x0800, 
	0x0816, 0x081a, 0x081b, 0x0824, 0x0825, 0x0828, 0x0829, 0x082e, 
	0x0840, 0x0859, 0x085c, 0x08a0, 0x08a1, 0x08a2, 0x08ad, 0x08e4, 
	0x08ff, 0x0900, 0x0904, 0x093a, 0x093d, 0x093e, 0x0950, 0x0951, 
	0x0958, 0x0962, 0x0964, 0x0966, 0x0970, 0x0971, 0x0978, 0x0979, 
	0x0980, 0x0981, 0x0984, 0x0985, 0x098d, 0x098f, 0x0991, 0x0993, 
	0x09a9, 0x09aa, 0x09b1, 0x09b2, 0x09b3, 0x09b6, 0x09ba, 0x09bc, 
	0x09bd, 0x09be, 0x09c5, 0x09c7, 0x09c9, 0x09cb, 0x09ce, 0x09cf, 
	0x09d7, 0x09d8, 0x09dc, 0x09de, 0x09df, 0x09e2, 0x09e4, 0x09e6, 
	0x09f0, 0x09f2, 0x0a01, 0x0a04, 0x0a05, 0x0a0b, 0x0a0f, 0x0a11, 
	0x0a13, 0x0a29, 0x0a2a, 0x0a31, 0x0a32, 0x0a34, 0x0a35, 0x0a37, 
	0x0a38, 0x0a3a, 0x0a3c, 0x0a3d, 0x0a3e, 0x0a43, 0x0a47, 0x0a49, 
	0x0a4b, 0x0a4e, 0x0a51, 0x0a52, 0x0a59, 0x0a5d, 0x0a5e, 0x0a5f, 
	0x0a66, 0x0a70, 0x0a72, 0x0a75, 0x0a76, 0x0a81, 0x0a84, 0x0a85, 
	0x0a8e, 0x0a8f, 0x0a92, 0x0a93, 0x0aa9, 0x0aaa, 0x0ab1, 0x0ab2, 
	0x0ab4, 0x0ab5, 0x0aba, 0x0abc, 0x0abd, 0x0abe, 0x0ac6, 0x0ac7, 
	0x0aca, 0x0acb, 0x0ace, 0x0ad0, 0x0ad1, 0x0ae0, 0x0ae2, 0x0ae4, 
	0x0ae6, 0x0af0, 0x0b01, 0x0b04, 0x0b05, 0x0b0d, 0x0b0f, 0x0b11, 
	0x0b13, 0x0b29, 0x0b2a, 0x0b31, 0x0b32, 0x0b34, 0x0b35, 0x0b3a, 
	0x0b3c, 0x0b3d, 0x0b3e, 0x0b45, 0x0b47, 0x0b49, 0x0b4b, 0x0b4e, 
	0x0b56, 0x0b58, 0x0b5c, 0x0b5e, 0x0b5f, 0x0b62, 0x0b64, 0x0b66, 
	0x0b70, 0x0b71, 0x0b72, 0x0b82, 0x0b83, 0x0b84, 0x0b85, 0x0b8b, 
	0x0b8e, 0x0b91, 0x0b92, 0x0b96, 0x0b99, 0x0b9b, 0x0b9c, 0x0b9d, 
	0x0b9e, 0x0ba0, 0x0ba3, 0x0ba5, 0x0ba8, 0x0bab, 0x0bae, 0x0bba, 
	0x0bbe, 0x0bc3, 0x0bc6, 0x0bc9, 0x0bca, 0x0bce, 0x0bd0, 0x0bd1, 
	0x0bd7, 0x0bd8, 0x0be6, 0x0bf0, 0x0c01, 0x0c04, 0x0c05, 0x0c0d, 
	0x0c0e, 0x0c11, 0x0c12, 0x0c29, 0x0c2a, 0x0c34, 0x0c35, 0x0c3a, 
	0x0c3d, 0x0c3e, 0x0c45, 0x0c46, 0x0c49, 0x0c4a, 0x0c4e, 0x0c55, 
	0x0c57, 0x0c58, 0x0c5a, 0x0c60, 0x0c62, 0x0c64, 0x0c66, 0x0c70, 
	0x0c82, 0x0c84, 0x0c85, 0x0c8d, 0x0c8e, 0x0c91, 0x0c92, 0x0ca9, 
	0x0caa, 0x0cb4, 0x0cb5, 0x0cba, 0x0cbc, 0x0cbd, 0x0cbe, 0x0cc5, 
	0x0cc6, 0x0cc9, 0x0cca, 0x0cce, 0x0cd5, 0x0cd7, 0x0cde, 0x0cdf, 
	0x0ce0, 0x0ce2, 0x0ce4, 0x0ce6, 0x0cf0, 0x0cf1, 0x0cf3, 0x0d02, 
	0x0d04, 0x0d05, 0x0d0d, 0x0d0e, 0x0d11, 0x0d12, 0x0d3b, 0x0d3d, 
	0x0d3e, 0x0d45, 0x0d46, 0x0d49, 0x0d4a, 0x0d4e, 0x0d4f, 0x0d57, 
	0x0d58, 0x0d60, 0x0d62, 0x0d64, 0x0d66, 0x0d70, 0x0d7a, 0x0d80, 
	0x0d82, 0x0d84, 0x0d85, 0x0d97, 0x0d9a, 0x0db2, 0x0db3, 0x0dbc, 
	0x0dbd, 0x0dbe, 0x0dc0, 0x0dc7, 0x0dca, 0x0dcb, 0x0dcf, 0x0dd5, 
	0x0dd6, 0x0dd7, 0x0dd8, 0x0de0, 0x0df2, 0x0df4, 0x0e31, 0x0e32, 
	0x0e34, 0x0e3b, 0x0e47, 0x0e4f, 0x0e50, 0x0e5a, 0x0eb1, 0x0eb2, 
	0x0eb4, 0x0eba, 0x0ebb, 0x0ebd, 0x0ec8, 0x0ece, 0x0ed0, 0x0eda, 
	0x0f00, 0x0f01, 0x0f18, 0x0f1a, 0x0f20, 0x0f2a, 0x0f35, 0x0f36, 
	0x0f37, 0x0f38, 0x0f39, 0x0f3a, 0x0f3e, 0x0f40, 0x0f48, 0x0f49, 
	0x0f6d, 0x0f71, 0x0f85, 0x0f86, 0x0f88, 0x0f8d, 0x0f98, 0x0f99, 
	0x0fbd, 0x0fc6, 0x0fc7, 0x102b, 0x103f, 0x1040, 0x104a, 0x1056, 
	0x105a, 0x105e, 0x1061, 0x1062, 0x1065, 0x1067, 0x106e, 0x1071, 
	0x1075, 0x1082, 0x108e, 0x108f, 0x1090, 0x109a, 0x109e, 0x10a0, 
	0x10c6, 0x10c7, 0x10c8, 0x10cd, 0x10ce, 0x10d0, 0x10fb, 0x10fc, 
	0x1249, 0x124a, 0x124e, 0x1250, 0x1257, 0x1258, 0x1259, 0x125a, 
	0x125e, 0x1260, 0x1289, 0x128a, 0x128e, 0x1290, 0x12b1, 0x12b2, 
	0x12b6, 0x12b8, 0x12bf, 0x12c0, 0x12c1, 0x12c2, 0x12c6, 0x12c8, 
	0x12d7, 0x12d8, 0x1311, 0x1312, 0x1316, 0x1318, 0x135b, 0x135d, 
	0x1360, 0x1380, 0x1390, 0x13a0, 0x13f5, 0x1401, 0x166d, 0x166f, 
	0x1680, 0x1681, 0x169b, 0x16a0, 0x16eb, 0x16ee, 0x16f1, 0x1700, 
	0x170d, 0x170e, 0x1712, 0x1715, 0x1720, 0x1732, 0x1735, 0x1740, 
	0x1752, 0x1754, 0x1760, 0x176d, 0x176e, 0x1771, 0x1772, 0x1774, 
	0x17b4, 0x17d4, 0x17dd, 0x17de, 0x17e0, 0x17ea, 0x180b, 0x180e, 
	0x1810, 0x181a, 0x1820, 0x1878, 0x1880, 0x18a9, 0x18aa, 0x18ab, 
	0x18b0, 0x18f6, 0x1900, 0x191d, 0x1920, 0x192c, 0x1930, 0x193c, 
	0x1946, 0x1950, 0x19b0, 0x19c1, 0x19c8, 0x19ca, 0x19d0, 0x19da, 
	0x1a00, 0x1a17, 0x1a1c, 0x1a55, 0x1a5f, 0x1a60, 0x1a7d, 0x1a7f, 
	0x1a80, 0x1a8a, 0x1a90, 0x1a9a, 0x1b00, 0x1b05, 0x1b34, 0x1b45, 
	0x1b4c, 0x1b50, 0x1b5a, 0x1b6b, 0x1b74, 0x1b80, 0x1b83, 0x1ba1, 
	0x1bae, 0x1bb0, 0x1bba, 0x1be6, 0x1bf4, 0x1c00, 0x1c24, 0x1c38, 
	0x1c40, 0x1c4a, 0x1c4d, 0x1c50, 0x1c5a, 0x1c7e, 0x1cd0, 0x1cd3, 
	0x1cd4, 0x1ce9, 0x1ced, 0x1cee, 0x1cf2, 0x1cf5, 0x1cf7, 0x1d00, 
	0x1dc0, 0x1de7, 0x1dfc, 0x1e00, 0x1f16, 0x1f18, 0x1f1e, 0x1f20, 
	0x1f46, 0x1f48, 0x1f4e, 0x1f50, 0x1f58, 0x1f59, 0x1f5a, 0x1f5b, 
	0x1f5c, 0x1f5d, 0x1f5e, 0x1f5f, 0x1f7e, 0x1f80, 0x1fb5, 0x1fb6, 
	0x1fbd, 0x1fbe, 0x1fbf, 0x1fc2, 0x1fc5, 0x1fc6, 0x1fcd, 0x1fd0, 
	0x1fd4, 0x1fd6, 0x1fdc, 0x1fe0, 0x1fed, 0x1ff2, 0x1ff5, 0x1ff6, 
	0x1ffd, 0x200c, 0x200e, 0x2010, 0x2018, 0x201a, 0x2024, 0x2025, 
	0x2027, 0x2028, 0x202a, 0x202f, 0x203f, 0x2041, 0x2044, 0x2045, 
	0x2054, 0x2055, 0x2060, 0x2065, 0x206a, 0x2070, 0x2071, 0x2072, 
	0x207f, 0x2080, 0x2090, 0x209d, 0x20d0, 0x20f1, 0x2102, 0x2103, 
	0x2107, 0x2108, 0x210a, 0x2114, 0x2115, 0x2116, 0x2119, 0x211e, 
	0x2124, 0x2125, 0x2126, 0x2127, 0x2128, 0x2129, 0x212a, 0x212e, 
	0x212f, 0x213a, 0x213c, 0x2140, 0x2145, 0x214a, 0x214e, 0x214f, 
	0x2160, 0x2189, 0x24b6, 0x24ea, 0x2c00, 0x2c2f, 0x2c30, 0x2c5f, 
	0x2c60, 0x2ce5, 0x2ceb, 0x2cef, 0x2cf2, 0x2cf4, 0x2d00, 0x2d26, 
	0x2d27, 0x2d28, 0x2d2d, 0x2d2e, 0x2d30, 0x2d68, 0x2d6f, 0x2d70, 
	0x2d7f, 0x2d80, 0x2d97, 0x2da0, 0x2da7, 0x2da8, 0x2daf, 0x2db0, 
	0x2db7, 0x2db8, 0x2dbf, 0x2dc0, 0x2dc7, 0x2dc8, 0x2dcf, 0x2dd0, 
	0x2dd7, 0x2dd8, 0x2ddf, 0x2de0, 0x2e00, 0x2e2f, 0x2e30, 0x3005, 
	0x3006, 0x302a, 0x3030, 0x3031, 0x3036, 0x303b, 0x303d, 0x3099, 
	0x309b, 0x309d, 0x30a0, 0x30fb, 0x30fc, 0x3100, 0x3105, 0x312e, 
	0x3131, 0x318f, 0x31a0, 0x31bb, 0x31f0, 0x3200, 0x32d0, 0x32ff, 
	0x3300, 0x3358, 0xa000, 0xa48d, 0xa4d0, 0xa4fe, 0xa500, 0xa60d, 
	0xa610, 0xa620, 0xa62a, 0xa62c, 0xa640, 0xa66f, 0xa673, 0xa674, 
	0xa67e, 0xa67f, 0xa698, 0xa69f, 0xa6a0, 0xa6f0, 0xa6f2, 0xa717, 
	0xa720, 0xa722, 0xa789, 0xa78b, 0xa78f, 0xa790, 0xa794, 0xa7a0, 
	0xa7ab, 0xa7f8, 0xa802, 0xa803, 0xa806, 0xa807, 0xa80b, 0xa80c, 
	0xa823, 0xa828, 0xa840, 0xa874, 0xa880, 0xa882, 0xa8b4, 0xa8c5, 
	0xa8d0, 0xa8da, 0xa8e0, 0xa8f2, 0xa8f8, 0xa8fb, 0xa8fc, 0xa900, 
	0xa90a, 0xa926, 0xa92e, 0xa930, 0xa947, 0xa954, 0xa960, 0xa97d, 
	0xa980, 0xa984, 0xa9b3, 0xa9c1, 0xa9cf, 0xa9d0, 0xa9da, 0xaa00, 
	0xaa29, 0xaa37, 0xaa40, 0xaa43, 0xaa44, 0xaa4c, 0xaa4e, 0xaa50, 
	0xaa5a, 0xaa7b, 0xaa7c, 0xaab0, 0xaab1, 0xaab2, 0xaab5, 0xaab7, 
	0xaab9, 0xaabe, 0xaac0, 0xaac1, 0xaac2, 0xaae0, 0xaaeb, 0xaaf0, 
	0xaaf2, 0xaaf5, 0xaaf7, 0xab01, 0xab07, 0xab09, 0xab0f, 0xab11, 
	0xab17, 0xab20, 0xab27, 0xab28, 0xab2f, 0xabc0, 0xabe3, 0xabeb, 
	0xabec, 0xabee, 0xabf0, 0xabfa, 0xac00, 0xd7a4, 0xd7b0, 0xd7c7, 
	0xd7cb, 0xd7fc, 0xfb00, 0xfb07, 0xfb13, 0xfb18, 0xfb1d, 0xfb1e, 
	0xfb1f, 0xfb29, 0xfb2a, 0xfb37, 0xfb38, 0xfb3d, 0xfb3e, 0xfb3f, 
	0xfb40, 0xfb42, 0xfb43, 0xfb45, 0xfb46, 0xfbb2, 0xfbd3, 0xfd3e, 
	0xfd50, 0xfd90, 0xfd92, 0xfdc8, 0xfdf0, 0xfdfc, 0xfe00, 0xfe10, 
	0xfe11, 0xfe13, 0xfe14, 0xfe20, 0xfe27, 0xfe33, 0xfe35, 0xfe4d, 
	0xfe50, 0xfe51, 0xfe52, 0xfe53, 0xfe54, 0xfe55, 0xfe56, 0xfe70, 
	0xfe75, 0xfe76, 0xfefd, 0xfeff, 0xff00, 0xff07, 0xff08, 0xff0c, 
	0xff0d, 0xff0e, 0xff0f, 0xff1a, 0xff1b, 0xff1c, 0xff21, 0xff3b, 
	0xff3f, 0xff40, 0xff41, 0xff5b, 0xff66, 0xff9e, 0xffa0, 0xffbf, 
	0xffc2, 0xffc8, 0xffca, 0xffd0, 0xffd2, 0xffd8, 0xffda, 0xffdd, 
	0xfff9, 0xfffc
};
#endif // USE_UNICODE_INC_DATA
static const char word_break_data[] = {
	WB_Other, WB_LF, WB_Newline, WB_CR, WB_Other, WB_MidNumLet, WB_Other, WB_MidNum, 
	WB_Other, WB_MidNum, WB_Other, WB_Numeric, WB_MidLetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ExtendNumLet, WB_Other, WB_ALetter, WB_Other, WB_Newline, WB_Other, WB_ALetter, WB_Other, 
	WB_Format, WB_Other, WB_ALetter, WB_Other, WB_MidLetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_MidNum, WB_Other, WB_ALetter, WB_MidLetter, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_MidNum, WB_Other, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_MidLetter, WB_Other, WB_Format, WB_Other, WB_MidNum, WB_Other, 
	WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_Numeric, WB_Other, WB_Numeric, WB_MidNum, 
	WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Format, 
	WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Numeric, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Format, WB_ALetter, WB_Extend, WB_ALetter, 
	WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Other, WB_Numeric, WB_ALetter, 
	WB_Extend, WB_ALetter, WB_Other, WB_MidNum, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_Other, 
	WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, 
	WB_ALetter, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, 
	WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Other, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_Numeric, 
	WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_Numeric, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, 
	WB_Numeric, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_Numeric, 
	WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_Numeric, WB_Other, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_ALetter, WB_Other, WB_Extend, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_Extend, 
	WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, 
	WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Numeric, WB_Extend, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_Other, 
	WB_Numeric, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, 
	WB_Numeric, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Numeric, WB_Other, 
	WB_ALetter, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, 
	WB_Numeric, WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, 
	WB_Other, WB_Numeric, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Extend, 
	WB_ALetter, WB_Numeric, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_Other, 
	WB_Numeric, WB_Other, WB_ALetter, WB_Numeric, WB_ALetter, WB_Other, WB_Extend, WB_Other, 
	WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Extend, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_Extend, WB_Format, WB_Other, WB_MidNumLet, WB_Other, WB_MidNumLet, WB_Other, 
	WB_MidLetter, WB_Newline, WB_Format, WB_Other, WB_ExtendNumLet, WB_Other, WB_MidNum, WB_Other, 
	WB_ExtendNumLet, WB_Other, WB_Format, WB_Other, WB_Format, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_Extend, WB_Other, WB_Katakana, WB_Other, WB_ALetter, WB_Other, WB_Extend, 
	WB_Katakana, WB_Other, WB_Katakana, WB_Other, WB_Katakana, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Katakana, WB_Other, WB_Katakana, WB_Other, 
	WB_Katakana, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Numeric, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_ALetter, 
	WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_ALetter, WB_Extend, WB_Other, 
	WB_Numeric, WB_Other, WB_Extend, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Numeric, 
	WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Other, 
	WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Numeric, WB_Other, WB_ALetter, 
	WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_ALetter, WB_Extend, WB_Other, WB_Numeric, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_Extend, 
	WB_Other, WB_Extend, WB_Other, WB_Extend, WB_Other, WB_ALetter, WB_Extend, WB_Other, 
	WB_ALetter, WB_Extend, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, WB_Other, 
	WB_Extend, WB_Other, WB_Numeric, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Extend, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_Extend, WB_MidNum, 
	WB_Other, WB_MidLetter, WB_Other, WB_Extend, WB_Other, WB_ExtendNumLet, WB_Other, WB_ExtendNumLet, 
	WB_MidNum, WB_Other, WB_MidNumLet, WB_Other, WB_MidNum, WB_MidLetter, WB_Other, WB_ALetter, 
	WB_Other, WB_ALetter, WB_Other, WB_Format, WB_Other, WB_MidNumLet, WB_Other, WB_MidNum, 
	WB_Other, WB_MidNumLet, WB_Other, WB_MidLetter, WB_MidNum, WB_Other, WB_ALetter, WB_Other, 
	WB_ExtendNumLet, WB_Other, WB_ALetter, WB_Other, WB_Katakana, WB_Extend, WB_ALetter, WB_Other, 
	WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, WB_ALetter, WB_Other, 
	WB_Format, WB_Other
};
