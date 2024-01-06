#ifndef TILES_H
#define TILES_H


typedef enum {
    TILE_TYPE_0,    // 0x0
    TILE_TYPE_1,    // 0x1
    TILE_TYPE_2,    // 0x2
    TILE_TYPE_3,    // 0x3
    TILE_TYPE_4,    // 0x4
    TILE_TYPE_5,    // 0x5
    TILE_TYPE_6,    // 0x6
    TILE_TYPE_7,    // 0x7
    TILE_TYPE_8,    // 0x8
    TILE_TYPE_9,    // 0x9
    TILE_TYPE_10,   // 0xa
    TILE_TYPE_11,   // 0xb
    TILE_TYPE_12,   // 0xc
    TILE_TYPE_13,   // 0xd
    TILE_TYPE_14,   // 0xe
    TILE_TYPE_15,   // 0xf
    TILE_TYPE_16,   // 0x10
    TILE_TYPE_17,   // 0x11
    TILE_TYPE_18,   // 0x12
    TILE_TYPE_19,   // 0x13
    TILE_TYPE_20,   // 0x14
    TILE_TYPE_21,   // 0x15
    TILE_TYPE_22,   // 0x16
    TILE_TYPE_23,   // 0x17
    TILE_TYPE_24,   // 0x18
    TILE_TYPE_25,   // 0x19
    TILE_TYPE_26,   // 0x1a
    TILE_TYPE_27,   // 0x1b
    TILE_TYPE_28,   // 0x1c CUT_BUSH
    TILE_TYPE_29,   // 0x1d CUT_GRASS
    TILE_TYPE_30,   // 0x1e CUT_SIGNPOST
    TILE_TYPE_31,   // 0x1f CUT_TREE
    TILE_TYPE_32,   // 0x20
    TILE_TYPE_33,   // 0x21
    TILE_TYPE_34,   // 0x22
    TILE_TYPE_35,   // 0x23
    TILE_TYPE_36,   // 0x24
    TILE_TYPE_37,   // 0x25
    TILE_TYPE_38,   // 0x26
    TILE_TYPE_39,   // 0x27
    TILE_TYPE_40,   // 0x28
    TILE_TYPE_41,   // 0x29
    TILE_TYPE_42,   // 0x2a
    TILE_TYPE_43,   // 0x2b
    TILE_TYPE_44,   // 0x2c
    TILE_TYPE_45,   // 0x2d
    TILE_TYPE_46,   // 0x2e
    TILE_TYPE_47,   // 0x2f
    TILE_TYPE_48,   // 0x30
    TILE_TYPE_49,   // 0x31
    TILE_TYPE_50,   // 0x32
    TILE_TYPE_51,   // 0x33
    TILE_TYPE_52,   // 0x34
    TILE_TYPE_53,   // 0x35
    TILE_TYPE_54,   // 0x36
    TILE_TYPE_55,   // 0x37
    TILE_TYPE_56,   // 0x38
    TILE_TYPE_57,   // 0x39
    TILE_TYPE_58,   // 0x3a
    TILE_TYPE_59,   // 0x3b
    TILE_TYPE_60,   // 0x3c
    TILE_TYPE_61,   // 0x3d
    TILE_TYPE_62,   // 0x3e
    TILE_TYPE_63,   // 0x3f
    TILE_TYPE_64,   // 0x40
    TILE_TYPE_65,   // 0x41
    TILE_TYPE_66,   // 0x42
    TILE_TYPE_67,   // 0x43
    TILE_TYPE_68,   // 0x44
    TILE_TYPE_69,   // 0x45
    TILE_TYPE_70,   // 0x46
    TILE_TYPE_71,   // 0x47
    TILE_TYPE_72,   // 0x48
    TILE_TYPE_73,   // 0x49
    TILE_TYPE_74,   // 0x4a
    TILE_TYPE_75,   // 0x4b
    TILE_TYPE_76,   // 0x4c
    TILE_TYPE_77,   // 0x4d
    TILE_TYPE_78,   // 0x4e
    TILE_TYPE_79,   // 0x4f
    TILE_TYPE_80,   // 0x50
    TILE_TYPE_81,   // 0x51
    TILE_TYPE_82,   // 0x52
    TILE_TYPE_83,   // 0x53
    TILE_TYPE_84,   // 0x54
    TILE_TYPE_85,   // 0x55 ROCK
    TILE_TYPE_86,   // 0x56
    TILE_TYPE_87,   // 0x57
    TILE_TYPE_88,   // 0x58
    TILE_TYPE_89,   // 0x59
    TILE_TYPE_90,   // 0x5a
    TILE_TYPE_91,   // 0x5b
    TILE_TYPE_92,   // 0x5c
    TILE_TYPE_93,   // 0x5d
    TILE_TYPE_94,   // 0x5e
    TILE_TYPE_95,   // 0x5f
    TILE_TYPE_96,   // 0x60
    TILE_TYPE_97,   // 0x61
    TILE_TYPE_98,   // 0x62
    TILE_TYPE_99,   // 0x63
    TILE_TYPE_100,  // 0x64
    TILE_TYPE_101,  // 0x65
    TILE_TYPE_102,  // 0x66
    TILE_TYPE_103,  // 0x67
    TILE_TYPE_104,  // 0x68
    TILE_TYPE_105,  // 0x69
    TILE_TYPE_106,  // 0x6a
    TILE_TYPE_107,  // 0x6b
    TILE_TYPE_108,  // 0x6c
    TILE_TYPE_109,  // 0x6d
    TILE_TYPE_110,  // 0x6e
    TILE_TYPE_111,  // 0x6f
    TILE_TYPE_112,  // 0x70
    TILE_TYPE_113,  // 0x71
    TILE_TYPE_114,  // 0x72
    TILE_TYPE_115,  // 0x73 CHEST
    TILE_TYPE_116,  // 0x74 CHEST_OPEN
    TILE_TYPE_117,  // 0x75
    TILE_TYPE_118,  // 0x76 TORCH
    TILE_TYPE_119,  // 0x77 TORCH_LIT
    TILE_TYPE_120,  // 0x78 PRESSURE_BUTTON
    TILE_TYPE_121,  // 0x79 PRESSURE_BUTTON_PRESSED
    TILE_TYPE_122,  // 0x7a PRESSURE_SQUARE
    TILE_TYPE_123,  // 0x7b PRESSURE_SQUARE_PRESSED
    TILE_TYPE_124,  // 0x7c
    TILE_TYPE_125,  // 0x7d
    TILE_TYPE_126,  // 0x7e
    TILE_TYPE_127,  // 0x7f
    TILE_TYPE_128,  // 0x80
    TILE_TYPE_129,  // 0x81
    TILE_TYPE_130,  // 0x82
    TILE_TYPE_131,  // 0x83
    TILE_TYPE_132,  // 0x84
    TILE_TYPE_133,  // 0x85
    TILE_TYPE_134,  // 0x86
    TILE_TYPE_135,  // 0x87
    TILE_TYPE_136,  // 0x88
    TILE_TYPE_137,  // 0x89
    TILE_TYPE_138,  // 0x8a
    TILE_TYPE_139,  // 0x8b
    TILE_TYPE_140,  // 0x8c
    TILE_TYPE_141,  // 0x8d
    TILE_TYPE_142,  // 0x8e
    TILE_TYPE_143,  // 0x8f
    TILE_TYPE_144,  // 0x90
    TILE_TYPE_145,  // 0x91
    TILE_TYPE_146,  // 0x92 STAIRS_UP
    TILE_TYPE_147,  // 0x93 STAIRS_DOWN
    TILE_TYPE_148,  // 0x94
    TILE_TYPE_149,  // 0x95
    TILE_TYPE_150,  // 0x96
    TILE_TYPE_151,  // 0x97
    TILE_TYPE_152,  // 0x98
    TILE_TYPE_153,  // 0x99
    TILE_TYPE_154,  // 0x9a
    TILE_TYPE_155,  // 0x9b
    TILE_TYPE_156,  // 0x9c
    TILE_TYPE_157,  // 0x9d
    TILE_TYPE_158,  // 0x9e
    TILE_TYPE_159,  // 0x9f
    TILE_TYPE_160,  // 0xa0
    TILE_TYPE_161,  // 0xa1
    TILE_TYPE_162,  // 0xa2
    TILE_TYPE_163,  // 0xa3
    TILE_TYPE_164,  // 0xa4
    TILE_TYPE_165,  // 0xa5
    TILE_TYPE_166,  // 0xa6
    TILE_TYPE_167,  // 0xa7
    TILE_TYPE_168,  // 0xa8
    TILE_TYPE_169,  // 0xa9
    TILE_TYPE_170,  // 0xaa
    TILE_TYPE_171,  // 0xab
    TILE_TYPE_172,  // 0xac
    TILE_TYPE_173,  // 0xad
    TILE_TYPE_174,  // 0xae
    TILE_TYPE_175,  // 0xaf
    TILE_TYPE_176,  // 0xb0
    TILE_TYPE_177,  // 0xb1
    TILE_TYPE_178,  // 0xb2
    TILE_TYPE_179,  // 0xb3
    TILE_TYPE_180,  // 0xb4
    TILE_TYPE_181,  // 0xb5
    TILE_TYPE_182,  // 0xb6
    TILE_TYPE_183,  // 0xb7
    TILE_TYPE_184,  // 0xb8
    TILE_TYPE_185,  // 0xb9
    TILE_TYPE_186,  // 0xba
    TILE_TYPE_187,  // 0xbb
    TILE_TYPE_188,  // 0xbc
    TILE_TYPE_189,  // 0xbd
    TILE_TYPE_190,  // 0xbe
    TILE_TYPE_191,  // 0xbf
    TILE_TYPE_192,  // 0xc0
    TILE_TYPE_193,  // 0xc1
    TILE_TYPE_194,  // 0xc2
    TILE_TYPE_195,  // 0xc3
    TILE_TYPE_196,  // 0xc4
    TILE_TYPE_197,  // 0xc5
    TILE_TYPE_198,  // 0xc6
    TILE_TYPE_199,  // 0xc7
    TILE_TYPE_200,  // 0xc8
    TILE_TYPE_201,  // 0xc9
    TILE_TYPE_202,  // 0xca
    TILE_TYPE_203,  // 0xcb
    TILE_TYPE_204,  // 0xcc
    TILE_TYPE_205,  // 0xcd
    TILE_TYPE_206,  // 0xce
    TILE_TYPE_207,  // 0xcf
    TILE_TYPE_208,  // 0xd0
    TILE_TYPE_209,  // 0xd1
    TILE_TYPE_210,  // 0xd2
    TILE_TYPE_211,  // 0xd3
    TILE_TYPE_212,  // 0xd4
    TILE_TYPE_213,  // 0xd5
    TILE_TYPE_214,  // 0xd6
    TILE_TYPE_215,  // 0xd7
    TILE_TYPE_216,  // 0xd8
    TILE_TYPE_217,  // 0xd9
    TILE_TYPE_218,  // 0xda
    TILE_TYPE_219,  // 0xdb
    TILE_TYPE_220,  // 0xdc
    TILE_TYPE_221,  // 0xdd
    TILE_TYPE_222,  // 0xde
    TILE_TYPE_223,  // 0xdf
    TILE_TYPE_224,  // 0xe0
    TILE_TYPE_225,  // 0xe1
    TILE_TYPE_226,  // 0xe2
    TILE_TYPE_227,  // 0xe3
    TILE_TYPE_228,  // 0xe4
    TILE_TYPE_229,  // 0xe5
    TILE_TYPE_230,  // 0xe6
    TILE_TYPE_231,  // 0xe7
    TILE_TYPE_232,  // 0xe8
    TILE_TYPE_233,  // 0xe9
    TILE_TYPE_234,  // 0xea
    TILE_TYPE_235,  // 0xeb
    TILE_TYPE_236,  // 0xec
    TILE_TYPE_237,  // 0xed
    TILE_TYPE_238,  // 0xee
    TILE_TYPE_239,  // 0xef
    TILE_TYPE_240,  // 0xf0
    TILE_TYPE_241,  // 0xf1
    TILE_TYPE_242,  // 0xf2
    TILE_TYPE_243,  // 0xf3
    TILE_TYPE_244,  // 0xf4
    TILE_TYPE_245,  // 0xf5
    TILE_TYPE_246,  // 0xf6
    TILE_TYPE_247,  // 0xf7
    TILE_TYPE_248,  // 0xf8
    TILE_TYPE_249,  // 0xf9
    TILE_TYPE_250,  // 0xfa
    TILE_TYPE_251,  // 0xfb
    TILE_TYPE_252,  // 0xfc
    TILE_TYPE_253,  // 0xfd
    TILE_TYPE_254,  // 0xfe
    TILE_TYPE_255,  // 0xff
    TILE_TYPE_256,  // 0x100
    TILE_TYPE_257,  // 0x101
    TILE_TYPE_258,  // 0x102
    TILE_TYPE_259,  // 0x103
    TILE_TYPE_260,  // 0x104
    TILE_TYPE_261,  // 0x105
    TILE_TYPE_262,  // 0x106
    TILE_TYPE_263,  // 0x107
    TILE_TYPE_264,  // 0x108
    TILE_TYPE_265,  // 0x109
    TILE_TYPE_266,  // 0x10a
    TILE_TYPE_267,  // 0x10b
    TILE_TYPE_268,  // 0x10c
    TILE_TYPE_269,  // 0x10d
    TILE_TYPE_270,  // 0x10e
    TILE_TYPE_271,  // 0x10f
    TILE_TYPE_272,  // 0x110
    TILE_TYPE_273,  // 0x111
    TILE_TYPE_274,  // 0x112
    TILE_TYPE_275,  // 0x113
    TILE_TYPE_276,  // 0x114
    TILE_TYPE_277,  // 0x115
    TILE_TYPE_278,  // 0x116
    TILE_TYPE_279,  // 0x117
    TILE_TYPE_280,  // 0x118
    TILE_TYPE_281,  // 0x119
    TILE_TYPE_282,  // 0x11a
    TILE_TYPE_283,  // 0x11b
    TILE_TYPE_284,  // 0x11c
    TILE_TYPE_285,  // 0x11d
    TILE_TYPE_286,  // 0x11e
    TILE_TYPE_287,  // 0x11f
    TILE_TYPE_288,  // 0x120
    TILE_TYPE_289,  // 0x121
    TILE_TYPE_290,  // 0x122
    TILE_TYPE_291,  // 0x123
    TILE_TYPE_292,  // 0x124
    TILE_TYPE_293,  // 0x125
    TILE_TYPE_294,  // 0x126
    TILE_TYPE_295,  // 0x127
    TILE_TYPE_296,  // 0x128
    TILE_TYPE_297,  // 0x129
    TILE_TYPE_298,  // 0x12a
    TILE_TYPE_299,  // 0x12b
    TILE_TYPE_300,  // 0x12c
    TILE_TYPE_301,  // 0x12d
    TILE_TYPE_302,  // 0x12e
    TILE_TYPE_303,  // 0x12f
    TILE_TYPE_304,  // 0x130
    TILE_TYPE_305,  // 0x131
    TILE_TYPE_306,  // 0x132
    TILE_TYPE_307,  // 0x133
    TILE_TYPE_308,  // 0x134
    TILE_TYPE_309,  // 0x135
    TILE_TYPE_310,  // 0x136
    TILE_TYPE_311,  // 0x137
    TILE_TYPE_312,  // 0x138
    TILE_TYPE_313,  // 0x139
    TILE_TYPE_314,  // 0x13a
    TILE_TYPE_315,  // 0x13b
    TILE_TYPE_316,  // 0x13c
    TILE_TYPE_317,  // 0x13d
    TILE_TYPE_318,  // 0x13e
    TILE_TYPE_319,  // 0x13f
    TILE_TYPE_320,  // 0x140
    TILE_TYPE_321,  // 0x141
    TILE_TYPE_322,  // 0x142
    TILE_TYPE_323,  // 0x143
    TILE_TYPE_324,  // 0x144
    TILE_TYPE_325,  // 0x145
    TILE_TYPE_326,  // 0x146
    TILE_TYPE_327,  // 0x147
    TILE_TYPE_328,  // 0x148
    TILE_TYPE_329,  // 0x149
    TILE_TYPE_330,  // 0x14a
    TILE_TYPE_331,  // 0x14b
    TILE_TYPE_332,  // 0x14c
    TILE_TYPE_333,  // 0x14d
    TILE_TYPE_334,  // 0x14e
    TILE_TYPE_335,  // 0x14f
    TILE_TYPE_336,  // 0x150
    TILE_TYPE_337,  // 0x151
    TILE_TYPE_338,  // 0x152
    TILE_TYPE_339,  // 0x153
    TILE_TYPE_340,  // 0x154
    TILE_TYPE_341,  // 0x155
    TILE_TYPE_342,  // 0x156
    TILE_TYPE_343,  // 0x157
    TILE_TYPE_344,  // 0x158
    TILE_TYPE_345,  // 0x159
    TILE_TYPE_346,  // 0x15a
    TILE_TYPE_347,  // 0x15b
    TILE_TYPE_348,  // 0x15c
    TILE_TYPE_349,  // 0x15d
    TILE_TYPE_350,  // 0x15e
    TILE_TYPE_351,  // 0x15f
    TILE_TYPE_352,  // 0x160
    TILE_TYPE_353,  // 0x161
    TILE_TYPE_354,  // 0x162
    TILE_TYPE_355,  // 0x163
    TILE_TYPE_356,  // 0x164
    TILE_TYPE_357,  // 0x165
    TILE_TYPE_358,  // 0x166
    TILE_TYPE_359,  // 0x167
    TILE_TYPE_360,  // 0x168
    TILE_TYPE_361,  // 0x169
    TILE_TYPE_362,  // 0x16a
    TILE_TYPE_363,  // 0x16b
    TILE_TYPE_364,  // 0x16c
    TILE_TYPE_365,  // 0x16d
    TILE_TYPE_366,  // 0x16e
    TILE_TYPE_367,  // 0x16f
    TILE_TYPE_368,  // 0x170
    TILE_TYPE_369,  // 0x171
    TILE_TYPE_370,  // 0x172
    TILE_TYPE_371,  // 0x173
    TILE_TYPE_372,  // 0x174
    TILE_TYPE_373,  // 0x175
    TILE_TYPE_374,  // 0x176 SIGNPOST
    TILE_TYPE_375,  // 0x177
    TILE_TYPE_376,  // 0x178
    TILE_TYPE_377,  // 0x179
    TILE_TYPE_378,  // 0x17a
    TILE_TYPE_379,  // 0x17b
    TILE_TYPE_380,  // 0x17c
    TILE_TYPE_381,  // 0x17d
    TILE_TYPE_382,  // 0x17e
    TILE_TYPE_383,  // 0x17f
    TILE_TYPE_384,  // 0x180
    TILE_TYPE_385,  // 0x181
    TILE_TYPE_386,  // 0x182
    TILE_TYPE_387,  // 0x183
    TILE_TYPE_388,  // 0x184
    TILE_TYPE_389,  // 0x185
    TILE_TYPE_390,  // 0x186
    TILE_TYPE_391,  // 0x187
    TILE_TYPE_392,  // 0x188
    TILE_TYPE_393,  // 0x189
    TILE_TYPE_394,  // 0x18a
    TILE_TYPE_395,  // 0x18b
    TILE_TYPE_396,  // 0x18c
    TILE_TYPE_397,  // 0x18d
    TILE_TYPE_398,  // 0x18e
    TILE_TYPE_399,  // 0x18f
    TILE_TYPE_400,  // 0x190
    TILE_TYPE_401,  // 0x191
    TILE_TYPE_402,  // 0x192
    TILE_TYPE_403,  // 0x193
    TILE_TYPE_404,  // 0x194
    TILE_TYPE_405,  // 0x195
    TILE_TYPE_406,  // 0x196
    TILE_TYPE_407,  // 0x197
    TILE_TYPE_408,  // 0x198
    TILE_TYPE_409,  // 0x199
    TILE_TYPE_410,  // 0x19a
    TILE_TYPE_411,  // 0x19b
    TILE_TYPE_412,  // 0x19c
    TILE_TYPE_413,  // 0x19d
    TILE_TYPE_414,  // 0x19e
    TILE_TYPE_415,  // 0x19f
    TILE_TYPE_416,  // 0x1a0
    TILE_TYPE_417,  // 0x1a1
    TILE_TYPE_418,  // 0x1a2
    TILE_TYPE_419,  // 0x1a3
    TILE_TYPE_420,  // 0x1a4
    TILE_TYPE_421,  // 0x1a5
    TILE_TYPE_422,  // 0x1a6
    TILE_TYPE_423,  // 0x1a7
    TILE_TYPE_424,  // 0x1a8
    TILE_TYPE_425,  // 0x1a9
    TILE_TYPE_426,  // 0x1aa
    TILE_TYPE_427,  // 0x1ab
    TILE_TYPE_428,  // 0x1ac
    TILE_TYPE_429,  // 0x1ad
    TILE_TYPE_430,  // 0x1ae
    TILE_TYPE_431,  // 0x1af
    TILE_TYPE_432,  // 0x1b0
    TILE_TYPE_433,  // 0x1b1
    TILE_TYPE_434,  // 0x1b2
    TILE_TYPE_435,  // 0x1b3
    TILE_TYPE_436,  // 0x1b4
    TILE_TYPE_437,  // 0x1b5
    TILE_TYPE_438,  // 0x1b6
    TILE_TYPE_439,  // 0x1b7
    TILE_TYPE_440,  // 0x1b8
    TILE_TYPE_441,  // 0x1b9
    TILE_TYPE_442,  // 0x1ba
    TILE_TYPE_443,  // 0x1bb
    TILE_TYPE_444,  // 0x1bc
    TILE_TYPE_445,  // 0x1bd
    TILE_TYPE_446,  // 0x1be
    TILE_TYPE_447,  // 0x1bf
    TILE_TYPE_448,  // 0x1c0
    TILE_TYPE_449,  // 0x1c1
    TILE_TYPE_450,  // 0x1c2
    TILE_TYPE_451,  // 0x1c3
    TILE_TYPE_452,  // 0x1c4
    TILE_TYPE_453,  // 0x1c5
    TILE_TYPE_454,  // 0x1c6
    TILE_TYPE_455,  // 0x1c7
    TILE_TYPE_456,  // 0x1c8
    TILE_TYPE_457,  // 0x1c9
    TILE_TYPE_458,  // 0x1ca
    TILE_TYPE_459,  // 0x1cb
    TILE_TYPE_460,  // 0x1cc
    TILE_TYPE_461,  // 0x1cd
    TILE_TYPE_462,  // 0x1ce
    TILE_TYPE_463,  // 0x1cf
    TILE_TYPE_464,  // 0x1d0
    TILE_TYPE_465,  // 0x1d1
    TILE_TYPE_466,  // 0x1d2
    TILE_TYPE_467,  // 0x1d3 PERMA_ROCK
    TILE_TYPE_468,  // 0x1d4 PERMA_ROCK2
    TILE_TYPE_469,  // 0x1d5 PERMA_ROCK3
    TILE_TYPE_470,  // 0x1d6 PERMA_ROCK4
    TILE_TYPE_471,  // 0x1d7
    TILE_TYPE_472,  // 0x1d8
    TILE_TYPE_473,  // 0x1d9
    TILE_TYPE_474,  // 0x1da
    TILE_TYPE_475,  // 0x1db
    TILE_TYPE_476,  // 0x1dc
    TILE_TYPE_477,  // 0x1dd
    TILE_TYPE_478,  // 0x1de
    TILE_TYPE_479,  // 0x1df
    TILE_TYPE_480,  // 0x1e0
    TILE_TYPE_481,  // 0x1e1
    TILE_TYPE_482,  // 0x1e2
    TILE_TYPE_483,  // 0x1e3
    TILE_TYPE_484,  // 0x1e4
    TILE_TYPE_485,  // 0x1e5
    TILE_TYPE_486,  // 0x1e6
    TILE_TYPE_487,  // 0x1e7
    TILE_TYPE_488,  // 0x1e8
    TILE_TYPE_489,  // 0x1e9
    TILE_TYPE_490,  // 0x1ea
    TILE_TYPE_491,  // 0x1eb
    TILE_TYPE_492,  // 0x1ec
    TILE_TYPE_493,  // 0x1ed
    TILE_TYPE_494,  // 0x1ee
    TILE_TYPE_495,  // 0x1ef
    TILE_TYPE_496,  // 0x1f0
    TILE_TYPE_497,  // 0x1f1
    TILE_TYPE_498,  // 0x1f2
    TILE_TYPE_499,  // 0x1f3
    TILE_TYPE_500,  // 0x1f4
    TILE_TYPE_501,  // 0x1f5
    TILE_TYPE_502,  // 0x1f6
    TILE_TYPE_503,  // 0x1f7
    TILE_TYPE_504,  // 0x1f8
    TILE_TYPE_505,  // 0x1f9
    TILE_TYPE_506,  // 0x1fa
    TILE_TYPE_507,  // 0x1fb
    TILE_TYPE_508,  // 0x1fc
    TILE_TYPE_509,  // 0x1fd
    TILE_TYPE_510,  // 0x1fe
    TILE_TYPE_511,  // 0x1ff
    TILE_TYPE_512,  // 0x200
    TILE_TYPE_513,  // 0x201
    TILE_TYPE_514,  // 0x202
    TILE_TYPE_515,  // 0x203
    TILE_TYPE_516,  // 0x204
    TILE_TYPE_517,  // 0x205
    TILE_TYPE_518,  // 0x206
    TILE_TYPE_519,  // 0x207
    TILE_TYPE_520,  // 0x208
    TILE_TYPE_521,  // 0x209
    TILE_TYPE_522,  // 0x20a
    TILE_TYPE_523,  // 0x20b
    TILE_TYPE_524,  // 0x20c
    TILE_TYPE_525,  // 0x20d
    TILE_TYPE_526,  // 0x20e
    TILE_TYPE_527,  // 0x20f
    TILE_TYPE_528,  // 0x210
    TILE_TYPE_529,  // 0x211
    TILE_TYPE_530,  // 0x212
    TILE_TYPE_531,  // 0x213
    TILE_TYPE_532,  // 0x214
    TILE_TYPE_533,  // 0x215
    TILE_TYPE_534,  // 0x216
    TILE_TYPE_535,  // 0x217
    TILE_TYPE_536,  // 0x218
    TILE_TYPE_537,  // 0x219
    TILE_TYPE_538,  // 0x21a
    TILE_TYPE_539,  // 0x21b
    TILE_TYPE_540,  // 0x21c
    TILE_TYPE_541,  // 0x21d
    TILE_TYPE_542,  // 0x21e
    TILE_TYPE_543,  // 0x21f
    TILE_TYPE_544,  // 0x220
    TILE_TYPE_545,  // 0x221
    TILE_TYPE_546,  // 0x222
    TILE_TYPE_547,  // 0x223
    TILE_TYPE_548,  // 0x224
    TILE_TYPE_549,  // 0x225
    TILE_TYPE_550,  // 0x226
    TILE_TYPE_551,  // 0x227
    TILE_TYPE_552,  // 0x228
    TILE_TYPE_553,  // 0x229
    TILE_TYPE_554,  // 0x22a
    TILE_TYPE_555,  // 0x22b
    TILE_TYPE_556,  // 0x22c
    TILE_TYPE_557,  // 0x22d
    TILE_TYPE_558,  // 0x22e
    TILE_TYPE_559,  // 0x22f
    TILE_TYPE_560,  // 0x230
    TILE_TYPE_561,  // 0x231
    TILE_TYPE_562,  // 0x232
    TILE_TYPE_563,  // 0x233
    TILE_TYPE_564,  // 0x234
    TILE_TYPE_565,  // 0x235
    TILE_TYPE_566,  // 0x236
    TILE_TYPE_567,  // 0x237
    TILE_TYPE_568,  // 0x238
    TILE_TYPE_569,  // 0x239
    TILE_TYPE_570,  // 0x23a
    TILE_TYPE_571,  // 0x23b
    TILE_TYPE_572,  // 0x23c
    TILE_TYPE_573,  // 0x23d
    TILE_TYPE_574,  // 0x23e
    TILE_TYPE_575,  // 0x23f
    TILE_TYPE_576,  // 0x240
    TILE_TYPE_577,  // 0x241
    TILE_TYPE_578,  // 0x242
    TILE_TYPE_579,  // 0x243
    TILE_TYPE_580,  // 0x244
    TILE_TYPE_581,  // 0x245
    TILE_TYPE_582,  // 0x246
    TILE_TYPE_583,  // 0x247
    TILE_TYPE_584,  // 0x248
    TILE_TYPE_585,  // 0x249
    TILE_TYPE_586,  // 0x24a
    TILE_TYPE_587,  // 0x24b
    TILE_TYPE_588,  // 0x24c
    TILE_TYPE_589,  // 0x24d
    TILE_TYPE_590,  // 0x24e
    TILE_TYPE_591,  // 0x24f
    TILE_TYPE_592,  // 0x250
    TILE_TYPE_593,  // 0x251
    TILE_TYPE_594,  // 0x252
    TILE_TYPE_595,  // 0x253
    TILE_TYPE_596,  // 0x254
    TILE_TYPE_597,  // 0x255
    TILE_TYPE_598,  // 0x256
    TILE_TYPE_599,  // 0x257
    TILE_TYPE_600,  // 0x258
    TILE_TYPE_601,  // 0x259
    TILE_TYPE_602,  // 0x25a
    TILE_TYPE_603,  // 0x25b
    TILE_TYPE_604,  // 0x25c
    TILE_TYPE_605,  // 0x25d
    TILE_TYPE_606,  // 0x25e
    TILE_TYPE_607,  // 0x25f
    TILE_TYPE_608,  // 0x260
    TILE_TYPE_609,  // 0x261
    TILE_TYPE_610,  // 0x262
    TILE_TYPE_611,  // 0x263
    TILE_TYPE_612,  // 0x264
    TILE_TYPE_613,  // 0x265
    TILE_TYPE_614,  // 0x266
    TILE_TYPE_615,  // 0x267
    TILE_TYPE_616,  // 0x268
    TILE_TYPE_617,  // 0x269
    TILE_TYPE_618,  // 0x26a
    TILE_TYPE_619,  // 0x26b
    TILE_TYPE_620,  // 0x26c
    TILE_TYPE_621,  // 0x26d
    TILE_TYPE_622,  // 0x26e
    TILE_TYPE_623,  // 0x26f
    TILE_TYPE_624,  // 0x270
    TILE_TYPE_625,  // 0x271
    TILE_TYPE_626,  // 0x272
    TILE_TYPE_627,  // 0x273
    TILE_TYPE_628,  // 0x274
    TILE_TYPE_629,  // 0x275
    TILE_TYPE_630,  // 0x276
    TILE_TYPE_631,  // 0x277
    TILE_TYPE_632,  // 0x278
    TILE_TYPE_633,  // 0x279
    TILE_TYPE_634,  // 0x27a
    TILE_TYPE_635,  // 0x27b
    TILE_TYPE_636,  // 0x27c
    TILE_TYPE_637,  // 0x27d
    TILE_TYPE_638,  // 0x27e
    TILE_TYPE_639,  // 0x27f
    TILE_TYPE_640,  // 0x280
    TILE_TYPE_641,  // 0x281
    TILE_TYPE_642,  // 0x282
    TILE_TYPE_643,  // 0x283
    TILE_TYPE_644,  // 0x284
    TILE_TYPE_645,  // 0x285
    TILE_TYPE_646,  // 0x286
    TILE_TYPE_647,  // 0x287
    TILE_TYPE_648,  // 0x288
    TILE_TYPE_649,  // 0x289
    TILE_TYPE_650,  // 0x28a
    TILE_TYPE_651,  // 0x28b
    TILE_TYPE_652,  // 0x28c
    TILE_TYPE_653,  // 0x28d
    TILE_TYPE_654,  // 0x28e
    TILE_TYPE_655,  // 0x28f
    TILE_TYPE_656,  // 0x290
    TILE_TYPE_657,  // 0x291
    TILE_TYPE_658,  // 0x292
    TILE_TYPE_659,  // 0x293
    TILE_TYPE_660,  // 0x294
    TILE_TYPE_661,  // 0x295
    TILE_TYPE_662,  // 0x296
    TILE_TYPE_663,  // 0x297
    TILE_TYPE_664,  // 0x298
    TILE_TYPE_665,  // 0x299
    TILE_TYPE_666,  // 0x29a
    TILE_TYPE_667,  // 0x29b
    TILE_TYPE_668,  // 0x29c
    TILE_TYPE_669,  // 0x29d
    TILE_TYPE_670,  // 0x29e
    TILE_TYPE_671,  // 0x29f
    TILE_TYPE_672,  // 0x2a0
    TILE_TYPE_673,  // 0x2a1
    TILE_TYPE_674,  // 0x2a2
    TILE_TYPE_675,  // 0x2a3
    TILE_TYPE_676,  // 0x2a4
    TILE_TYPE_677,  // 0x2a5
    TILE_TYPE_678,  // 0x2a6
    TILE_TYPE_679,  // 0x2a7
    TILE_TYPE_680,  // 0x2a8
    TILE_TYPE_681,  // 0x2a9
    TILE_TYPE_682,  // 0x2aa
    TILE_TYPE_683,  // 0x2ab
    TILE_TYPE_684,  // 0x2ac
    TILE_TYPE_685,  // 0x2ad
    TILE_TYPE_686,  // 0x2ae
    TILE_TYPE_687,  // 0x2af
    TILE_TYPE_688,  // 0x2b0
    TILE_TYPE_689,  // 0x2b1
    TILE_TYPE_690,  // 0x2b2
    TILE_TYPE_691,  // 0x2b3
    TILE_TYPE_692,  // 0x2b4
    TILE_TYPE_693,  // 0x2b5
    TILE_TYPE_694,  // 0x2b6
    TILE_TYPE_695,  // 0x2b7
    TILE_TYPE_696,  // 0x2b8
    TILE_TYPE_697,  // 0x2b9
    TILE_TYPE_698,  // 0x2ba
    TILE_TYPE_699,  // 0x2bb
    TILE_TYPE_700,  // 0x2bc
    TILE_TYPE_701,  // 0x2bd
    TILE_TYPE_702,  // 0x2be
    TILE_TYPE_703,  // 0x2bf
    TILE_TYPE_704,  // 0x2c0
    TILE_TYPE_705,  // 0x2c1
    TILE_TYPE_706,  // 0x2c2
    TILE_TYPE_707,  // 0x2c3
    TILE_TYPE_708,  // 0x2c4
    TILE_TYPE_709,  // 0x2c5
    TILE_TYPE_710,  // 0x2c6
    TILE_TYPE_711,  // 0x2c7
    TILE_TYPE_712,  // 0x2c8
    TILE_TYPE_713,  // 0x2c9
    TILE_TYPE_714,  // 0x2ca
    TILE_TYPE_715,  // 0x2cb
    TILE_TYPE_716,  // 0x2cc
    TILE_TYPE_717,  // 0x2cd
    TILE_TYPE_718,  // 0x2ce
    TILE_TYPE_719,  // 0x2cf
    TILE_TYPE_720,  // 0x2d0
    TILE_TYPE_721,  // 0x2d1
    TILE_TYPE_722,  // 0x2d2
    TILE_TYPE_723,  // 0x2d3
    TILE_TYPE_724,  // 0x2d4
    TILE_TYPE_725,  // 0x2d5
    TILE_TYPE_726,  // 0x2d6
    TILE_TYPE_727,  // 0x2d7
    TILE_TYPE_728,  // 0x2d8
    TILE_TYPE_729,  // 0x2d9
    TILE_TYPE_730,  // 0x2da
    TILE_TYPE_731,  // 0x2db
    TILE_TYPE_732,  // 0x2dc
    TILE_TYPE_733,  // 0x2dd
    TILE_TYPE_734,  // 0x2de
    TILE_TYPE_735,  // 0x2df
    TILE_TYPE_736,  // 0x2e0
    TILE_TYPE_737,  // 0x2e1
    TILE_TYPE_738,  // 0x2e2
    TILE_TYPE_739,  // 0x2e3
    TILE_TYPE_740,  // 0x2e4
    TILE_TYPE_741,  // 0x2e5
    TILE_TYPE_742,  // 0x2e6
    TILE_TYPE_743,  // 0x2e7
    TILE_TYPE_744,  // 0x2e8
    TILE_TYPE_745,  // 0x2e9
    TILE_TYPE_746,  // 0x2ea
    TILE_TYPE_747,  // 0x2eb
    TILE_TYPE_748,  // 0x2ec
    TILE_TYPE_749,  // 0x2ed
    TILE_TYPE_750,  // 0x2ee
    TILE_TYPE_751,  // 0x2ef
    TILE_TYPE_752,  // 0x2f0
    TILE_TYPE_753,  // 0x2f1
    TILE_TYPE_754,  // 0x2f2
    TILE_TYPE_755,  // 0x2f3
    TILE_TYPE_756,  // 0x2f4
    TILE_TYPE_757,  // 0x2f5
    TILE_TYPE_758,  // 0x2f6
    TILE_TYPE_759,  // 0x2f7
    TILE_TYPE_760,  // 0x2f8
    TILE_TYPE_761,  // 0x2f9
    TILE_TYPE_762,  // 0x2fa
    TILE_TYPE_763,  // 0x2fb
    TILE_TYPE_764,  // 0x2fc
    TILE_TYPE_765,  // 0x2fd
    TILE_TYPE_766,  // 0x2fe
    TILE_TYPE_767,  // 0x2ff
    TILE_TYPE_768,  // 0x300
    TILE_TYPE_769,  // 0x301
    TILE_TYPE_770,  // 0x302
    TILE_TYPE_771,  // 0x303
    TILE_TYPE_772,  // 0x304
    TILE_TYPE_773,  // 0x305
    TILE_TYPE_774,  // 0x306
    TILE_TYPE_775,  // 0x307
    TILE_TYPE_776,  // 0x308
    TILE_TYPE_777,  // 0x309
    TILE_TYPE_778,  // 0x30a
    TILE_TYPE_779,  // 0x30b
    TILE_TYPE_780,  // 0x30c
    TILE_TYPE_781,  // 0x30d
    TILE_TYPE_782,  // 0x30e
    TILE_TYPE_783,  // 0x30f
    TILE_TYPE_784,  // 0x310
    TILE_TYPE_785,  // 0x311
    TILE_TYPE_786,  // 0x312
    TILE_TYPE_787,  // 0x313
    TILE_TYPE_788,  // 0x314
    TILE_TYPE_789,  // 0x315
    TILE_TYPE_790,  // 0x316
    TILE_TYPE_791,  // 0x317 RED_TILE
    TILE_TYPE_792,  // 0x318 BLUE_TILE
    TILE_TYPE_793,  // 0x319
    TILE_TYPE_794,  // 0x31a
    TILE_TYPE_795,  // 0x31b
    TILE_TYPE_796,  // 0x31c
    TILE_TYPE_797,  // 0x31d
    TILE_TYPE_798,  // 0x31e
    TILE_TYPE_799,  // 0x31f
    TILE_TYPE_800,  // 0x320
    TILE_TYPE_801,  // 0x321
    TILE_TYPE_802,  // 0x322
    TILE_TYPE_803,  // 0x323
    TILE_TYPE_804,  // 0x324
    TILE_TYPE_805,  // 0x325
    TILE_TYPE_806,  // 0x326
    TILE_TYPE_807,  // 0x327
    TILE_TYPE_808,  // 0x328
    TILE_TYPE_809,  // 0x329
    TILE_TYPE_810,  // 0x32a
    TILE_TYPE_811,  // 0x32b
    TILE_TYPE_812,  // 0x32c
    TILE_TYPE_813,  // 0x32d
    TILE_TYPE_814,  // 0x32e
    TILE_TYPE_815,  // 0x32f
    TILE_TYPE_816,  // 0x330
    TILE_TYPE_817,  // 0x331
    TILE_TYPE_818,  // 0x332
    TILE_TYPE_819,  // 0x333
    TILE_TYPE_820,  // 0x334
    TILE_TYPE_821,  // 0x335
    TILE_TYPE_822,  // 0x336
    TILE_TYPE_823,  // 0x337
    TILE_TYPE_824,  // 0x338
    TILE_TYPE_825,  // 0x339
    TILE_TYPE_826,  // 0x33a
    TILE_TYPE_827,  // 0x33b
    TILE_TYPE_828,  // 0x33c
    TILE_TYPE_829,  // 0x33d
    TILE_TYPE_830,  // 0x33e
    TILE_TYPE_831,  // 0x33f
    TILE_TYPE_832,  // 0x340
    TILE_TYPE_833,  // 0x341
    TILE_TYPE_834,  // 0x342
    TILE_TYPE_835,  // 0x343
    TILE_TYPE_836,  // 0x344
    TILE_TYPE_837,  // 0x345
    TILE_TYPE_838,  // 0x346
    TILE_TYPE_839,  // 0x347
    TILE_TYPE_840,  // 0x348
    TILE_TYPE_841,  // 0x349
    TILE_TYPE_842,  // 0x34a
    TILE_TYPE_843,  // 0x34b
    TILE_TYPE_844,  // 0x34c
    TILE_TYPE_845,  // 0x34d
    TILE_TYPE_846,  // 0x34e
    TILE_TYPE_847,  // 0x34f
    TILE_TYPE_848,  // 0x350
    TILE_TYPE_849,  // 0x351
    TILE_TYPE_850,  // 0x352
    TILE_TYPE_851,  // 0x353
    TILE_TYPE_852,  // 0x354
    TILE_TYPE_853,  // 0x355
    TILE_TYPE_854,  // 0x356
    TILE_TYPE_855,  // 0x357
    TILE_TYPE_856,  // 0x358
    TILE_TYPE_857,  // 0x359
    TILE_TYPE_858,  // 0x35a
    TILE_TYPE_859,  // 0x35b
    TILE_TYPE_860,  // 0x35c
    TILE_TYPE_861,  // 0x35d
    TILE_TYPE_862,  // 0x35e
    TILE_TYPE_863,  // 0x35f
    TILE_TYPE_864,  // 0x360
    TILE_TYPE_865,  // 0x361
    TILE_TYPE_866,  // 0x362
    TILE_TYPE_867,  // 0x363
    TILE_TYPE_868,  // 0x364
    TILE_TYPE_869,  // 0x365
    TILE_TYPE_870,  // 0x366
    TILE_TYPE_871,  // 0x367
    TILE_TYPE_872,  // 0x368
    TILE_TYPE_873,  // 0x369
    TILE_TYPE_874,  // 0x36a
    TILE_TYPE_875,  // 0x36b
    TILE_TYPE_876,  // 0x36c
    TILE_TYPE_877,  // 0x36d
    TILE_TYPE_878,  // 0x36e
    TILE_TYPE_879,  // 0x36f
    TILE_TYPE_880,  // 0x370
    TILE_TYPE_881,  // 0x371
    TILE_TYPE_882,  // 0x372
    TILE_TYPE_883,  // 0x373
    TILE_TYPE_884,  // 0x374
    TILE_TYPE_885,  // 0x375
    TILE_TYPE_886,  // 0x376
    TILE_TYPE_887,  // 0x377
    TILE_TYPE_888,  // 0x378
    TILE_TYPE_889,  // 0x379
    TILE_TYPE_890,  // 0x37a
    TILE_TYPE_891,  // 0x37b
    TILE_TYPE_892,  // 0x37c
    TILE_TYPE_893,  // 0x37d
    TILE_TYPE_894,  // 0x37e
    TILE_TYPE_895,  // 0x37f
    TILE_TYPE_896,  // 0x380
    TILE_TYPE_897,  // 0x381
    TILE_TYPE_898,  // 0x382
    TILE_TYPE_899,  // 0x383
    TILE_TYPE_900,  // 0x384
    TILE_TYPE_901,  // 0x385
    TILE_TYPE_902,  // 0x386
    TILE_TYPE_903,  // 0x387
    TILE_TYPE_904,  // 0x388
    TILE_TYPE_905,  // 0x389
    TILE_TYPE_906,  // 0x38a
    TILE_TYPE_907,  // 0x38b
    TILE_TYPE_908,  // 0x38c
    TILE_TYPE_909,  // 0x38d
    TILE_TYPE_910,  // 0x38e
    TILE_TYPE_911,  // 0x38f
    TILE_TYPE_912,  // 0x390
    TILE_TYPE_913,  // 0x391
    TILE_TYPE_914,  // 0x392
    TILE_TYPE_915,  // 0x393
    TILE_TYPE_916,  // 0x394
    TILE_TYPE_917,  // 0x395
    TILE_TYPE_918,  // 0x396
    TILE_TYPE_919,  // 0x397
    TILE_TYPE_920,  // 0x398
    TILE_TYPE_921,  // 0x399
    TILE_TYPE_922,  // 0x39a
    TILE_TYPE_923,  // 0x39b
    TILE_TYPE_924,  // 0x39c
    TILE_TYPE_925,  // 0x39d
    TILE_TYPE_926,  // 0x39e
    TILE_TYPE_927,  // 0x39f
    TILE_TYPE_928,  // 0x3a0
    TILE_TYPE_929,  // 0x3a1
    TILE_TYPE_930,  // 0x3a2
    TILE_TYPE_931,  // 0x3a3
    TILE_TYPE_932,  // 0x3a4
    TILE_TYPE_933,  // 0x3a5
    TILE_TYPE_934,  // 0x3a6
    TILE_TYPE_935,  // 0x3a7
    TILE_TYPE_936,  // 0x3a8
    TILE_TYPE_937,  // 0x3a9
    TILE_TYPE_938,  // 0x3aa
    TILE_TYPE_939,  // 0x3ab
    TILE_TYPE_940,  // 0x3ac
    TILE_TYPE_941,  // 0x3ad
    TILE_TYPE_942,  // 0x3ae
    TILE_TYPE_943,  // 0x3af
    TILE_TYPE_944,  // 0x3b0
    TILE_TYPE_945,  // 0x3b1
    TILE_TYPE_946,  // 0x3b2
    TILE_TYPE_947,  // 0x3b3
    TILE_TYPE_948,  // 0x3b4
    TILE_TYPE_949,  // 0x3b5
    TILE_TYPE_950,  // 0x3b6
    TILE_TYPE_951,  // 0x3b7
    TILE_TYPE_952,  // 0x3b8
    TILE_TYPE_953,  // 0x3b9
    TILE_TYPE_954,  // 0x3ba
    TILE_TYPE_955,  // 0x3bb
    TILE_TYPE_956,  // 0x3bc
    TILE_TYPE_957,  // 0x3bd
    TILE_TYPE_958,  // 0x3be
    TILE_TYPE_959,  // 0x3bf
    TILE_TYPE_960,  // 0x3c0
    TILE_TYPE_961,  // 0x3c1
    TILE_TYPE_962,  // 0x3c2
    TILE_TYPE_963,  // 0x3c3
    TILE_TYPE_964,  // 0x3c4
    TILE_TYPE_965,  // 0x3c5
    TILE_TYPE_966,  // 0x3c6
    TILE_TYPE_967,  // 0x3c7
    TILE_TYPE_968,  // 0x3c8
    TILE_TYPE_969,  // 0x3c9
    TILE_TYPE_970,  // 0x3ca
    TILE_TYPE_971,  // 0x3cb
    TILE_TYPE_972,  // 0x3cc
    TILE_TYPE_973,  // 0x3cd
    TILE_TYPE_974,  // 0x3ce
    TILE_TYPE_975,  // 0x3cf
    TILE_TYPE_976,  // 0x3d0
    TILE_TYPE_977,  // 0x3d1
    TILE_TYPE_978,  // 0x3d2
    TILE_TYPE_979,  // 0x3d3
    TILE_TYPE_980,  // 0x3d4
    TILE_TYPE_981,  // 0x3d5
    TILE_TYPE_982,  // 0x3d6
    TILE_TYPE_983,  // 0x3d7
    TILE_TYPE_984,  // 0x3d8
    TILE_TYPE_985,  // 0x3d9
    TILE_TYPE_986,  // 0x3da
    TILE_TYPE_987,  // 0x3db
    TILE_TYPE_988,  // 0x3dc
    TILE_TYPE_989,  // 0x3dd
    TILE_TYPE_990,  // 0x3de
    TILE_TYPE_991,  // 0x3df
    TILE_TYPE_992,  // 0x3e0
    TILE_TYPE_993,  // 0x3e1
    TILE_TYPE_994,  // 0x3e2
    TILE_TYPE_995,  // 0x3e3
    TILE_TYPE_996,  // 0x3e4
    TILE_TYPE_997,  // 0x3e5
    TILE_TYPE_998,  // 0x3e6
    TILE_TYPE_999,  // 0x3e7
    TILE_TYPE_1000, // 0x3e8
    TILE_TYPE_1001, // 0x3e9
    TILE_TYPE_1002, // 0x3ea
    TILE_TYPE_1003, // 0x3eb
    TILE_TYPE_1004, // 0x3ec
    TILE_TYPE_1005, // 0x3ed
    TILE_TYPE_1006, // 0x3ee
    TILE_TYPE_1007, // 0x3ef
    TILE_TYPE_1008, // 0x3f0
    TILE_TYPE_1009, // 0x3f1
    TILE_TYPE_1010, // 0x3f2
    TILE_TYPE_1011, // 0x3f3
    TILE_TYPE_1012, // 0x3f4
    TILE_TYPE_1013, // 0x3f5
    TILE_TYPE_1014, // 0x3f6
    TILE_TYPE_1015, // 0x3f7
    TILE_TYPE_1016, // 0x3f8
    TILE_TYPE_1017, // 0x3f9
    TILE_TYPE_1018, // 0x3fa
    TILE_TYPE_1019, // 0x3fb
    TILE_TYPE_1020, // 0x3fc
    TILE_TYPE_1021, // 0x3fd
    TILE_TYPE_1022, // 0x3fe
    TILE_TYPE_1023, // 0x3ff
    TILE_TYPE_1024, // 0x400
    TILE_TYPE_1025, // 0x401
    TILE_TYPE_1026, // 0x402
    TILE_TYPE_1027, // 0x403
    TILE_TYPE_1028, // 0x404
    TILE_TYPE_1029, // 0x405
    TILE_TYPE_1030, // 0x406
    TILE_TYPE_1031, // 0x407
    TILE_TYPE_1032, // 0x408
    TILE_TYPE_1033, // 0x409
    TILE_TYPE_1034, // 0x40a
    TILE_TYPE_1035, // 0x40b
    TILE_TYPE_1036, // 0x40c
    TILE_TYPE_1037, // 0x40d
    TILE_TYPE_1038, // 0x40e
    TILE_TYPE_1039, // 0x40f
    TILE_TYPE_1040, // 0x410
    TILE_TYPE_1041, // 0x411
    TILE_TYPE_1042, // 0x412
    TILE_TYPE_1043, // 0x413
    TILE_TYPE_1044, // 0x414
    TILE_TYPE_1045, // 0x415
    TILE_TYPE_1046, // 0x416
    TILE_TYPE_1047, // 0x417
    TILE_TYPE_1048, // 0x418
    TILE_TYPE_1049, // 0x419
    TILE_TYPE_1050, // 0x41a
    TILE_TYPE_1051, // 0x41b
    TILE_TYPE_1052, // 0x41c
    TILE_TYPE_1053, // 0x41d
    TILE_TYPE_1054, // 0x41e
    TILE_TYPE_1055, // 0x41f
    TILE_TYPE_1056, // 0x420
    TILE_TYPE_1057, // 0x421
    TILE_TYPE_1058, // 0x422
    TILE_TYPE_1059, // 0x423
    TILE_TYPE_1060, // 0x424
    TILE_TYPE_1061, // 0x425
    TILE_TYPE_1062, // 0x426
    TILE_TYPE_1063, // 0x427
    TILE_TYPE_1064, // 0x428
    TILE_TYPE_1065, // 0x429
    TILE_TYPE_1066, // 0x42a
    TILE_TYPE_1067, // 0x42b
    TILE_TYPE_1068, // 0x42c
    TILE_TYPE_1069, // 0x42d
    TILE_TYPE_1070, // 0x42e
    TILE_TYPE_1071, // 0x42f
    TILE_TYPE_1072, // 0x430
    TILE_TYPE_1073, // 0x431
    TILE_TYPE_1074, // 0x432
    TILE_TYPE_1075, // 0x433
    TILE_TYPE_1076, // 0x434
    TILE_TYPE_1077, // 0x435
    TILE_TYPE_1078, // 0x436
    TILE_TYPE_1079, // 0x437
    TILE_TYPE_1080, // 0x438
    TILE_TYPE_1081, // 0x439
    TILE_TYPE_1082, // 0x43a
    TILE_TYPE_1083, // 0x43b
    TILE_TYPE_1084, // 0x43c
    TILE_TYPE_1085, // 0x43d
    TILE_TYPE_1086, // 0x43e
    TILE_TYPE_1087, // 0x43f
    TILE_TYPE_1088, // 0x440
    TILE_TYPE_1089, // 0x441
    TILE_TYPE_1090, // 0x442
    TILE_TYPE_1091, // 0x443
    TILE_TYPE_1092, // 0x444
    TILE_TYPE_1093, // 0x445
    TILE_TYPE_1094, // 0x446
    TILE_TYPE_1095, // 0x447
    TILE_TYPE_1096, // 0x448
    TILE_TYPE_1097, // 0x449
    TILE_TYPE_1098, // 0x44a
    TILE_TYPE_1099, // 0x44b
    TILE_TYPE_1100, // 0x44c
    TILE_TYPE_1101, // 0x44d
    TILE_TYPE_1102, // 0x44e
    TILE_TYPE_1103, // 0x44f
    TILE_TYPE_1104, // 0x450
    TILE_TYPE_1105, // 0x451
    TILE_TYPE_1106, // 0x452
    TILE_TYPE_1107, // 0x453
    TILE_TYPE_1108, // 0x454
    TILE_TYPE_1109, // 0x455
    TILE_TYPE_1110, // 0x456
    TILE_TYPE_1111, // 0x457
    TILE_TYPE_1112, // 0x458
    TILE_TYPE_1113, // 0x459
    TILE_TYPE_1114, // 0x45a
    TILE_TYPE_1115, // 0x45b
    TILE_TYPE_1116, // 0x45c
    TILE_TYPE_1117, // 0x45d
    TILE_TYPE_1118, // 0x45e
    TILE_TYPE_1119, // 0x45f
    TILE_TYPE_1120, // 0x460
    TILE_TYPE_1121, // 0x461
    TILE_TYPE_1122, // 0x462
    TILE_TYPE_1123, // 0x463
    TILE_TYPE_1124, // 0x464
    TILE_TYPE_1125, // 0x465
    TILE_TYPE_1126, // 0x466
    TILE_TYPE_1127, // 0x467
    TILE_TYPE_1128, // 0x468
    TILE_TYPE_1129, // 0x469
    TILE_TYPE_1130, // 0x46a
    TILE_TYPE_1131, // 0x46b
    TILE_TYPE_1132, // 0x46c
    TILE_TYPE_1133, // 0x46d
    TILE_TYPE_1134, // 0x46e
    TILE_TYPE_1135, // 0x46f
    TILE_TYPE_1136, // 0x470
    TILE_TYPE_1137, // 0x471
    TILE_TYPE_1138, // 0x472
    TILE_TYPE_1139, // 0x473
    TILE_TYPE_1140, // 0x474
    TILE_TYPE_1141, // 0x475
    TILE_TYPE_1142, // 0x476
    TILE_TYPE_1143, // 0x477
    TILE_TYPE_1144, // 0x478
    TILE_TYPE_1145, // 0x479
    TILE_TYPE_1146, // 0x47a
    TILE_TYPE_1147, // 0x47b
    TILE_TYPE_1148, // 0x47c
    TILE_TYPE_1149, // 0x47d
    TILE_TYPE_1150, // 0x47e
    TILE_TYPE_1151, // 0x47f
    TILE_TYPE_1152, // 0x480
    TILE_TYPE_1153, // 0x481
    TILE_TYPE_1154, // 0x482
    TILE_TYPE_1155, // 0x483
    TILE_TYPE_1156, // 0x484
    TILE_TYPE_1157, // 0x485
    TILE_TYPE_1158, // 0x486
    TILE_TYPE_1159, // 0x487
    TILE_TYPE_1160, // 0x488
    TILE_TYPE_1161, // 0x489
    TILE_TYPE_1162, // 0x48a
    TILE_TYPE_1163, // 0x48b
    TILE_TYPE_1164, // 0x48c
    TILE_TYPE_1165, // 0x48d
    TILE_TYPE_1166, // 0x48e
    TILE_TYPE_1167, // 0x48f
    TILE_TYPE_1168, // 0x490
    TILE_TYPE_1169, // 0x491
    TILE_TYPE_1170, // 0x492
    TILE_TYPE_1171, // 0x493
    TILE_TYPE_1172, // 0x494
    TILE_TYPE_1173, // 0x495
    TILE_TYPE_1174, // 0x496
    TILE_TYPE_1175, // 0x497
    TILE_TYPE_1176, // 0x498
    TILE_TYPE_1177, // 0x499
    TILE_TYPE_1178, // 0x49a
    TILE_TYPE_1179, // 0x49b
    TILE_TYPE_1180, // 0x49c
    TILE_TYPE_1181, // 0x49d
    TILE_TYPE_1182, // 0x49e
    TILE_TYPE_1183, // 0x49f
    TILE_TYPE_1184, // 0x4a0
    TILE_TYPE_1185, // 0x4a1
    TILE_TYPE_1186, // 0x4a2
    TILE_TYPE_1187, // 0x4a3
    TILE_TYPE_1188, // 0x4a4
    TILE_TYPE_1189, // 0x4a5
    TILE_TYPE_1190, // 0x4a6
    TILE_TYPE_1191, // 0x4a7
    TILE_TYPE_1192, // 0x4a8
    TILE_TYPE_1193, // 0x4a9
    TILE_TYPE_1194, // 0x4aa
    TILE_TYPE_1195, // 0x4ab
    TILE_TYPE_1196, // 0x4ac
    TILE_TYPE_1197, // 0x4ad
    TILE_TYPE_1198, // 0x4ae
    TILE_TYPE_1199, // 0x4af
    TILE_TYPE_1200, // 0x4b0
    TILE_TYPE_1201, // 0x4b1
    TILE_TYPE_1202, // 0x4b2
    TILE_TYPE_1203, // 0x4b3
    TILE_TYPE_1204, // 0x4b4
    TILE_TYPE_1205, // 0x4b5
    TILE_TYPE_1206, // 0x4b6
    TILE_TYPE_1207, // 0x4b7
    TILE_TYPE_1208, // 0x4b8
    TILE_TYPE_1209, // 0x4b9
    TILE_TYPE_1210, // 0x4ba
    TILE_TYPE_1211, // 0x4bb
    TILE_TYPE_1212, // 0x4bc
    TILE_TYPE_1213, // 0x4bd
    TILE_TYPE_1214, // 0x4be
    TILE_TYPE_1215, // 0x4bf
    TILE_TYPE_1216, // 0x4c0
    TILE_TYPE_1217, // 0x4c1
    TILE_TYPE_1218, // 0x4c2
    TILE_TYPE_1219, // 0x4c3
    TILE_TYPE_1220, // 0x4c4
    TILE_TYPE_1221, // 0x4c5
    TILE_TYPE_1222, // 0x4c6
    TILE_TYPE_1223, // 0x4c7
    TILE_TYPE_1224, // 0x4c8
    TILE_TYPE_1225, // 0x4c9
    TILE_TYPE_1226, // 0x4ca
    TILE_TYPE_1227, // 0x4cb
    TILE_TYPE_1228, // 0x4cc
    TILE_TYPE_1229, // 0x4cd
    TILE_TYPE_1230, // 0x4ce
    TILE_TYPE_1231, // 0x4cf
    TILE_TYPE_1232, // 0x4d0
    TILE_TYPE_1233, // 0x4d1
    TILE_TYPE_1234, // 0x4d2
    TILE_TYPE_1235, // 0x4d3
    TILE_TYPE_1236, // 0x4d4
    TILE_TYPE_1237, // 0x4d5
    TILE_TYPE_1238, // 0x4d6
    TILE_TYPE_1239, // 0x4d7
    TILE_TYPE_1240, // 0x4d8
    TILE_TYPE_1241, // 0x4d9
    TILE_TYPE_1242, // 0x4da
    TILE_TYPE_1243, // 0x4db
    TILE_TYPE_1244, // 0x4dc
    TILE_TYPE_1245, // 0x4dd
    TILE_TYPE_1246, // 0x4de
    TILE_TYPE_1247, // 0x4df
    TILE_TYPE_1248, // 0x4e0
    TILE_TYPE_1249, // 0x4e1
    TILE_TYPE_1250, // 0x4e2
    TILE_TYPE_1251, // 0x4e3
    TILE_TYPE_1252, // 0x4e4
    TILE_TYPE_1253, // 0x4e5
    TILE_TYPE_1254, // 0x4e6
    TILE_TYPE_1255, // 0x4e7
    TILE_TYPE_1256, // 0x4e8
    TILE_TYPE_1257, // 0x4e9
    TILE_TYPE_1258, // 0x4ea
    TILE_TYPE_1259, // 0x4eb
    TILE_TYPE_1260, // 0x4ec
    TILE_TYPE_1261, // 0x4ed
    TILE_TYPE_1262, // 0x4ee
    TILE_TYPE_1263, // 0x4ef
    TILE_TYPE_1264, // 0x4f0
    TILE_TYPE_1265, // 0x4f1
    TILE_TYPE_1266, // 0x4f2
    TILE_TYPE_1267, // 0x4f3
    TILE_TYPE_1268, // 0x4f4
    TILE_TYPE_1269, // 0x4f5
    TILE_TYPE_1270, // 0x4f6
    TILE_TYPE_1271, // 0x4f7
    TILE_TYPE_1272, // 0x4f8
    TILE_TYPE_1273, // 0x4f9
    TILE_TYPE_1274, // 0x4fa
    TILE_TYPE_1275, // 0x4fb
    TILE_TYPE_1276, // 0x4fc
    TILE_TYPE_1277, // 0x4fd
    TILE_TYPE_1278, // 0x4fe
    TILE_TYPE_1279, // 0x4ff
    TILE_TYPE_1280, // 0x500
    TILE_TYPE_1281, // 0x501
    TILE_TYPE_1282, // 0x502
    TILE_TYPE_1283, // 0x503
    TILE_TYPE_1284, // 0x504
    TILE_TYPE_1285, // 0x505
    TILE_TYPE_1286, // 0x506
    TILE_TYPE_1287, // 0x507
    TILE_TYPE_1288, // 0x508
    TILE_TYPE_1289, // 0x509
    TILE_TYPE_1290, // 0x50a
    TILE_TYPE_1291, // 0x50b
    TILE_TYPE_1292, // 0x50c
    TILE_TYPE_1293, // 0x50d
    TILE_TYPE_1294, // 0x50e
    TILE_TYPE_1295, // 0x50f
    TILE_TYPE_1296, // 0x510
    TILE_TYPE_1297, // 0x511
    TILE_TYPE_1298, // 0x512
    TILE_TYPE_1299, // 0x513
    TILE_TYPE_1300, // 0x514
    TILE_TYPE_1301, // 0x515
    TILE_TYPE_1302, // 0x516
    TILE_TYPE_1303, // 0x517
    TILE_TYPE_1304, // 0x518
    TILE_TYPE_1305, // 0x519
    TILE_TYPE_1306, // 0x51a
    TILE_TYPE_1307, // 0x51b
    TILE_TYPE_1308, // 0x51c
    TILE_TYPE_1309, // 0x51d
    TILE_TYPE_1310, // 0x51e
    TILE_TYPE_1311, // 0x51f
    TILE_TYPE_1312, // 0x520
    TILE_TYPE_1313, // 0x521
    TILE_TYPE_1314, // 0x522
    TILE_TYPE_1315, // 0x523
    TILE_TYPE_1316, // 0x524
    TILE_TYPE_1317, // 0x525
    TILE_TYPE_1318, // 0x526
    TILE_TYPE_1319, // 0x527
    TILE_TYPE_1320, // 0x528
    TILE_TYPE_1321, // 0x529
    TILE_TYPE_1322, // 0x52a
    TILE_TYPE_1323, // 0x52b
    TILE_TYPE_1324, // 0x52c
    TILE_TYPE_1325, // 0x52d
    TILE_TYPE_1326, // 0x52e
    TILE_TYPE_1327, // 0x52f
    TILE_TYPE_1328, // 0x530
    TILE_TYPE_1329, // 0x531
    TILE_TYPE_1330, // 0x532
    TILE_TYPE_1331, // 0x533
    TILE_TYPE_1332, // 0x534
    TILE_TYPE_1333, // 0x535
    TILE_TYPE_1334, // 0x536
    TILE_TYPE_1335, // 0x537
    TILE_TYPE_1336, // 0x538
    TILE_TYPE_1337, // 0x539
    TILE_TYPE_1338, // 0x53a
    TILE_TYPE_1339, // 0x53b
    TILE_TYPE_1340, // 0x53c
    TILE_TYPE_1341, // 0x53d
    TILE_TYPE_1342, // 0x53e
    TILE_TYPE_1343, // 0x53f
    TILE_TYPE_1344, // 0x540
    TILE_TYPE_1345, // 0x541
    TILE_TYPE_1346, // 0x542
    TILE_TYPE_1347, // 0x543
    TILE_TYPE_1348, // 0x544
    TILE_TYPE_1349, // 0x545
    TILE_TYPE_1350, // 0x546
    TILE_TYPE_1351, // 0x547
    TILE_TYPE_1352, // 0x548
    TILE_TYPE_1353, // 0x549
    TILE_TYPE_1354, // 0x54a
    TILE_TYPE_1355, // 0x54b
    TILE_TYPE_1356, // 0x54c
    TILE_TYPE_1357, // 0x54d
    TILE_TYPE_1358, // 0x54e
    TILE_TYPE_1359, // 0x54f
    TILE_TYPE_1360, // 0x550
    TILE_TYPE_1361, // 0x551
    TILE_TYPE_1362, // 0x552
    TILE_TYPE_1363, // 0x553
    TILE_TYPE_1364, // 0x554
    TILE_TYPE_1365, // 0x555
    TILE_TYPE_1366, // 0x556
    TILE_TYPE_1367, // 0x557
    TILE_TYPE_1368, // 0x558
    TILE_TYPE_1369, // 0x559
    TILE_TYPE_1370, // 0x55a
    TILE_TYPE_1371, // 0x55b
    TILE_TYPE_1372, // 0x55c
    TILE_TYPE_1373, // 0x55d
    TILE_TYPE_1374, // 0x55e
    TILE_TYPE_1375, // 0x55f
    TILE_TYPE_1376, // 0x560
    TILE_TYPE_1377, // 0x561
    TILE_TYPE_1378, // 0x562
    TILE_TYPE_1379, // 0x563
    TILE_TYPE_1380, // 0x564
    TILE_TYPE_1381, // 0x565
    TILE_TYPE_1382, // 0x566
    TILE_TYPE_1383, // 0x567
    TILE_TYPE_1384, // 0x568
    TILE_TYPE_1385, // 0x569
    TILE_TYPE_1386, // 0x56a
    TILE_TYPE_1387, // 0x56b
    TILE_TYPE_1388, // 0x56c
    TILE_TYPE_1389, // 0x56d
    TILE_TYPE_1390, // 0x56e
    TILE_TYPE_1391, // 0x56f
    TILE_TYPE_1392, // 0x570
    TILE_TYPE_1393, // 0x571
    TILE_TYPE_1394, // 0x572
    TILE_TYPE_1395, // 0x573
} TileType;

