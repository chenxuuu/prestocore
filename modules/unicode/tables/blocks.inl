/** @file blocks.inl
 * This file is auto-generated by modules/unicode/scripts/make_blocks.py.
 * DO NOT EDIT THIS FILE MANUALLY.
 */

#ifdef USE_UNICODE_INC_DATA

enum UnicodeBlockType {
	BLK_No_Block,BLK_BasicLatin,BLK_Latin1Supplement,BLK_LatinExtendedA,
	BLK_LatinExtendedB,BLK_IPAExtensions,BLK_SpacingModifierLetters,BLK_CombiningDiacriticalMarks,
	BLK_GreekandCoptic,BLK_Cyrillic,BLK_CyrillicSupplement,BLK_Armenian,
	BLK_Hebrew,BLK_Arabic,BLK_Syriac,BLK_ArabicSupplement,
	BLK_Thaana,BLK_NKo,BLK_Samaritan,BLK_Mandaic,
	BLK_ArabicExtendedA,BLK_Devanagari,BLK_Bengali,BLK_Gurmukhi,
	BLK_Gujarati,BLK_Oriya,BLK_Tamil,BLK_Telugu,
	BLK_Kannada,BLK_Malayalam,BLK_Sinhala,BLK_Thai,
	BLK_Lao,BLK_Tibetan,BLK_Myanmar,BLK_Georgian,
	BLK_HangulJamo,BLK_Ethiopic,BLK_EthiopicSupplement,BLK_Cherokee,
	BLK_UnifiedCanadianAboriginalSyllabics,BLK_Ogham,BLK_Runic,BLK_Tagalog,
	BLK_Hanunoo,BLK_Buhid,BLK_Tagbanwa,BLK_Khmer,
	BLK_Mongolian,BLK_UnifiedCanadianAboriginalSyllabicsExtended,BLK_Limbu,BLK_TaiLe,
	BLK_NewTaiLue,BLK_KhmerSymbols,BLK_Buginese,BLK_TaiTham,
	BLK_Balinese,BLK_Sundanese,BLK_Batak,BLK_Lepcha,
	BLK_OlChiki,BLK_SundaneseSupplement,BLK_VedicExtensions,BLK_PhoneticExtensions,
	BLK_PhoneticExtensionsSupplement,BLK_CombiningDiacriticalMarksSupplement,BLK_LatinExtendedAdditional,BLK_GreekExtended,
	BLK_GeneralPunctuation,BLK_SuperscriptsandSubscripts,BLK_CurrencySymbols,BLK_CombiningDiacriticalMarksforSymbols,
	BLK_LetterlikeSymbols,BLK_NumberForms,BLK_Arrows,BLK_MathematicalOperators,
	BLK_MiscellaneousTechnical,BLK_ControlPictures,BLK_OpticalCharacterRecognition,BLK_EnclosedAlphanumerics,
	BLK_BoxDrawing,BLK_BlockElements,BLK_GeometricShapes,BLK_MiscellaneousSymbols,
	BLK_Dingbats,BLK_MiscellaneousMathematicalSymbolsA,BLK_SupplementalArrowsA,BLK_BraillePatterns,
	BLK_SupplementalArrowsB,BLK_MiscellaneousMathematicalSymbolsB,BLK_SupplementalMathematicalOperators,BLK_MiscellaneousSymbolsandArrows,
	BLK_Glagolitic,BLK_LatinExtendedC,BLK_Coptic,BLK_GeorgianSupplement,
	BLK_Tifinagh,BLK_EthiopicExtended,BLK_CyrillicExtendedA,BLK_SupplementalPunctuation,
	BLK_CJKRadicalsSupplement,BLK_KangxiRadicals,BLK_IdeographicDescriptionCharacters,BLK_CJKSymbolsandPunctuation,
	BLK_Hiragana,BLK_Katakana,BLK_Bopomofo,BLK_HangulCompatibilityJamo,
	BLK_Kanbun,BLK_BopomofoExtended,BLK_CJKStrokes,BLK_KatakanaPhoneticExtensions,
	BLK_EnclosedCJKLettersandMonths,BLK_CJKCompatibility,BLK_CJKUnifiedIdeographsExtensionA,BLK_YijingHexagramSymbols,
	BLK_CJKUnifiedIdeographs,BLK_YiSyllables,BLK_YiRadicals,BLK_Lisu,
	BLK_Vai,BLK_CyrillicExtendedB,BLK_Bamum,BLK_ModifierToneLetters,
	BLK_LatinExtendedD,BLK_SylotiNagri,BLK_CommonIndicNumberForms,BLK_Phagspa,
	BLK_Saurashtra,BLK_DevanagariExtended,BLK_KayahLi,BLK_Rejang,
	BLK_HangulJamoExtendedA,BLK_Javanese,BLK_Cham,BLK_MyanmarExtendedA,
	BLK_TaiViet,BLK_MeeteiMayekExtensions,BLK_EthiopicExtendedA,BLK_MeeteiMayek,
	BLK_HangulSyllables,BLK_HangulJamoExtendedB,BLK_HighSurrogates,BLK_HighPrivateUseSurrogates,
	BLK_LowSurrogates,BLK_PrivateUseArea,BLK_CJKCompatibilityIdeographs,BLK_AlphabeticPresentationForms,
	BLK_ArabicPresentationFormsA,BLK_VariationSelectors,BLK_VerticalForms,BLK_CombiningHalfMarks,
	BLK_CJKCompatibilityForms,BLK_SmallFormVariants,BLK_ArabicPresentationFormsB,BLK_HalfwidthandFullwidthForms,
	BLK_Specials,BLK_LinearBSyllabary,BLK_LinearBIdeograms,BLK_AegeanNumbers,
	BLK_AncientGreekNumbers,BLK_AncientSymbols,BLK_PhaistosDisc,BLK_Lycian,
	BLK_Carian,BLK_OldItalic,BLK_Gothic,BLK_Ugaritic,
	BLK_OldPersian,BLK_Deseret,BLK_Shavian,BLK_Osmanya,
	BLK_CypriotSyllabary,BLK_ImperialAramaic,BLK_Phoenician,BLK_Lydian,
	BLK_MeroiticHieroglyphs,BLK_MeroiticCursive,BLK_Kharoshthi,BLK_OldSouthArabian,
	BLK_Avestan,BLK_InscriptionalParthian,BLK_InscriptionalPahlavi,BLK_OldTurkic,
	BLK_RumiNumeralSymbols,BLK_Brahmi,BLK_Kaithi,BLK_SoraSompeng,
	BLK_Chakma,BLK_Sharada,BLK_Takri,BLK_Cuneiform,
	BLK_CuneiformNumbersandPunctuation,BLK_EgyptianHieroglyphs,BLK_BamumSupplement,BLK_Miao,
	BLK_KanaSupplement,BLK_ByzantineMusicalSymbols,BLK_MusicalSymbols,BLK_AncientGreekMusicalNotation,
	BLK_TaiXuanJingSymbols,BLK_CountingRodNumerals,BLK_MathematicalAlphanumericSymbols,BLK_ArabicMathematicalAlphabeticSymbols,
	BLK_MahjongTiles,BLK_DominoTiles,BLK_PlayingCards,BLK_EnclosedAlphanumericSupplement,
	BLK_EnclosedIdeographicSupplement,BLK_MiscellaneousSymbolsAndPictographs,BLK_Emoticons,BLK_TransportAndMapSymbols,
	BLK_AlchemicalSymbols,BLK_CJKUnifiedIdeographsExtensionB,BLK_CJKUnifiedIdeographsExtensionC,BLK_CJKUnifiedIdeographsExtensionD,
	BLK_CJKCompatibilityIdeographsSupplement,BLK_Tags,BLK_VariationSelectorsSupplement,BLK_SupplementaryPrivateUseAreaA,
	BLK_SupplementaryPrivateUseAreaB,
};

