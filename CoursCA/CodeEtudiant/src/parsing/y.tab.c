
/*  A Bison parser, made from asm_mips.yac
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse asm_mipsparse
#define yylex asm_mipslex
#define yyerror asm_mipserror
#define yylval asm_mipslval
#define yychar asm_mipschar
#define yydebug asm_mipsdebug
#define yynerrs asm_mipsnerrs
#define	_ALIGN_	258
#define	_ASCII_	259
#define	_ASCIIZ_	260
#define	_BYTE_	261
#define	_COMM_	262
#define	_END_	263
#define	_ENT_	264
#define	_EQU_	265
#define	_EXTERN_	266
#define	_GLOBAL_	267
#define	_LCOMM_	268
#define	_NOREORDER_	269
#define	_REORDER_	270
#define	_SECTION_	271
#define	_SET_	272
#define	_SKIP_	273
#define	_SPACE_	274
#define	_WORD_	275
#define	ARegister	276
#define	Ampersand	277
#define	Bar	278
#define	CarriageReturn	279
#define	Circomflex	280
#define	Codop_hint_mem	281
#define	Codop_label	282
#define	Codop_n	283
#define	Codop_od_rs	284
#define	Codop_rd	285
#define	Codop_rd_si16	286
#define	Codop_rd_rs	287
#define	Codop_rd_rs_rt	288
#define	Codop_rd_rt_sham	289
#define	Codop_rd_rt_rs	290
#define	Codop_rd_rs_si16	291
#define	Codop_rd_rs_ui16	292
#define	Codop_rd_mem	293
#define	Codop_rs	294
#define	Codop_rs_label	295
#define	Codop_rs_rt	296
#define	Codop_rs_rt_label	297
#define	Codop_rs_si16	298
#define	Codop_rt_cop0r	299
#define	Codop_rt_cop2r	300
#define	Codop_rt_mem	301
#define	Codop_ui20	302
#define	Colon	303
#define	Comma	304
#define	Cop0Register	305
#define	DoubleGreat	306
#define	DoubleLess	307
#define	Identifier	308
#define	IntegerRegister	309
#define	LeftParen	310
#define	Litteral	311
#define	Macro_label	312
#define	Macro_n	313
#define	Macro_rd_i32	314
#define	Macro_rd_rs	315
#define	Macro_rd_rt	316
#define	Macro_rd_label	317
#define	Macro_rs_label	318
#define	Minus	319
#define	Plus	320
#define	Register	321
#define	RightParen	322
#define	Slash	323
#define	Star	324
#define	String	325
#define	String2	326
#define	GCC_operator	327
#define	Tilda	328
#define	Arobase	329

#line 10 "asm_mips.yac"

#include <iostream>
#include <Program.h>
#include <Directive.h>
#include <Label.h>
#include <stdlib.h>
#include <stdio.h>
extern "C" {
#include "utl200.h"
#include "asm200.h"
}
#include <asm_mipsyac.h>
#include<map>
#include <sstream>

#undef  yylex
#define yylex         asm_mipslex
#define yyrestart     asm_mipsrestart
#define yyin          asm_mipsin

extern "C" {extern int            yylex     (YYSTYPE *);}

extern void           yyrestart ();
extern int            yyparse   ();
extern FILE           *yyin       ;

Program prog ;


map<int,string> strmap ;
static int strmap_id ;

void programparse(string file) {
	// ###------------------------------------------------------### 
	//    initialize global and static variables			
	// ###------------------------------------------------------### 

//	std::cout << "Starting parsing" << std::endl;
	
	strmap_id = 0;

	yyin = fopen(file.c_str(), "r") ;
	yyparse() ;
	//std::cout << "Parsing done" << std::endl;
}


static void yyerror (char * str)
	{ std::cout << "yyerror at line " << ASM_LINENO << " : " << str <<std::endl ;	}


#line 62 "asm_mips.yac"
typedef union
  {
  struct utchn  *pchn    ;
  unsigned int   uval    ;
  char          *text    ;
  } YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		319
#define	YYFLAG		-32768
#define	YYNTBASE	75

#define YYTRANSLATE(x) ((unsigned)(x) <= 329 ? yytranslate[x] : 158)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     5,     8,    11,    12,    15,    19,    22,
    25,    27,    29,    32,    33,    37,    39,    41,    43,    45,
    47,    50,    53,    54,    56,    61,    63,    67,    71,    76,
    81,    83,    87,    91,    95,    99,   103,   106,   114,   117,
   120,   122,   125,   130,   133,   141,   149,   156,   161,   166,
   171,   176,   183,   190,   197,   204,   211,   218,   225,   228,
   233,   238,   245,   252,   259,   264,   269,   274,   282,   289,
   294,   297,   300,   302,   304,   306,   308,   310,   312,   314,
   316,   318,   320,   322,   324,   326,   328,   330,   332,   334,
   336,   338,   340,   342,   345,   347,   352,   357,   362,   367,
   372,   374,   376,   378,   380,   382,   384,   386,   388,   391,
   394,   397,   402,   409,   412,   415,   418,   420,   422,   424,
   426,   428,   430,   432,   434,   436,   438,   440,   442,   444,
   446,   448,   450,   452,   454,   456,   458,   460,   462,   464,
   466,   468,   470,   473,   475,   478,   481,   484,   487,   488,
   491,   494,   497,   500,   503,   506,   509,   511,   513,   515,
   518,   521,   523,   525,   527,   529,   531,   533,   535,   537,
   539,   540,   542,   544,   546,   549,   550
};

static const short yyrhs[] = {    65,
     0,    64,     0,     0,   124,    48,     0,     3,    56,     0,
     0,    78,    79,     0,    76,   154,    84,     0,   153,    84,
     0,     1,    84,     0,    81,     0,    78,     0,   122,    83,
     0,     0,    83,    49,   122,     0,    24,     0,    50,     0,
    21,     0,   144,     0,   127,     0,     8,    90,     0,     9,
    53,     0,     0,    53,     0,    10,    53,    49,   122,     0,
    93,     0,    92,    75,    93,     0,    55,   122,    67,     0,
    73,    55,   122,    67,     0,    64,    55,   122,    67,     0,
   152,     0,    93,   126,    93,     0,    94,   126,    93,     0,
    93,   145,    93,     0,    95,    69,    93,     0,    93,   151,
    93,     0,    11,   124,     0,    26,   122,    49,   121,    55,
   123,    67,     0,    27,   122,     0,    27,   123,     0,    28,
     0,    29,   123,     0,    29,   123,    49,   123,     0,    30,
   123,     0,    38,   123,    49,   121,    55,   123,    67,     0,
    38,   123,    49,    72,    55,   123,    67,     0,    38,   123,
    49,    55,   123,    67,     0,    38,   123,    49,   122,     0,
    31,   123,    49,   121,     0,    31,   123,    49,    72,     0,
    32,   123,    49,   123,     0,    33,   123,    49,   123,    49,
   123,     0,    36,   123,    49,   123,    49,   121,     0,    36,
   123,    49,   123,    49,    72,     0,    33,   123,    49,   123,
    49,   121,     0,    37,   123,    49,   123,    49,   155,     0,
    35,   123,    49,   123,    49,   123,     0,    34,   123,    49,
   123,    49,   122,     0,    39,   123,     0,    40,   123,    49,
   122,     0,    41,   123,    49,   123,     0,    41,   123,    49,
   123,    49,   123,     0,    42,   123,    49,   123,    49,   122,
     0,    42,   123,    49,   123,    49,    71,     0,    43,   123,
    49,   121,     0,    44,   123,    49,    85,     0,    45,   123,
    49,    86,     0,    46,   123,    49,   121,    55,   123,    67,
     0,    46,   123,    49,    55,   123,    67,     0,    46,   123,
    49,   122,     0,    47,   122,     0,    12,   124,     0,   122,
     0,    92,     0,    95,     0,    94,     0,    96,     0,    54,
     0,    21,     0,    53,     0,    56,     0,    71,     0,   135,
     0,    23,     0,    22,     0,    25,     0,   130,     0,   131,
     0,   132,     0,   133,     0,   134,     0,   128,     0,   129,
     0,    57,   122,     0,    58,     0,    59,   123,    49,   122,
     0,    62,   123,    49,   122,     0,    60,   123,    49,   123,
     0,    61,   123,    49,   123,     0,    63,   123,    49,   122,
     0,   143,     0,   138,     0,   136,     0,   137,     0,   142,
     0,   141,     0,   140,     0,   139,     0,     4,    70,     0,
     5,    70,     0,     6,    82,     0,    13,    53,    49,    56,
     0,     7,    53,    49,    56,    49,    56,     0,    19,    56,
     0,    18,    56,     0,    20,   156,     0,    98,     0,    99,
     0,   100,     0,   101,     0,   102,     0,   103,     0,   105,
     0,   106,     0,   107,     0,   108,     0,   109,     0,   110,
     0,   104,     0,   111,     0,   112,     0,   113,     0,   114,
     0,   115,     0,   118,     0,   116,     0,   117,     0,   119,
     0,    69,     0,    68,     0,    56,     0,    53,     0,    16,
    53,     0,    53,     0,    17,    15,     0,    17,    14,     0,
    17,   122,     0,    53,   150,     0,     0,   150,    70,     0,
   150,    49,     0,   150,    74,     0,   150,   123,     0,   150,
    53,     0,   150,    56,     0,   150,    64,     0,    52,     0,
    51,     0,   146,     0,    64,   146,     0,    73,   146,     0,
    77,     0,   147,     0,    91,     0,   120,     0,    97,     0,
   148,     0,    89,     0,    88,     0,   149,     0,     0,   125,
     0,    87,     0,   122,     0,   122,   157,     0,     0,   157,
    49,   122,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   177,   179,   184,   185,   191,   200,   201,   206,   209,   211,
   216,   220,   224,   234,   239,   250,   254,   259,   264,   265,
   269,   275,   281,   283,   288,   299,   301,   313,   317,   322,
   327,   332,   340,   351,   358,   365,   375,   384,   403,   416,
   430,   446,   456,   471,   485,   507,   529,   550,   572,   584,
   599,   615,   644,   661,   678,   695,   714,   733,   752,   767,
   789,   814,   847,   863,   883,   903,   920,   937,   955,   972,
   990,  1003,  1012,  1017,  1019,  1021,  1023,  1028,  1030,  1035,
  1037,  1042,  1049,  1053,  1055,  1057,  1062,  1063,  1064,  1065,
  1066,  1067,  1068,  1072,  1084,  1094,  1114,  1137,  1151,  1167,
  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1195,  1204,
  1213,  1219,  1230,  1243,  1252,  1261,  1267,  1268,  1269,  1270,
  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,
  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1292,  1294,
  1299,  1301,  1310,  1315,  1322,  1325,  1328,  1336,  1345,  1350,
  1357,  1364,  1371,  1378,  1385,  1392,  1401,  1403,  1408,  1410,
  1413,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,  1428,
  1432,  1433,  1434,  1438,  1443,  1453,  1458
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","_ALIGN_",
"_ASCII_","_ASCIIZ_","_BYTE_","_COMM_","_END_","_ENT_","_EQU_","_EXTERN_","_GLOBAL_",
"_LCOMM_","_NOREORDER_","_REORDER_","_SECTION_","_SET_","_SKIP_","_SPACE_","_WORD_",
"ARegister","Ampersand","Bar","CarriageReturn","Circomflex","Codop_hint_mem",
"Codop_label","Codop_n","Codop_od_rs","Codop_rd","Codop_rd_si16","Codop_rd_rs",
"Codop_rd_rs_rt","Codop_rd_rt_sham","Codop_rd_rt_rs","Codop_rd_rs_si16","Codop_rd_rs_ui16",
"Codop_rd_mem","Codop_rs","Codop_rs_label","Codop_rs_rt","Codop_rs_rt_label",
"Codop_rs_si16","Codop_rt_cop0r","Codop_rt_cop2r","Codop_rt_mem","Codop_ui20",
"Colon","Comma","Cop0Register","DoubleGreat","DoubleLess","Identifier","IntegerRegister",
"LeftParen","Litteral","Macro_label","Macro_n","Macro_rd_i32","Macro_rd_rs",
"Macro_rd_rt","Macro_rd_label","Macro_rs_label","Minus","Plus","Register","RightParen",
"Slash","Star","String","String2","GCC_operator","Tilda","Arobase","adding_operator",
".a_label.","align_directive","..an_instruction..","an_instruction","assembly_file",
"assembly_instructions","byte_immediate_list","...byte_immediate..","CarriageReturn_ERR",
"cop0_reg","cop2_reg","effective_instruction","end_directive","ent_directive",
".Identifier.","equ_directive","expr..addop__expr..","expression","expr__logop__expr..logop__expr..",
"expr__mulop__expr..mulop__expr..","expr__shfop__expr","extern_directive","format_hint_mem",
"format_label","format_n","format_od_rs","format_rd","format_rd_mem","format_rd_si16",
"format_rd_rs","format_rd_rs_rt","format_rd_rs_si16","format_rd_rs_ui16","format_rd_rt_rs",
"format_rd_rt_sham","format_rs","format_rs_label","format_rs_rt","format_rs_rt_label",
"format_rs_si16","format_rt_cop0r","format_rt_cop2r","format_rt_mem","format_ui20",
"global_directive","signed_16_bit_immediate","immediate","integer_register",
"label","labelable_directive","logic_operator","macro_instruction","macro_label",
"macro_n","macro_rd_i32","macro_rd_label","macro_rd_rs","macro_rd_rt","macro_rs_label",
"memory_alloc_directive","memory_ascii_alloc","memory_asciiz_alloc","memory_byte_alloc",
"memory_lcomm_alloc","memory_comm_alloc","memory_space_alloc","memory_skip_alloc",
"memory_word_alloc","mips_instruction","mul_div_operator","primary","section_specification_directive",
"set_directive","other_directive","_String","shift_operator","term","unlabeled_directive",
".unlabeled_instruction.","unsigned_16_bit_immediate","word_immediate_list",
"...word_immediate..", NULL
};
#endif

static const short yyr1[] = {     0,
    75,    75,    76,    76,    77,    78,    78,    79,    79,    79,
    80,    81,    82,    83,    83,    84,    85,    86,    87,    87,
    88,    89,    90,    90,    91,    92,    92,    93,    93,    93,
    93,    94,    94,    95,    95,    96,    97,    98,    99,    99,
   100,   101,   101,   102,   103,   103,   103,   103,   104,   104,
   105,   106,   107,   107,   107,   108,   109,   110,   111,   112,
   113,   113,   114,   114,   115,   116,   117,   118,   118,   118,
   119,   120,   121,   122,   122,   122,   122,   123,   123,   124,
   124,   124,   125,   126,   126,   126,   127,   127,   127,   127,
   127,   127,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   135,   135,   135,   135,   135,   135,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   144,   144,   144,
   144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
   144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
   146,   146,   147,   147,   148,   148,   148,   149,   150,   150,
   150,   150,   150,   150,   150,   150,   151,   151,   152,   152,
   152,   153,   153,   153,   153,   153,   153,   153,   153,   153,
   154,   154,   154,   155,   156,   157,   157
};

static const short yyr2[] = {     0,
     1,     1,     0,     2,     2,     0,     2,     3,     2,     2,
     1,     1,     2,     0,     3,     1,     1,     1,     1,     1,
     2,     2,     0,     1,     4,     1,     3,     3,     4,     4,
     1,     3,     3,     3,     3,     3,     2,     7,     2,     2,
     1,     2,     4,     2,     7,     7,     6,     4,     4,     4,
     4,     6,     6,     6,     6,     6,     6,     6,     2,     4,
     4,     6,     6,     6,     4,     4,     4,     7,     6,     4,
     2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     2,     1,     4,     4,     4,     4,     4,
     1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
     2,     4,     6,     2,     2,     2,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2,     1,     2,     2,     2,     2,     0,     2,
     2,     2,     2,     2,     2,     2,     1,     1,     1,     2,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     1,     1,     1,     2,     0,     3
};

static const short yydefact[] = {     6,
     0,    11,     0,     0,    23,     0,     0,     0,     0,     0,
     0,   149,    81,    82,   171,   162,     7,   169,   168,   164,
   166,   165,     0,   163,   167,   170,     0,    16,    10,     5,
    24,    21,    22,     0,    80,    37,    72,   143,   146,   145,
   142,     0,   141,     0,     0,    74,    26,    76,    75,    77,
   147,   159,    31,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    95,     0,     0,     0,     0,
     0,   173,   117,   118,   119,   120,   121,   122,   129,   123,
   124,   125,   126,   127,   128,   130,   131,   132,   133,   134,
   136,   137,   135,   138,   172,    20,    92,    93,    87,    88,
    89,    90,    91,    83,   103,   104,   102,   108,   107,   106,
   105,   101,    19,     0,     4,     9,     0,     0,     0,   160,
     0,   161,     2,     1,     0,    85,    84,    86,   158,   157,
   140,   139,     0,     0,     0,     0,     0,    79,   151,   154,
    78,   155,   156,   150,   152,   153,   109,   110,   111,    14,
     0,     0,   115,   114,   176,   116,     0,    39,    40,    42,
    44,     0,     0,     0,     0,     0,     0,     0,     0,    59,
     0,     0,     0,     0,     0,     0,     0,    71,    94,     0,
     0,     0,     0,     0,     8,    25,    28,     0,     0,    27,
    32,    34,    36,    33,    35,    13,     0,     0,   175,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    30,    29,     0,     0,   112,     0,     0,    73,    43,
    50,    49,    51,     0,     0,     0,     0,     0,     0,     0,
     0,    48,    60,    61,     0,    65,    17,    66,    18,    67,
     0,     0,    70,    96,    98,    99,    97,   100,    15,     0,
   177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   113,     0,    55,    52,    58,    57,
    54,    53,   174,    56,    47,     0,     0,    62,    64,    63,
    69,     0,    38,    46,    45,    68,     0,     0,     0
};

static const short yydefgoto[] = {   145,
    15,    16,     1,    17,   317,     2,   169,   216,    29,   268,
   270,    92,    18,    19,    32,    20,    46,    47,    48,    49,
    50,    21,    93,    94,    95,    96,    97,    98,    99,   100,
   101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
   111,   112,   113,   114,    22,   248,   249,   166,    23,   115,
   153,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   154,
    52,    24,    25,    26,    54,   155,    53,    27,   134,   304,
   176,   219
};

static const short yypact[] = {-32768,
   131,-32768,   -19,   -46,   -34,   -12,   -10,   -47,   -47,    -6,
     2,   -22,-32768,-32768,   309,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,     6,-32768,-32768,-32768,   -19,-32768,-32768,-32768,
-32768,-32768,-32768,   -15,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   -35,-32768,   -42,   -23,   -16,   183,    54,    -8,-32768,
-32768,-32768,-32768,   -14,     8,    10,   -35,    30,    49,    16,
    47,   -35,   -35,    60,-32768,   -17,   -17,   -17,   -17,   -17,
   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
   -17,   -17,   -17,   -35,   -35,-32768,   -17,   -17,   -17,   -17,
   -17,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   -19,-32768,-32768,   -35,    37,   -35,-32768,
   -35,-32768,-32768,-32768,   -35,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   -35,   -35,   -35,   -35,   -35,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    62,    63,-32768,-32768,-32768,-32768,    68,-32768,-32768,    69,
-32768,    70,    71,    72,    73,    74,    76,    78,    80,-32768,
    96,    97,   103,   104,   105,   107,   130,-32768,-32768,   132,
   133,   134,   136,   137,-32768,-32768,-32768,   113,   128,-32768,
-32768,-32768,-32768,-32768,-32768,   151,   141,   153,   161,   -35,
   -17,   -28,   -17,   -17,   -17,   -17,   -17,   -17,   143,   -35,
   -17,   -17,   -35,   167,   202,   158,   -35,   -17,   -17,   -35,
   -35,-32768,-32768,   -35,   175,-32768,   -35,   172,-32768,-32768,
-32768,-32768,-32768,   179,   188,   189,   191,   198,    60,   177,
   199,   200,-32768,   204,   209,-32768,-32768,-32768,-32768,-32768,
    60,   206,   200,-32768,-32768,-32768,-32768,-32768,-32768,   203,
-32768,   -17,    60,   -35,   -17,   148,   -35,   195,   -17,   -17,
   -17,   211,   196,   -17,-32768,   201,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   205,   207,-32768,-32768,-32768,
-32768,   212,-32768,-32768,-32768,-32768,   265,   269,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -24,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -86,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  -221,   -11,    18,    14,-32768,
   222,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    19,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768
};


#define	YYLAST		372


static const short yytable[] = {    51,
   252,  -144,   136,   158,    28,    35,   158,   261,    13,    30,
    41,   266,   139,    43,   272,    39,    40,    41,    31,    42,
    43,    36,    37,    14,    41,   -80,    42,    43,    44,    41,
   138,   141,    43,   137,   159,    44,   161,    45,   160,   161,
    33,   162,    34,   251,    45,   170,    38,   143,   144,   163,
   175,   177,   178,   135,    41,   164,    42,    43,   210,   165,
   157,   297,   140,   142,   302,    44,   211,   212,   213,   214,
   215,   173,   198,   199,    45,   146,   147,   167,   148,   168,
   158,   179,   171,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   197,   172,   174,   207,   200,   201,   202,   203,   204,   205,
   217,   218,    41,   161,    42,    43,   220,   221,   222,   223,
   224,   225,   226,    44,   227,   206,   228,   208,   229,   209,
   -12,     3,    45,     4,    -3,    -3,    -3,    -3,     5,     6,
     7,     8,     9,    -3,   230,   231,    10,    11,    -3,    -3,
    -3,   232,   233,   234,    -3,   235,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,   236,   242,
   237,   238,   239,    12,   240,   241,    13,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,   243,    41,   245,   259,    43,   244,
    41,    14,    42,    43,   146,   147,    44,   148,   246,   247,
    41,    44,   271,    43,   260,    45,   267,   262,   263,   301,
    45,    44,   269,   280,   273,   274,   282,   283,   277,   278,
    45,   289,   279,   149,   150,   281,   284,   285,   250,   286,
   253,   254,   255,   256,   257,   258,   287,   138,   264,   265,
   151,   152,   291,   290,   -73,   275,   276,   292,   295,   138,
   294,   305,   311,    41,   318,    42,    43,   313,   319,   156,
     0,   314,   299,   315,    44,   303,   288,     0,   316,     0,
   310,   309,     0,    45,     0,     0,     0,     0,   293,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   296,
   298,     0,   300,     0,     0,     0,   306,   307,   308,     0,
     0,   312,    55,    56,    57,    58,     0,     0,     0,     0,
     0,    59,     0,     0,     0,     0,    60,    61,    62,     0,
     0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
    90,    91
};

static const short yycheck[] = {    11,
   222,    24,    27,    21,    24,    53,    21,   229,    56,    56,
    53,   233,    55,    56,   236,    14,    15,    53,    53,    55,
    56,     8,     9,    71,    53,    48,    55,    56,    64,    53,
    42,    55,    56,    49,    49,    64,    54,    73,    53,    54,
    53,    56,    53,    72,    73,    57,    53,    64,    65,    64,
    62,    63,    64,    48,    53,    70,    55,    56,   145,    74,
    69,   283,    44,    45,   286,    64,   153,   154,   155,   156,
   157,    56,    84,    85,    73,    22,    23,    70,    25,    70,
    21,    64,    53,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    53,    56,    67,    87,    88,    89,    90,    91,   134,
    49,    49,    53,    54,    55,    56,    49,    49,    49,    49,
    49,    49,    49,    64,    49,   137,    49,   139,    49,   141,
     0,     1,    73,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    49,    49,    16,    17,    18,    19,
    20,    49,    49,    49,    24,    49,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    49,    67,
    49,    49,    49,    53,    49,    49,    56,    57,    58,    59,
    60,    61,    62,    63,    67,    53,    56,    55,    56,    49,
    53,    71,    55,    56,    22,    23,    64,    25,    56,    49,
    53,    64,    55,    56,    72,    73,    50,   229,   230,    72,
    73,    64,    21,    49,   236,   237,    55,    49,   240,   241,
    73,    55,   244,    51,    52,   247,    49,    49,   221,    49,
   223,   224,   225,   226,   227,   228,    49,   259,   231,   232,
    68,    69,    49,    55,    55,   238,   239,    49,    56,   271,
    55,    67,    67,    53,     0,    55,    56,    67,     0,    48,
    -1,    67,   284,    67,    64,   287,   259,    -1,    67,    -1,
   292,    71,    -1,    73,    -1,    -1,    -1,    -1,   271,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
   283,    -1,   285,    -1,    -1,    -1,   289,   290,   291,    -1,
    -1,   294,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
    -1,    13,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
    62,    63
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 178 "asm_mips.yac"
{ yyval.uval = ASM_OPR__PLUS ; ;
    break;}
case 2:
#line 180 "asm_mips.yac"
{ yyval.uval = ASM_OPR__MINUS; ;
    break;}
case 4:
#line 187 "asm_mips.yac"
{ prog.add_line(new Label(yyvsp[-1].text)) ; ;
    break;}
case 5:
#line 193 "asm_mips.yac"
{	std::ostringstream lit ;
		    lit << yyvsp[0].uval;
			prog.add_line(new Directive(".align",lit.str())) ;
		;
    break;}
case 13:
#line 226 "asm_mips.yac"
{	std::ostringstream bylist ;
		    bylist << yyvsp[-1].uval << strmap[yyvsp[0].uval] ;
			strmap[strmap_id] = bylist.str() ;
			yyval.uval = yyvsp[0].uval ;
		;
    break;}
case 14:
#line 235 "asm_mips.yac"
{	strmap_id++ ;
			strmap[strmap_id] = "" ;
			yyval.uval = strmap_id ;
		;
    break;}
case 15:
#line 242 "asm_mips.yac"
{	std::ostringstream bylist ;
		    bylist << strmap[yyvsp[-2].uval] << "," << yyvsp[0].uval;
			strmap[strmap_id] = bylist.str() ;
			yyval.uval = yyvsp[-2].uval ;
		;
    break;}
case 17:
#line 255 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval; ;
    break;}
case 18:
#line 260 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval & 0x00003fff; ;
    break;}
case 21:
#line 271 "asm_mips.yac"
{	prog.add_line(new Directive(".end",yyvsp[0].text,false)) ; ;
    break;}
case 22:
#line 277 "asm_mips.yac"
{ prog.add_line(new Directive(".ent",yyvsp[0].text,true)) ; ;
    break;}
case 23:
#line 282 "asm_mips.yac"
{ yyval.text = NULL; ;
    break;}
case 24:
#line 284 "asm_mips.yac"
{ yyval.text = yyvsp[0].text  ; ;
    break;}
case 25:
#line 292 "asm_mips.yac"
{	std::ostringstream lit ;
		    lit << yyvsp[-2].text << ",	" << yyvsp[0].uval ;
			prog.add_line(new Directive(".equ",lit.str())) ;
		;
    break;}
case 26:
#line 300 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval; ;
    break;}
case 27:
#line 304 "asm_mips.yac"
{
		if   (yyvsp[-1].uval == ASM_OPR__PLUS)
			{yyval.uval = yyvsp[-2].uval + yyvsp[0].uval;}
		else
			{yyval.uval = yyvsp[-2].uval - yyvsp[0].uval;}
		;
    break;}
case 28:
#line 316 "asm_mips.yac"
{ yyval.uval =   yyvsp[-1].uval; ;
    break;}
case 29:
#line 321 "asm_mips.yac"
{ yyval.uval = ~ yyvsp[-1].uval; ;
    break;}
case 30:
#line 326 "asm_mips.yac"
{ yyval.uval = - yyvsp[-1].uval; ;
    break;}
case 31:
#line 328 "asm_mips.yac"
{ yyval.uval =   yyvsp[0].uval; ;
    break;}
case 32:
#line 335 "asm_mips.yac"
{
		if   (yyvsp[-1].uval == ASM_OPR__OR  ) yyval.uval = yyvsp[-2].uval | yyvsp[0].uval;
		if   (yyvsp[-1].uval == ASM_OPR__AND ) yyval.uval = yyvsp[-2].uval & yyvsp[0].uval;
		if   (yyvsp[-1].uval == ASM_OPR__XOR ) yyval.uval = yyvsp[-2].uval ^ yyvsp[0].uval;
		;
    break;}
case 33:
#line 343 "asm_mips.yac"
{
		if   (yyvsp[-1].uval == ASM_OPR__OR  ) yyval.uval = yyvsp[-2].uval | yyvsp[0].uval;
		if   (yyvsp[-1].uval == ASM_OPR__AND ) yyval.uval = yyvsp[-2].uval & yyvsp[0].uval;
		if   (yyvsp[-1].uval == ASM_OPR__XOR ) yyval.uval = yyvsp[-2].uval ^ yyvsp[0].uval;
		;
    break;}
case 34:
#line 354 "asm_mips.yac"
{
		if   (yyvsp[-1].uval == ASM_OPR__MUL ) yyval.uval = yyvsp[-2].uval * yyvsp[0].uval;
		else                       yyval.uval = yyvsp[-2].uval / yyvsp[0].uval;
		;
    break;}
case 35:
#line 361 "asm_mips.yac"
{ yyval.uval = yyvsp[-2].uval * yyvsp[0].uval; ;
    break;}
case 36:
#line 368 "asm_mips.yac"
{
		if   (yyvsp[-1].uval == ASM_OPR__SHL ) yyval.uval = yyvsp[-2].uval << yyvsp[0].uval;
		else                       yyval.uval = yyvsp[-2].uval >> yyvsp[0].uval;
		;
    break;}
case 37:
#line 377 "asm_mips.yac"
{	std::ostringstream lab ;
		    lab << yyvsp[0].text;
			prog.add_line(new Directive(".extern",lab.str())) ;
		;
    break;}
case 38:
#line 391 "asm_mips.yac"
{	t_Operator op ;
			string m = strmap[yyvsp[-5].uval] ;
			
			switch(yyvsp[-6].uval) {
				case ASM_MPS__PREF : op = t_Operator::pref ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-6].uval << "is not an valid Codop_hint_mem for format_hint_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate(yyvsp[-5].uval),new OPImmediate(yyvsp[-3].uval),new OPRegister(yyvsp[-1].uval,Src))) ;	
		;
    break;}
case 39:
#line 405 "asm_mips.yac"
{	t_Operator op ;
			string m = strmap[yyvsp[0].uval] ;
			
			switch(yyvsp[-1].uval) {
				case ASM_MPS__J : op = t_Operator::j ; break ;
				case ASM_MPS__JAL : op = t_Operator::jal ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPLabel(m))) ;	
		;
    break;}
case 40:
#line 418 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-1].uval) {
				case ASM_MPS__J : op = t_Operator::jr ; break ;
				case ASM_MPS__JAL : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_label for format_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 41:
#line 431 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[0].uval) {
				case ASM_MPS__SYSCALL : op = t_Operator::syscallu ; break ;
				case ASM_MPS__WAIT : op = t_Operator::waitn ; break ;
				case ASM_MPS__RFE : op = t_Operator::rfe ; break ;
				case ASM_MPS__ERET : op = t_Operator::eret ; break ;
				case ASM_MPS__SYNC : op = t_Operator::sync_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[0].uval << "is not an valid Codop_n for format_n" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op)) ;
		;
    break;}
case 42:
#line 448 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-1].uval) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 43:
#line 460 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__JALR : op = t_Operator::jalr ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_od_rs for format_od_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 44:
#line 473 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-1].uval) {
				case ASM_MPS__MFHI : op = t_Operator::mfhi ; break ;
				case ASM_MPS__MFLO : op = t_Operator::mflo ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_rd for format_rd" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[0].uval,Dst))) ;
		;
    break;}
case 45:
#line 492 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-6].uval) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-6].uval << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-5].uval,Dst),new OPImmediate(yyvsp[-3].uval),new OPRegister(yyvsp[-1].uval,Src))) ;
		;
    break;}
case 46:
#line 514 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-6].uval) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-6].uval << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-5].uval,Dst),new OPExpression(yyvsp[-3].text),new OPRegister(yyvsp[-1].uval,Src))) ;
		;
    break;}
case 47:
#line 535 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-1].uval,Src))) ;
		;
    break;}
case 48:
#line 554 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__LB : op = t_Operator::lb ; break ;
				case ASM_MPS__LBU : op = t_Operator::lbu ; break ;
				case ASM_MPS__LH : op = t_Operator::lh ; break ;
				case ASM_MPS__LHU : op = t_Operator::lhu ; break ;
				case ASM_MPS__LW : op = t_Operator::lw ; break ;
				case ASM_MPS__LWL : op = t_Operator::lwl ; break ;
				case ASM_MPS__LWR : op = t_Operator::lwr ; break ;
				case ASM_MPS__LL : op = t_Operator::ll ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rd_mem for format_rd_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Dst),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 49:
#line 576 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Dst),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 50:
#line 588 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__LUI : op = t_Operator::lui ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rd_si16 for format_rd_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Dst),new OPExpression(yyvsp[0].text))) ;
		;
    break;}
case 51:
#line 603 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__CLO : op = t_Operator::clo ; break ;
				case ASM_MPS__CLZ : op = t_Operator::clz ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rd_rs for format_rd_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 52:
#line 621 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__ADD :	op = t_Operator::add; break ;
				case ASM_MPS__ADDU :op = t_Operator::addu ; break ;
				case ASM_MPS__AND :	op = t_Operator::and_ ; break ;
				case ASM_MPS__MUL :	op = t_Operator::mul ; break ;
				case ASM_MPS__NOR :	op = t_Operator::nor ; break ;
				case ASM_MPS__OR :	op = t_Operator::or_ ; break ;
				case ASM_MPS__SLT :	op = t_Operator::slt ; break ;
				case ASM_MPS__SLTU :op = t_Operator::sltu ; break ;
				case ASM_MPS__SUB :	op = t_Operator::sub ; break ;
				case ASM_MPS__SUBU :op = t_Operator::subu ; break ;
				case ASM_MPS__XOR :	op = t_Operator::xor_ ; break ;
				case ASM_MPS__MOVN :op = t_Operator::movn ; break ;
				case ASM_MPS__MOVZ :op = t_Operator::movz ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rs_rt for format_rd_rs_rt" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 53:
#line 650 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 54:
#line 667 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__ADDI : op = t_Operator::addi ; break ;
				case ASM_MPS__ADDIU : op = t_Operator::addiu ; break ;
				case ASM_MPS__SLTI : op = t_Operator::slti ; break ;
				case ASM_MPS__SLTIU : op = t_Operator::sltiu ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPExpression(yyvsp[0].text))) ;
		;
    break;}
case 55:
#line 684 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__SLT : op = t_Operator::slti ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rs_si16 for format_rd_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 56:
#line 701 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__ANDI : op = t_Operator::andi ; break ;
				case ASM_MPS__ORI : op = t_Operator::ori ; break ;
				case ASM_MPS__XORI : op = t_Operator::xori ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rs_ui16 for format_rd_rs_ui16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 57:
#line 720 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__SLLV : op = t_Operator::sllv ; break ;
				case ASM_MPS__SRLV : op = t_Operator::srlv ; break ;
				case ASM_MPS__SRAV : op = t_Operator::srav ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rt_rs for format_rd_rt_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 58:
#line 739 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__SLL : op = t_Operator::sll ; break ;
				case ASM_MPS__SRL : op = t_Operator::srl ; break ;
				case ASM_MPS__SRA : op = t_Operator::sra ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rd_rt_sham for format_rd_rt_sham" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 59:
#line 754 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-1].uval) {
				case ASM_MPS__JR : op = t_Operator::jr ; break ;
				case ASM_MPS__MTHI : op = t_Operator::mthi ; break ;
				case ASM_MPS__MTLO : op = t_Operator::mtlo ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_rs for format_rs" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 60:
#line 771 "asm_mips.yac"
{
			t_Operator op ;
			string m = strmap[yyvsp[0].uval] ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__BGEZ : op = t_Operator::bgez ; break ;
				case ASM_MPS__BGEZAL : op = t_Operator::bgezal ; break ;
				case ASM_MPS__BGTZ : op = t_Operator::bgtz ; break ;
				case ASM_MPS__BLEZ : op = t_Operator::blez ; break ;
				case ASM_MPS__BLTZ : op = t_Operator::bltz ; break ;
				case ASM_MPS__BLTZAL : op = t_Operator::bltzal ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Src),new OPLabel(m))) ;
		;
    break;}
case 61:
#line 793 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Src),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 62:
#line 820 "asm_mips.yac"
{
			t_Operator op ;
			if (yyvsp[-4].uval != 0 ) {
				std::cerr << "Invalid $zero register for Codop_rs_label" << std::endl ;
			}
			switch(yyvsp[-5].uval) {
				case ASM_MPS__MULT: op = t_Operator::mult; break ;
				case ASM_MPS__MULTU: op = t_Operator::multu; break ;
				case ASM_MPS__DIV: op = t_Operator::div_ ; break ;
				case ASM_MPS__DIVU: op = t_Operator::divu ; break ;
				case ASM_MPS__MADD: op = t_Operator::madd; break ;
				case ASM_MPS__MADDU: op = t_Operator::maddu; break ;
				case ASM_MPS__MSUB: op = t_Operator::msub; break ;
				case ASM_MPS__MSUBU: op = t_Operator::msubu; break ;
				case ASM_MPS__TEQ: op = t_Operator::teq; break ;
				case ASM_MPS__TGE: op = t_Operator::tge; break ;
				case ASM_MPS__TGEU: op = t_Operator::tgeu; break ;
				case ASM_MPS__TLT: op = t_Operator::tlt; break ;
				case ASM_MPS__TLTU: op = t_Operator::tltu; break ;
				case ASM_MPS__TNE: op = t_Operator::tne ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rs_label for format_rs_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Dst),new OPRegister(yyvsp[-2].uval,Src),new OPRegister(yyvsp[0].uval,Src))) ;
		;
    break;}
case 63:
#line 853 "asm_mips.yac"
{
			t_Operator op ;
			string m = strmap[yyvsp[0].uval] ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Src),new OPRegister(yyvsp[-2].uval,Src),new OPLabel(m))) ;
		;
    break;}
case 64:
#line 869 "asm_mips.yac"
{
			t_Operator op ;
			std::ostringstream lit ;
		    lit  << yyvsp[0].text ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__BEQ : op = t_Operator::beq ; break ;
				case ASM_MPS__BNE : op = t_Operator::bne ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rs_rt_label for format_rs_rt_label" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Src),new OPRegister(yyvsp[-2].uval,Src),new OPLabel(lit.str()))) ;
		;
    break;}
case 65:
#line 887 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__TEQI: op = t_Operator::teqi; break ;
				case ASM_MPS__TGEI: op = t_Operator::tgei; break ;
				case ASM_MPS__TGEIU: op = t_Operator::tgeiu; break ;
				case ASM_MPS__TLTI: op = t_Operator::tlti; break ;
				case ASM_MPS__TLTIU: op = t_Operator::tltiu; break ;
				case ASM_MPS__TNEI: op = t_Operator::tnei; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rs_si16 for format_rs_si16" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 66:
#line 907 "asm_mips.yac"
{
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__MFC0: op = t_Operator::mfc0; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC0: op = t_Operator::mtc0; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rt_cop0r for format_rt_cop0r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,spin),new OPRegister(yyvsp[0].uval,spinc0))) ;
		;
    break;}
case 67:
#line 924 "asm_mips.yac"
{
			t_Operator op ;
			t_Src_Dst spin, spinc0 ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__MFC2: op = t_Operator::mfc2; spin = Dst ; spinc0 = CopSrc ; break ;
				case ASM_MPS__MTC2: op = t_Operator::mtc2; spin = Src ; spinc0 = CopDst ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rt_cop2r for format_rt_cop2r" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,spin),new OPRegister(yyvsp[0].uval,spinc0))) ;
		;
    break;}
case 68:
#line 944 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-6].uval) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-6].uval << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-5].uval,Src),new OPImmediate(yyvsp[-3].uval),new OPRegister(yyvsp[-1].uval,Src))) ;
		;
    break;}
case 69:
#line 961 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-5].uval) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-5].uval << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-4].uval,Src),new OPRegister(yyvsp[-1].uval,Src))) ;
		;
    break;}
case 70:
#line 976 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-3].uval) {
				case ASM_MPS__SB: op = t_Operator::sb ; break ;
				case ASM_MPS__SH: op = t_Operator::sh ; break ;
				case ASM_MPS__SW: op = t_Operator::sw ; break ;
				case ASM_MPS__SC: op = t_Operator::sc ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Codop_rt_mem for format_rt_mem" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPRegister(yyvsp[-2].uval,Src),new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 71:
#line 992 "asm_mips.yac"
{
			t_Operator op ;
			switch(yyvsp[-1].uval) {
				case ASM_MPS__BREAK: op = t_Operator::break_ ; break ;
				default: std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Codop_ui20 for format_ui20" << std::endl ; break ;
			}
			prog.add_line(new Instruction(op,new OPImmediate(yyvsp[0].uval))) ;
		;
    break;}
case 72:
#line 1005 "asm_mips.yac"
{	std::ostringstream lab ;
		    lab << yyvsp[0].text;
			prog.add_line(new Directive(".global",lab.str())) ;
		;
    break;}
case 73:
#line 1013 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval & 0x0000ffff; ;
    break;}
case 74:
#line 1018 "asm_mips.yac"
{  yyval.uval = yyvsp[0].uval; ;
    break;}
case 75:
#line 1020 "asm_mips.yac"
{  yyval.uval = yyvsp[0].uval; ;
    break;}
case 76:
#line 1022 "asm_mips.yac"
{  yyval.uval = yyvsp[0].uval; ;
    break;}
case 77:
#line 1024 "asm_mips.yac"
{  yyval.uval = yyvsp[0].uval; ;
    break;}
case 78:
#line 1029 "asm_mips.yac"
{  yyval.uval = yyvsp[0].uval; ;
    break;}
case 79:
#line 1031 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval & 0x0000001f; ;
    break;}
case 80:
#line 1036 "asm_mips.yac"
{ yyval.text = yyvsp[0].text; ;
    break;}
case 81:
#line 1038 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[0].uval;
			yyval.text = const_cast<char*>(str.str().c_str()) ;
		;
    break;}
case 82:
#line 1043 "asm_mips.yac"
{ 
		std::cout << "Label String2 " << yyvsp[0].text << std::endl ;
		yyval.text = yyvsp[0].text; ;
    break;}
case 84:
#line 1054 "asm_mips.yac"
{ yyval.uval = ASM_OPR__OR   ; ;
    break;}
case 85:
#line 1056 "asm_mips.yac"
{ yyval.uval = ASM_OPR__AND  ; ;
    break;}
case 86:
#line 1058 "asm_mips.yac"
{ yyval.uval = ASM_OPR__XOR  ; ;
    break;}
case 94:
#line 1074 "asm_mips.yac"
{
			string m = strmap[yyvsp[0].uval] ;
	  		if (yyvsp[-1].uval != ASM_MPS__B) {
				std::cerr<< "asm_mips.yac : " << yyvsp[-1].uval << "is not an valid Macro_label" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::bgez,new OPRegister(0,Src),new OPLabel(m))) ;
		;
    break;}
case 95:
#line 1085 "asm_mips.yac"
{
	  		if (yyvsp[0].uval != ASM_MPS__NOP) {
				std::cerr<< "asm_mips.yac : " << yyvsp[0].uval << "is not an valid Macro_n" << std::endl ;
			}
			prog.add_line(new Instruction(t_Operator::add,new OPRegister(0,Dst),new OPRegister(0,Src),new OPRegister(0,Src))) ;
		;
    break;}
case 96:
#line 1098 "asm_mips.yac"
{
	  		if (yyvsp[-3].uval != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Macro_rd_i32" << std::endl ;
			}
			int hi, lo ;
			hi = (yyvsp[0].uval >> 16) &  0x0000FFFF ;
			lo = (yyvsp[0].uval      ) &  0x0000FFFF ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPImmediate(hi))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(1,Src),new OPImmediate(lo))) ;
			prog.add_line(new Directive(".set","at")) ; 
		;
    break;}
case 97:
#line 1118 "asm_mips.yac"
{
			string m = strmap[yyvsp[0].uval] ;
		    std::ostringstream oss_hi ;
		    std::ostringstream oss_lo ;
	  		if (yyvsp[-3].uval != ASM_MPS__LI) {
				std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Macro_rd_i32" << std::endl ;
			}

		    oss_hi << "%hi(" << m << ")" ;
		    oss_lo << "%lo(" << m << ")" ;
						
			prog.add_line(new Directive(".set","noat")) ; 
			prog.add_line(new Instruction(t_Operator::lui,new OPRegister(1,Dst),new OPExpression(oss_hi.str()))) ;
			prog.add_line(new Instruction(t_Operator::ori,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(1,Src),new OPExpression(oss_lo.str()))) ;
			prog.add_line(new Directive(".set","at")) ; 
		;
    break;}
case 98:
#line 1141 "asm_mips.yac"
{
	  		if (yyvsp[-3].uval != ASM_MPS__MOVE) {
				std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Macro_rd_rs" << std::endl ;
			}
						
			prog.add_line(new Instruction(t_Operator::or_,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(yyvsp[0].uval,Src),new OPRegister(0,Src))) ;
		;
    break;}
case 99:
#line 1155 "asm_mips.yac"
{
	  		if (yyvsp[-3].uval == ASM_MPS__NEG) {
				prog.add_line(new Instruction(t_Operator::sub,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(0,Src),new OPRegister(yyvsp[0].uval,Src))) ;
			} else if (yyvsp[-3].uval == ASM_MPS__NEGU) {
				prog.add_line(new Instruction(t_Operator::subu,new OPRegister(yyvsp[-2].uval,Dst),new OPRegister(0,Src),new OPRegister(yyvsp[0].uval,Src))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Macro_rd_rt" << std::endl ; break ;
			}
		;
    break;}
case 100:
#line 1171 "asm_mips.yac"
{
			string m = strmap[yyvsp[0].uval] ;
	  		if (yyvsp[-3].uval == ASM_MPS__BEQZ) {
				prog.add_line(new Instruction(t_Operator::beq,new OPRegister(0,Src),new OPRegister(yyvsp[-2].uval,Src),new OPLabel(m))) ;
			} else if (yyvsp[-3].uval == ASM_MPS__BNEZ) {
				prog.add_line(new Instruction(t_Operator::bne,new OPRegister(0,Src),new OPRegister(yyvsp[-2].uval,Src),new OPLabel(m))) ;
			} else {
				std::cerr<< "asm_mips.yac : " << yyvsp[-3].uval << "is not an valid Macro_rs_label" << std::endl ; break ;
			}
		;
    break;}
case 109:
#line 1197 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[0].text ;
			prog.add_line(new Directive(".ascii",str.str())) ;
		;
    break;}
case 110:
#line 1206 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[0].text ;
			prog.add_line(new Directive(".asciiz",str.str())) ;
		;
    break;}
case 111:
#line 1215 "asm_mips.yac"
{prog.add_line(new Directive(".byte",strmap[yyvsp[0].uval])) ;;
    break;}
case 112:
#line 1223 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[-2].text << "," << yyvsp[0].uval ;
			prog.add_line(new Directive(".lcomm",str.str())) ;
		;
    break;}
case 113:
#line 1236 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[-4].text << "," << yyvsp[-2].uval << "," << yyvsp[0].uval;
			prog.add_line(new Directive(".comm",str.str())) ;
		;
    break;}
case 114:
#line 1245 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[0].uval ;
			prog.add_line(new Directive(".space",str.str())) ;
		;
    break;}
case 115:
#line 1254 "asm_mips.yac"
{	std::ostringstream str ;
		    str << yyvsp[0].uval ;
			prog.add_line(new Directive(".skip",str.str())) ;
		;
    break;}
case 116:
#line 1263 "asm_mips.yac"
{prog.add_line(new Directive(".word",strmap[yyvsp[0].uval])) ;;
    break;}
case 139:
#line 1293 "asm_mips.yac"
{ yyval.uval = ASM_OPR__MUL  ; ;
    break;}
case 140:
#line 1295 "asm_mips.yac"
{ yyval.uval = ASM_OPR__DIV  ; ;
    break;}
case 141:
#line 1300 "asm_mips.yac"
{ yyval.uval = yyvsp[0].uval; ;
    break;}
case 142:
#line 1302 "asm_mips.yac"
{	
			strmap_id++ ;
			strmap[strmap_id] = yyvsp[0].text ;
			yyval.uval = strmap_id ;
		;
    break;}
case 143:
#line 1312 "asm_mips.yac"
{ 	
			prog.add_line(new Directive(".section",yyvsp[0].text)) ;
		;
    break;}
case 144:
#line 1316 "asm_mips.yac"
{
			prog.add_line(new Directive(yyvsp[0].text)) ;
		;
    break;}
case 145:
#line 1324 "asm_mips.yac"
{	prog.add_line(new Directive(".set","reorder")) ; ;
    break;}
case 146:
#line 1327 "asm_mips.yac"
{	prog.add_line(new Directive(".set","noreorder")) ; ;
    break;}
case 147:
#line 1330 "asm_mips.yac"
{	string m = strmap[yyvsp[0].uval] ;
			prog.add_line(new Directive(".set",m)) ; ;
    break;}
case 148:
#line 1338 "asm_mips.yac"
{	std::ostringstream dir ;
		    dir << yyvsp[-1].text ;
			prog.add_line(new Directive(dir.str(),strmap[strmap_id])) ;
		;
    break;}
case 149:
#line 1346 "asm_mips.yac"
{	strmap_id++ ;
			strmap[strmap_id] = "" ;
			yyval.uval = strmap_id ;
		;
    break;}
case 150:
#line 1352 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << " " << yyvsp[0].text;
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 151:
#line 1359 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << "," ;
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 152:
#line 1366 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << "@";
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 153:
#line 1373 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << "$" << yyvsp[0].uval ;
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 154:
#line 1380 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << yyvsp[0].text;
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 155:
#line 1387 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << yyvsp[0].uval;
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 156:
#line 1394 "asm_mips.yac"
{	std::ostringstream str ;
		    str << strmap[yyvsp[-1].uval] << "-";
			strmap[strmap_id] = str.str() ;
			yyval.uval = yyvsp[-1].uval ;
		;
    break;}
case 157:
#line 1402 "asm_mips.yac"
{ yyval.uval = ASM_OPR__SHL  ; ;
    break;}
case 158:
#line 1404 "asm_mips.yac"
{ yyval.uval = ASM_OPR__SHR  ; ;
    break;}
case 159:
#line 1409 "asm_mips.yac"
{ yyval.uval =   yyvsp[0].uval; ;
    break;}
case 160:
#line 1412 "asm_mips.yac"
{ yyval.uval = - yyvsp[0].uval; ;
    break;}
case 161:
#line 1415 "asm_mips.yac"
{ yyval.uval = ~ yyvsp[0].uval; ;
    break;}
case 174:
#line 1439 "asm_mips.yac"
{	yyval.uval = yyvsp[0].uval & 0x0000ffff; ;
    break;}
case 175:
#line 1445 "asm_mips.yac"
{	std::ostringstream bylist ;
		    bylist << yyvsp[-1].uval << strmap[yyvsp[0].uval] ;
			strmap[strmap_id] = bylist.str() ;
			yyval.uval = yyvsp[0].uval ;
		;
    break;}
case 176:
#line 1454 "asm_mips.yac"
{	strmap_id++ ;
			strmap[strmap_id] = "" ;
			yyval.uval = strmap_id ;
		;
    break;}
case 177:
#line 1461 "asm_mips.yac"
{	std::ostringstream bylist ;
		    bylist << strmap[yyvsp[-2].uval] << "," << yyvsp[0].uval;
			strmap[strmap_id] = bylist.str() ;
			yyval.uval = yyvsp[-2].uval ;
		;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 1468 "asm_mips.yac"