typedef enum {
    SPECIAL_TILE_0 = 0x4000, // Pots
    SPECIAL_TILE_1,          // 0x4001 // Move Pot Up
    SPECIAL_TILE_2,          // 0x4002 // Move Pot Right
    SPECIAL_TILE_3,          // 0x4003 // Move Pot Down
    SPECIAL_TILE_4,          // 0x4004 // Move Pot Left
    SPECIAL_TILE_5,          // 0x4005
    SPECIAL_TILE_6,          // 0x4006
    SPECIAL_TILE_7,          // 0x4007
    SPECIAL_TILE_8,          // 0x4008
    SPECIAL_TILE_9,          // 0x4009
    SPECIAL_TILE_10,         // 0x400a
    SPECIAL_TILE_11,         // 0x400b // Statues/ Pillar Gates
    SPECIAL_TILE_12,         // 0x400c // Move Statue Up
    SPECIAL_TILE_13,         // 0x400d // Move Statue Right
    SPECIAL_TILE_14,         // 0x400e // Move Statue Down
    SPECIAL_TILE_15,         // 0x400f // Move Statue Left
    SPECIAL_TILE_16,         // 0x4010
    SPECIAL_TILE_17,         // 0x4011
    SPECIAL_TILE_18,         // 0x4012
    SPECIAL_TILE_19,         // 0x4013
    SPECIAL_TILE_20,         // 0x4014 // Beanstalk/Ladder Top (Transition)
    SPECIAL_TILE_21,         // 0x4015 // Boulder in Hole
    SPECIAL_TILE_22,         // 0x4016
    SPECIAL_TILE_23,         // 0x4017 // Beanstalk/Ladder
    SPECIAL_TILE_24,         // 0x4018
    SPECIAL_TILE_25,         // 0x4019
    SPECIAL_TILE_26,         // 0x401a
    SPECIAL_TILE_27,         // 0x401b // Boulder
    SPECIAL_TILE_28,         // 0x401c // Move Bolder Up
    SPECIAL_TILE_29,         // 0x401d // Move Bolder Right
    SPECIAL_TILE_30,         // 0x401e // Move Bolder Down
    SPECIAL_TILE_31,         // 0x401f // Move Bolder Left
    SPECIAL_TILE_32,         // 0x4020 // Spring hole (Cane shot hole)
    SPECIAL_TILE_33,         // 0x4021
    SPECIAL_TILE_34,  // 0x4022 // Furniture Center Locked Door/Frozen Element/Octo/O Shaped Ice (ToD) Big Chest
                           // Closed (ToD) Gust Jar Mushrooms (ToD)     Perhaps this is just tiles that change on
                           // interaction?
    SPECIAL_TILE_35,  // 0x4023 // Object Top
    SPECIAL_TILE_36,  // 0x4024 // Object Left
    SPECIAL_TILE_37,  // 0x4025 // Object Right
    SPECIAL_TILE_38,  // 0x4026 // Object Bottom
    SPECIAL_TILE_39,  // 0x4027 // Object Top Left Corner
    SPECIAL_TILE_40,  // 0x4028 // Object Top Right Corner
    SPECIAL_TILE_41,  // 0x4029 // Object Bottom Left Corner
    SPECIAL_TILE_42,  // 0x402a // Object Bottom Right Corner
    SPECIAL_TILE_43,  // 0x402b // Push Object Either (1 off)
    SPECIAL_TILE_44,  // 0x402c // Push Object Left (1 off)
    SPECIAL_TILE_45,  // 0x402d // Push Object Right (1 off)
    SPECIAL_TILE_46,  // 0x402e // Push Object Either
    SPECIAL_TILE_47,  // 0x402f
    SPECIAL_TILE_48,  // 0x4030
    SPECIAL_TILE_49,  // 0x4031 // Pushed Object
    SPECIAL_TILE_50,  // 0x4032 // Blue Bean in Hole
    SPECIAL_TILE_51,  // 0x4033
    SPECIAL_TILE_52,  // 0x4034
    SPECIAL_TILE_53,  // 0x4035
    SPECIAL_TILE_54,  // 0x4036 // Pillar w/ Object
    SPECIAL_TILE_55,  // 0x4037 // Move pillar Up
    SPECIAL_TILE_56,  // 0x4038 // Move pillar Right
    SPECIAL_TILE_57,  // 0x4039 // Move pillar Down
    SPECIAL_TILE_58,  // 0x403a // Move pillar Left
    SPECIAL_TILE_59,  // 0x403b // Green Bean in Hole
    SPECIAL_TILE_60,  // 0x403c
    SPECIAL_TILE_61,  // 0x403d // Minish Path Under Stick, Stone over hole in light rooms (ToD), Object Blocking
                           // Town doors
    SPECIAL_TILE_62,  // 0x403e // Grave
    SPECIAL_TILE_63,  // 0x403f
    SPECIAL_TILE_64,  // 0x4040 // Portal Top Left
    SPECIAL_TILE_65,  // 0x4041 // Portal Top
    SPECIAL_TILE_66,  // 0x4042 // Portal Top Right
    SPECIAL_TILE_67,  // 0x4043 // Portal Left
    SPECIAL_TILE_68,  // 0x4044 // Portal Center
    SPECIAL_TILE_69,  // 0x4045 // Portal Right
    SPECIAL_TILE_70,  // 0x4046 // Portal Bottom Left
    SPECIAL_TILE_71,  // 0x4047 // Portal Bottom
    SPECIAL_TILE_72,  // 0x4048 // Portal Bottom Right
    SPECIAL_TILE_73,  // 0x4049
    SPECIAL_TILE_74,  // 0x404a // Push Box
    SPECIAL_TILE_75,  // 0x404b // Move Block Up
    SPECIAL_TILE_76,  // 0x404c // Move Block Right
    SPECIAL_TILE_77,  // 0x404d // Move Block Down
    SPECIAL_TILE_78,  // 0x404e // Push Box Locked
    SPECIAL_TILE_79,  // 0x404f
    SPECIAL_TILE_80,  // 0x4050 // Impact Switch
    SPECIAL_TILE_81,  // 0x4051
    SPECIAL_TILE_82,  // 0x4052 // Lever (facing left)
    SPECIAL_TILE_83,  // 0x4053 // Lever (facing up)
    SPECIAL_TILE_84,  // 0x4054 // After Lever push (facing left)
    SPECIAL_TILE_85,  // 0x4055 // Big lever (facing left inside)
    SPECIAL_TILE_86,  // 0x4056 // Big lever (facing left outside)
    SPECIAL_TILE_87,  // 0x4057 // Big lever (facing up inside)
    SPECIAL_TILE_88,  // 0x4058 // Big lever (facing up outside)
    SPECIAL_TILE_89,  // 0x4059
    SPECIAL_TILE_90,  // 0x405a // Ice Blocks
    SPECIAL_TILE_91,  // 0x405b // Move Block Up
    SPECIAL_TILE_92,  // 0x405c // Move Block Right
    SPECIAL_TILE_93,  // 0x405d // Move Block Down
    SPECIAL_TILE_94,  // 0x405e // Move Block Left
    SPECIAL_TILE_95,  // 0x405f
    SPECIAL_TILE_96,  // 0x4060 // Skull
    SPECIAL_TILE_97,  // 0x4061 // Lit Fireplace
    SPECIAL_TILE_98,  // 0x4062
    SPECIAL_TILE_99,  // 0x4063
    SPECIAL_TILE_100, // 0x4064
    SPECIAL_TILE_101, // 0x4065 // Tree Thorns Right
    SPECIAL_TILE_102, // 0x4066 // Tree Thorns Left
    SPECIAL_TILE_103, // 0x4067
    SPECIAL_TILE_104, // 0x4068 // Hot Ash Covering Objects
    SPECIAL_TILE_105, // 0x4069 // Loading Zone
    SPECIAL_TILE_106, // 0x406a
    SPECIAL_TILE_107, // 0x406b
    SPECIAL_TILE_108, // 0x406c // Acorn Top Left
    SPECIAL_TILE_109, // 0x406d // Acorn Top Right
    SPECIAL_TILE_110, // 0x406e // Acorn Bottom Left
    SPECIAL_TILE_111, // 0x406f // Acorn Bottom Right
    SPECIAL_TILE_112, // 0x4070 // Link in a hole
    SPECIAL_TILE_113, // 0x4071
    SPECIAL_TILE_114, // 0x4072 // Blocking Library, all kinds of objects?
    SPECIAL_TILE_115, // 0x4073
    SPECIAL_TILE_116, // 0x4074 // Leaf
    SPECIAL_TILE_117, // 0x4075 // Chest Ice Block Top Left
    SPECIAL_TILE_118, // 0x4076 // Chest Ice Block Top Right
    SPECIAL_TILE_119, // 0x4077 // Chest Ice Block Top
    SPECIAL_TILE_120, // 0x4078 // Chest Ice Block Bottom Left
    SPECIAL_TILE_121, // 0x4079 // Chest Ice Block Left
    SPECIAL_TILE_122, // 0x407a // Chest Ice Block Bottom Right
    SPECIAL_TILE_123, // 0x407b // Chest Ice Block Right
    SPECIAL_TILE_124, // 0x407c // Chest Ice Block Bottom
    SPECIAL_TILE_125, // 0x407d // Town Well
    SPECIAL_TILE_126, // 0x407e
    SPECIAL_TILE_127, // 0x407f
    SPECIAL_TILE_128, // 0x4080 // Dig Cave Outside
    SPECIAL_TILE_129, // 0x4081
    SPECIAL_TILE_130, // 0x4082 // Bookshelf slider
    SPECIAL_TILE_131, // 0x4083 // Minish House doorways
    SPECIAL_TILE_132, // 0x4084
    SPECIAL_TILE_133, // 0x4085
    SPECIAL_TILE_134, // 0x4086
    SPECIAL_TILE_135, // 0x4087
    SPECIAL_TILE_136, // 0x4088
    SPECIAL_TILE_137, // 0x4089 // Shallow Water Outside ToD
    SPECIAL_TILE_138, // 0x408a // Shallow Water Outside ToD
    SPECIAL_TILE_139, // 0x408b // Shallow Water Outside ToD
    SPECIAL_TILE_140, // 0x408c // Shallow Water Outside ToD
    SPECIAL_TILE_141, // 0x408d
    SPECIAL_TILE_142, // 0x408e // Climb Wall Down, Library book ladder, Rock Boost
    SPECIAL_TILE_143, // 0x408f // Climb Wall Up, Rock Boost
    SPECIAL_TILE_144, // 0x4090
    SPECIAL_TILE_145, // 0x4091 // Shallow Water Outside ToD
    SPECIAL_TILE_146, // 0x4092 // Minish Pot Top Left Flipping
    SPECIAL_TILE_147, // 0x4093 // Minish Pot Top Right Flipping
    SPECIAL_TILE_148, // 0x4094 // Minish Pot Bottom Left Flipping
    SPECIAL_TILE_149, // 0x4095 // Minish Pot Botom Right Flipping
    SPECIAL_TILE_150, // 0x4096
} SpecialTile;