static const UnicodePoint table_blocks_ranges[] = {
	0x0000, 0x0080, 0x0100, 0x0180, 0x0250, 0x02b0, 0x0300, 0x0370,
	0x0400, 0x0500, 0x0530, 0x0590, 0x0600, 0x0700, 0x0750, 0x0780,
	0x07c0, 0x0800, 0x0840, 0x0860, 0x08a0, 0x0900, 0x0980, 0x0a00,
	0x0a80, 0x0b00, 0x0b80, 0x0c00, 0x0c80, 0x0d00, 0x0d80, 0x0e00,
	0x0e80, 0x0f00, 0x1000, 0x10a0, 0x1100, 0x1200, 0x1380, 0x13a0,
	0x1400, 0x1680, 0x16a0, 0x1700, 0x1720, 0x1740, 0x1760, 0x1780,
	0x1800, 0x18b0, 0x1900, 0x1950, 0x1980, 0x19e0, 0x1a00, 0x1a20,
	0x1ab0, 0x1b00, 0x1b80, 0x1bc0, 0x1c00, 0x1c50, 0x1c80, 0x1cc0,
	0x1cd0, 0x1d00, 0x1d80, 0x1dc0, 0x1e00, 0x1f00, 0x2000, 0x2070,
	0x20a0, 0x20d0, 0x2100, 0x2150, 0x2190, 0x2200, 0x2300, 0x2400,
	0x2440, 0x2460, 0x2500, 0x2580, 0x25a0, 0x2600, 0x2700, 0x27c0,
	0x27f0, 0x2800, 0x2900, 0x2980, 0x2a00, 0x2b00, 0x2c00, 0x2c60,
	0x2c80, 0x2d00, 0x2d30, 0x2d80, 0x2de0, 0x2e00, 0x2e80, 0x2f00,
	0x2fe0, 0x2ff0, 0x3000, 0x3040, 0x30a0, 0x3100, 0x3130, 0x3190,
	0x31a0, 0x31c0, 0x31f0, 0x3200, 0x3300, 0x3400, 0x4dc0, 0x4e00,
	0xa000, 0xa490, 0xa4d0, 0xa500, 0xa640, 0xa6a0, 0xa700, 0xa720,
	0xa800, 0xa830, 0xa840, 0xa880, 0xa8e0, 0xa900, 0xa930, 0xa960,
	0xa980, 0xa9e0, 0xaa00, 0xaa60, 0xaa80, 0xaae0, 0xab00, 0xab30,
	0xabc0, 0xac00, 0xd7b0, 0xd800, 0xdb80, 0xdc00, 0xe000, 0xf900,
	0xfb00, 0xfb50, 0xfe00, 0xfe10, 0xfe20, 0xfe30, 0xfe50, 0xfe70,
	0xff00, 0xfff0, 0x10000, 0x10080, 0x10100, 0x10140, 0x10190, 0x101d0,
	0x10200, 0x10280, 0x102a0, 0x102e0, 0x10300, 0x10330, 0x10350, 0x10380,
	0x103a0, 0x103e0, 0x10400, 0x10450, 0x10480, 0x104b0, 0x10800, 0x10840,
	0x10860, 0x10900, 0x10920, 0x10940, 0x10980, 0x109a0, 0x10a00, 0x10a60,
	0x10a80, 0x10b00, 0x10b40, 0x10b60, 0x10b80, 0x10c00, 0x10c50, 0x10e60,
	0x10e80, 0x11000, 0x11080, 0x110d0, 0x11100, 0x11150, 0x11180, 0x111e0,
	0x11680, 0x116d0, 0x12000, 0x12400, 0x12480, 0x13000, 0x13430, 0x16800,
	0x16a40, 0x16f00, 0x16fa0, 0x1b000, 0x1b100, 0x1d000, 0x1d100, 0x1d200,
	0x1d250, 0x1d300, 0x1d360, 0x1d380, 0x1d400, 0x1d800, 0x1ee00, 0x1ef00,
	0x1f000, 0x1f030, 0x1f0a0, 0x1f100, 0x1f200, 0x1f300, 0x1f600, 0x1f650,
	0x1f680, 0x1f700, 0x1f780, 0x20000, 0x2a6e0, 0x2a700, 0x2b740, 0x2b820,
	0x2f800, 0x2fa20, 0xe0000, 0xe0080, 0xe0100, 0xe01f0, 0xf0000, 0x100000,
	0x10ffff, 0xffffff,
};

static const int table_blocks_values[] = {
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
	17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
	32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
	48, 49, 50, 51, 52, 53, 54, 55, 0, 56, 57, 58, 59, 60, 0, 61,
	62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
	78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93,
	94, 95, 96, 97, 98, 99, 100, 101, 0, 102, 103, 104, 105, 106, 107, 108,
	109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
	125, 126, 127, 128, 129, 130, 131, 132, 133, 0, 134, 135, 136, 137, 138, 0,
	139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154,
	155, 156, 157, 158, 159, 160, 161, 162, 0, 163, 164, 0, 165, 166, 0, 167,
	168, 0, 169, 170, 171, 0, 172, 173, 0, 174, 175, 0, 176, 177, 178, 179,
	0, 180, 181, 182, 0, 183, 0, 184, 0, 185, 186, 187, 188, 0, 189, 0,
	190, 0, 191, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 198, 199,
	0, 200, 201, 0, 202, 0, 203, 0, 204, 205, 206, 207, 208, 209, 210, 0,
	211, 212, 0, 213, 0, 214, 215, 0, 216, 0, 217, 0, 218, 0, 219, 220,
	0,
};

#endif // USE_UNICODE_INC_DATA