typedef enum {
    VVV_0 = 0, // TILE_ACT_CUT
    VVV_1 = 1, // TILE_ACT_ROCKBREAKER
    VVV_2 = 2, // TILE_ACT_BOOMERANG
    VVV_3 = 3, // TILE_ACT_BOMB
    VVV_4 = 4, // TILE_ACT_ARROW
    VVV_5 = 5, // TILE_ACT_GUST
    VVV_6 = 6, // TILE_ACT_LIFT
    VVV_7 = 7, // TILE_ACT_FIRE
    VVV_8 = 8,   // TILE_ACT_PLAYER_WALK -> SURFACE_7
    VVV_9 = 9,   // TILE_ACT_ENEMY_WALK sub_0801FDE4(leever)
    VVV_10 = 10, // TILE_ACT_PACCI sub_0801FDE4(leever), sub_08025AB8(puffstool)
    VVV_11 = 11, // sub_0801FDE4(leever)
    VVV_12 = 12, // TILE_ACT_SWORDBEAM sub_0801FDE4(leever)
    VVV_13 = 13, // TILE_ACT_DIG -> SURFACE_PIT, sub_08094E30(cutsceneMiscObject), sub_08085B40(lilypadLarge), Pot_Action1,
                 // sub_080AD040(playerItemHeldObject), UpdatePlayerCollision, sub_0807B434(playerUtils), FX_FALL_DOWN
    VVV_14 = 14, // TILE_ACT_MINIGUST -> SURFACE_SLOPE_GNDWATER
    VVV_15 = 15, // -> SURFACE_SHALLOW_WATER, SPECIAL_TILE_145
    VVV_16 = 16, // -> SURFACE_WATER, CheckWaterTile(chuchu), PlayerItemBottle_UseEmptyBottle, SPECIAL_TILE_137 -
                 // 140, sub_080AD040(playerItemHeldObject), FX_WATER_SPLASH
    VVV_17 = 17, // -> SURFACE_14, sub_08085A44(lilypadLarge), sub_080AD040(playerItemHeldObject), FX_WATER_SPLASH
    VVV_18 = 18, // -> SURFACE_ICE, SPECIAL_TILE_117 - 124
    VVV_19 = 19, // -> SURFACE_SWAMP, sub_0803163C(rope), sub_080AD040(playerItemHeldObject), FX_GREEN_SPLASH
    VVV_20 = 20,
    VVV_21 = 21,
    VVV_22 = 22, // -> SURFACE_DUST
    VVV_23 = 23, // -> SURFACE_2D
    VVV_24 = 24, // -> SURFACE_16
    VVV_25 = 25, // -> SURFACE_HOLE, CrenelBeanSprout_Action1, sub_08097144(objectOnPillar), sub_0808A644(pushableRock),
                 // sub_080701F8(playerItemPacciCaneProjectile)
    VVV_26 = 26,
    VVV_27 = 27, // -> SURFACE_BUTTON
    VVV_28 = 28,
    VVV_29 = 29, // -> SURFACE_BUTTON
    VVV_30 = 30,
    VVV_31 = 31, // -> SURFACE_MINISH_DOOR_FRONT
    VVV_32 = 32, // -> SURFACE_MINISH_DOOR_BACK
    VVV_33 = 33, // -> SURFACE_A
    VVV_34 = 34, // -> SURFACE_B
    VVV_35 = 35, // SPECIAL_TILE_130
    VVV_36 = 36,
    VVV_37 = 37,
    VVV_38 = 38, // -> SURFACE_SLOPE_GNDGND_V
    VVV_39 = 39, // -> SURFACE_SLOPE_GNDGND_H
    VVV_40 = 40, // -> SURFACE_DOOR_13, SPECIAL_TILE_105, sub_080732D0(player), UpdateDoorTransition
    VVV_41 = 41, // -> SURFACE_DOOR, sub_08076DF4(itemGustJar), Minecart_Action3, sub_080896B0(pushableStatue),
                 // SPECIAL_TILE_128, SPECIAL_TILE_131 - 136, SPECIAL_TILE_141, sub_080724DC(player),
                 // UpdateDoorTransition
    VVV_42 = 42, // -> SURFACE_E, sub_080611D4(npc5)
    VVV_43 = 43, // -> SURFACE_D, sub_080611D4(npc5)
    VVV_44 = 44, // -> SURFACE_10, sub_080611D4(npc5)
    VVV_45 = 45, // -> SURFACE_F, sub_080611D4(npc5)
    VVV_46 = 46, // BombableWallManager_Action1, sub_080878CC(smokeParticle), sub_080A7A84(playerItemSword)
    VVV_47 = 47,
    VVV_48 = 48, // -> SURFACE_22
    VVV_49 = 49, // -> SURFACE_22
    VVV_50 = 50, // -> SURFACE_22
    VVV_51 = 51, // -> SURFACE_22
    VVV_52 = 52, // -> SURFACE_LIGHT_GRADE
    VVV_53 = 53, // -> SURFACE_29
    VVV_54 = 54,
    VVV_55 = 55,
    VVV_56 = 56,
    VVV_57 = 57,
    VVV_58 = 58, // SPECIAL_TILE_81
    VVV_59 = 59,
    VVV_60 = 60,
    VVV_61 = 61, // MinishPortalManager_Main, SPECIAL_TILE_64 - 72
    VVV_62 = 62, // sub_080AA544(removableDust)
    VVV_63 = 63, // -> SURFACE_AUTO_LADDER, FurnitureInit(for STAIRCASE), UpdateDoorTransition
    VVV_64 = 64, // -> SURFACE_E
    VVV_65 = 65, // -> SURFACE_D
    VVV_66 = 66, // -> SURFACE_10
    VVV_67 = 67, // -> SURFACE_F
    VVV_68 = 68, // -> SURFACE_D
    VVV_69 = 69, // -> SURFACE_E
    VVV_70 = 70, // -> SURFACE_D
    VVV_71 = 71, // -> SURFACE_E
    VVV_72 = 72, // -> SURFACE_10
    VVV_73 = 73, // -> SURFACE_D
    VVV_74 = 74, // -> SURFACE_E
    VVV_75 = 75, // -> SURFACE_D
    VVV_76 = 76,
    VVV_77 = 77,
    VVV_78 = 78,
    VVV_79 = 79,
    VVV_80 = 80, // -> SURFACE_CLIMB_WALL, SPECIAL_TILE_142
    VVV_81 = 81, // -> SURFACE_2C, SPECIAL_TILE_143
    VVV_82 = 82, // -> SURFACE_26
    VVV_83 = 83, // -> SURFACE_LADDER, SPECIAL_TILE_23
    VVV_84 = 84, // TreeHidingPortal_Action1
    VVV_85 = 85,
    VVV_86 = 86, // sub_080774A0(itemMoleMitts), sub_0807B464(playerUtils)
    VVV_87 = 87, // -> SURFACE_CLONE_TILE, sub_0806B0E0(townMinish)
    VVV_88 = 88,
    VVV_89 = 89,
    VVV_90 = 90, // -> SURFACE_1C, sub_080AD040(playerItemHeldObject), FX_LAVA_SPLASH
    VVV_91 = 91,
    VVV_92 = 92,
    VVV_93 = 93,
    VVV_94 = 94,
    VVV_95 = 95,
    VVV_96 = 96,
    VVV_97 = 97,   // -> SURFACE_1B
    VVV_98 = 98,   // -> SURFACE_21
    VVV_99 = 99,   // -> SURFACE_24
    VVV_100 = 100, // Minecart_Action3
    VVV_101 = 101, // -> SURFACE_6, Minecart_Action3
    VVV_102 = 102, // -> SURFACE_6, Minecart_Action3
    VVV_103 = 103, // -> SURFACE_6, Minecart_Action3
    VVV_104 = 104, // -> SURFACE_6, Minecart_Action3
    VVV_105 = 105, // -> SURFACE_6, Minecart_Action3
    VVV_106 = 106, // -> SURFACE_6, Minecart_Action3
    VVV_107 = 107, // -> SURFACE_6
    VVV_108 = 108, // -> SURFACE_6, Minecart_Action3
    VVV_109 = 109, // -> SURFACE_6, Minecart_Action3
    VVV_110 = 110, // -> SURFACE_6, Minecart_Action3
    VVV_111 = 111, // -> SURFACE_6, Minecart_Action3
    VVV_112 = 112,
    VVV_113 = 113,
    VVV_114 = 114,
    VVV_115 = 115,
    VVV_116 = 116, // -> SURFACE_EDGE, SPECIAL_TILE_126, SPECIAL_TILE_127, sub_08018E68(playerItemGustBig),
                   // sub_080AD040(playerItemHeldObject)
    VVV_117 = 117,
    VVV_240 = 240, // -> SURFACE_HOLE, sub_0802F300(tektite), sub_0808A644(pushableRock), SPECIAL_TILE_32
    VVV_241 = 241, // -> SURFACE_LADDER, sub_0802F300(tektite), SPECIAL_TILE_20, UpdateDoorTransition
    VVV_242 = 242, // sub_0802F300(tektite), Minecart_Action3, SPECIAL_TILE_24
    VVV_243 = 243, // sub_0802F300(tektite), Minecart_Action3, SPECIAL_TILE_25
    // up to VVV_255 -> sub_0802F300(tektite)
} Vvv;

typedef enum {
    COLLISION_DATA_0 = 0,
    COLLISION_DATA_1 = 1,
    COLLISION_DATA_2 = 2,
    COLLISION_DATA_3 = 3,
    COLLISION_DATA_4 = 4,
    COLLISION_DATA_5 = 5,
    COLLISION_DATA_6 = 6,
    COLLISION_DATA_7 = 7,
    COLLISION_DATA_8 = 8,
    COLLISION_DATA_9 = 9,
    COLLISION_DATA_10 = 10,
    COLLISION_DATA_11 = 11,
    COLLISION_DATA_12 = 12,
    COLLISION_DATA_13 = 13,
    COLLISION_DATA_14 = 14,
    COLLISION_DATA_15 = 15,
    COLLISION_DATA_16 = 16,
    COLLISION_DATA_17 = 17,
    COLLISION_DATA_18 = 18,
    COLLISION_DATA_19 = 19,
    COLLISION_DATA_20 = 20,
    COLLISION_DATA_21 = 21,
    COLLISION_DATA_23 = 23,
    COLLISION_DATA_24 = 24,
    COLLISION_DATA_25 = 25,
    COLLISION_DATA_26 = 26,
    COLLISION_DATA_27 = 27,
    COLLISION_DATA_28 = 28,
    COLLISION_DATA_29 = 29,
    COLLISION_DATA_32 = 32,
    COLLISION_DATA_33 = 33, // FX_FALL_DOWN
    COLLISION_DATA_34 = 34,
    COLLISION_DATA_35 = 35,
    COLLISION_DATA_36 = 36, // FX_WATER_SPLASH
    COLLISION_DATA_37 = 37, // FX_LAVA_SPLASH
    COLLISION_DATA_38 = 38,
    COLLISION_DATA_39 = 39,
    COLLISION_DATA_40 = 40,
    COLLISION_DATA_41 = 41,
    COLLISION_DATA_42 = 42,
    COLLISION_DATA_43 = 43,
    COLLISION_DATA_44 = 44,
    COLLISION_DATA_45 = 45,
    COLLISION_DATA_46 = 46,
    COLLISION_DATA_47 = 47,
    COLLISION_DATA_48 = 48, // FX_WATER_SPLASH
    COLLISION_DATA_49 = 49,
    COLLISION_DATA_50 = 50,
    COLLISION_DATA_58 = 58,
    COLLISION_DATA_60 = 60,
    COLLISION_DATA_63 = 63,
    COLLISION_DATA_66 = 66,
    COLLISION_DATA_67 = 67,
    COLLISION_DATA_68 = 68,
    COLLISION_DATA_69 = 69,
    COLLISION_DATA_70 = 70,
    COLLISION_DATA_71 = 71,
    COLLISION_DATA_72 = 72,
    COLLISION_DATA_74 = 74,
    COLLISION_DATA_75 = 75,
    COLLISION_DATA_80 = 80,
    COLLISION_DATA_81 = 81,
    COLLISION_DATA_82 = 82,
    COLLISION_DATA_83 = 83,
    COLLISION_DATA_84 = 84,
    COLLISION_DATA_85 = 85,
    COLLISION_DATA_87 = 87,
    COLLISION_DATA_88 = 88,
    COLLISION_DATA_89 = 89,
    COLLISION_DATA_90 = 90,
    COLLISION_DATA_91 = 91,
    COLLISION_DATA_92 = 92,
    COLLISION_DATA_93 = 93,
    COLLISION_DATA_94 = 94,
    COLLISION_DATA_95 = 95,
    COLLISION_DATA_96 = 96,
    COLLISION_DATA_97 = 97,
    COLLISION_DATA_98 = 98,
    COLLISION_DATA_99 = 99,
    COLLISION_DATA_100 = 100,
    COLLISION_DATA_101 = 101,
    COLLISION_DATA_102 = 102,
    COLLISION_DATA_103 = 103,
    COLLISION_DATA_104 = 104,
    COLLISION_DATA_105 = 105,
    COLLISION_DATA_106 = 106,
    COLLISION_DATA_107 = 107,
    COLLISION_DATA_255 = 255,
} CollisionData;
#endif // TILES_H
