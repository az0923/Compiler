/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */
     /* pars1.y    Pascal Parser      Gordon S. Novak Jr.  ; 30 Jul 13   */

/* Copyright (c) 2013 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/* 14 Feb 01; 01 Oct 04; 02 Mar 07; 27 Feb 08; 24 Jul 09; 02 Aug 12 */

/*
; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, see <http://www.gnu.org/licenses/>.
  */


/* NOTE:   Copy your lexan.l lexical analyzer to this directory.      */

       /* To use:
                     make pars1y              has 1 shift/reduce conflict
                     pars1y                   execute the parser
                     i:=j .
                     ^D                       control-D to end input

                     pars1y                   execute the parser
                     begin i:=j; if i+j then x:=a+b*c else x:=a*b+c; k:=i end.
                     ^D

                     pars1y                   execute the parser
                     if x+y then if y+z then i:=j else k:=2.
                     ^D

           You may copy pars1.y to be parse.y and extend it for your
           assignment.  Then use   make parser   as above.
        */

        /* Yacc reports 1 shift/reduce conflict, due to the ELSE part of
           the IF statement, but Yacc's default resolves it in the right way.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>

#include "token.h"
#include "symtab.h"
#include "parse.h"

/* define the type of the Yacc stack element to be TOKEN */

#define YYSTYPE TOKEN

TOKEN parseresult;


#line 130 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING = 259,
    NUMBER = 260,
    PLUS = 261,
    MINUS = 262,
    TIMES = 263,
    DIVIDE = 264,
    ASSIGN = 265,
    EQ = 266,
    NE = 267,
    LT = 268,
    LE = 269,
    GE = 270,
    GT = 271,
    POINT = 272,
    DOT = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    DIV = 277,
    MOD = 278,
    IN = 279,
    COMMA = 280,
    SEMICOLON = 281,
    COLON = 282,
    LPAREN = 283,
    RPAREN = 284,
    LBRACKET = 285,
    RBRACKET = 286,
    DOTDOT = 287,
    ARRAY = 288,
    BEGINBEGIN = 289,
    CASE = 290,
    CONST = 291,
    DO = 292,
    DOWNTO = 293,
    ELSE = 294,
    END = 295,
    FILEFILE = 296,
    FOR = 297,
    FUNCTION = 298,
    GOTO = 299,
    IF = 300,
    LABEL = 301,
    NIL = 302,
    OF = 303,
    PACKED = 304,
    PROCEDURE = 305,
    PROGRAM = 306,
    RECORD = 307,
    REPEAT = 308,
    SET = 309,
    THEN = 310,
    TO = 311,
    TYPE = 312,
    UNTIL = 313,
    VAR = 314,
    WHILE = 315,
    WITH = 316
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING 259
#define NUMBER 260
#define PLUS 261
#define MINUS 262
#define TIMES 263
#define DIVIDE 264
#define ASSIGN 265
#define EQ 266
#define NE 267
#define LT 268
#define LE 269
#define GE 270
#define GT 271
#define POINT 272
#define DOT 273
#define AND 274
#define OR 275
#define NOT 276
#define DIV 277
#define MOD 278
#define IN 279
#define COMMA 280
#define SEMICOLON 281
#define COLON 282
#define LPAREN 283
#define RPAREN 284
#define LBRACKET 285
#define RBRACKET 286
#define DOTDOT 287
#define ARRAY 288
#define BEGINBEGIN 289
#define CASE 290
#define CONST 291
#define DO 292
#define DOWNTO 293
#define ELSE 294
#define END 295
#define FILEFILE 296
#define FOR 297
#define FUNCTION 298
#define GOTO 299
#define IF 300
#define LABEL 301
#define NIL 302
#define OF 303
#define PACKED 304
#define PROCEDURE 305
#define PROGRAM 306
#define RECORD 307
#define REPEAT 308
#define SET 309
#define THEN 310
#define TO 311
#define TYPE 312
#define UNTIL 313
#define VAR 314
#define WHILE 315
#define WITH 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 300 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    85,    86,    88,    89,    91,    92,    94,
      95,    97,    98,   100,   101,   103,   104,   106,   107,   109,
     111,   112,   114,   117,   118,   120,   121,   122,   123,   125,
     126,   127,   129,   130,   132,   133,   134,   135,   136,   137,
     138,   140,   142,   143,   146,   147,   148,   149,   151,   152,
     154,   155,   157,   159,   160,   161,   162,   164,   165,   167,
     168,   170,   171,   172,   173,   174,   175,   176,   177,   179,
     180,   182,   183,   184,   185,   186,   187,   188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "NUMBER", "PLUS",
  "MINUS", "TIMES", "DIVIDE", "ASSIGN", "EQ", "NE", "LT", "LE", "GE", "GT",
  "POINT", "DOT", "AND", "OR", "NOT", "DIV", "MOD", "IN", "COMMA",
  "SEMICOLON", "COLON", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "DOTDOT", "ARRAY", "BEGINBEGIN", "CASE", "CONST", "DO", "DOWNTO", "ELSE",
  "END", "FILEFILE", "FOR", "FUNCTION", "GOTO", "IF", "LABEL", "NIL", "OF",
  "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "THEN",
  "TO", "TYPE", "UNTIL", "VAR", "WHILE", "WITH", "$accept", "program",
  "getID", "labelBLK", "constBLK", "typeBLK", "varBLK", "lnum", "constid",
  "htype", "idtype", "varsemi", "varcol", "stmtlist", "type", "simpletype",
  "simplelist", "loop", "call", "argslist", "statement", "endpart",
  "endif", "assignment", "var", "amerge", "fieldlist", "expr", "term",
  "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -77

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -41,    16,    21,    -6,   -77,    20,    -5,     8,   128,    17,
     -77,    24,    45,   295,    10,    25,   262,    56,   295,    59,
      32,    68,   -77,    72,   262,    75,    72,    32,    70,   -77,
     -77,   -77,    63,   -77,   -77,    77,   -77,   -77,    12,    90,
      32,   262,    99,   -77,    88,    85,   -77,   -77,    69,   130,
     295,    89,    97,   113,   119,     4,   -20,   123,   196,    74,
     -77,   100,    84,   118,   122,   125,   117,   114,    95,   131,
     147,   229,   133,   136,   262,   134,   132,   -77,    32,   -77,
     165,    32,   -77,    32,   142,   151,   -77,   -77,    32,   172,
      72,   -77,   -77,   -77,   295,   295,   295,   295,   -77,    85,
      72,   153,   155,   262,   -77,   -77,   177,   -77,    32,   262,
      68,   162,    41,   -77,    32,   262,    41,   -77,    75,    41,
     -77,    72,   262,   160,   -77,   161,   -77,   -77,    32,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     4,   143,   -20,   158,
     156,   163,   -77,   -77,   168,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   167,   -77,   -77,    41,   -77,    56,   262,
     262,   -77,    72,   -77,   -77,   -77,   -77,   -77,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,    53,
      76,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     6,
       8,    10,     0,    25,    47,    40,    12,    46,    72,     0,
       0,     0,     0,    26,    53,    75,    73,    74,    53,    67,
       0,     0,     0,    68,    70,     0,     0,     0,     0,     0,
      39,    53,     0,    14,     0,     4,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     2,     0,    56,
       0,     0,    55,     0,     0,    43,    45,    31,     0,     0,
       0,    64,    30,    71,     0,     0,     0,     0,    29,     0,
       0,    33,     0,     0,    49,    44,     0,     7,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     9,    18,     0,
      11,    21,     0,     0,    54,     0,    52,    36,     0,    62,
      61,     3,    63,    65,    66,    69,     0,     0,     0,     0,
       0,    51,    13,     5,    59,    38,    23,    19,    17,    22,
      20,    37,    41,    57,    42,    32,     0,    48,    16,     0,
       0,    35,     0,    58,    27,    15,    34,    50,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -22,   -77,    92,   150,   139,   101,    47,    94,
     -77,   102,   -77,   103,   -27,   -53,    80,   -77,    -8,   -76,
     -13,    82,   -77,   207,   -77,    73,    65,    -2,   -24,    27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    51,    28,    29,    30,    31,    64,    58,    71,
      72,    74,    75,    68,    32,    33,   102,    34,    46,    84,
      36,   105,   161,    37,    38,    82,    67,    85,    53,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    66,   101,    56,    73,   125,   103,    98,    35,    99,
       1,    69,    52,    48,    49,    45,    35,    50,    62,     3,
     104,     4,     5,     6,     7,    76,    91,    12,    86,    79,
      80,    13,   100,    35,     8,    61,    49,    45,    14,    50,
      47,    54,    81,    15,    98,    40,    99,    54,    43,    12,
      35,    41,   154,    13,    54,    55,    42,    22,    12,    57,
      14,   120,    23,    35,    60,    15,    35,    54,   131,   100,
     132,   133,   134,    63,    15,    65,   123,    54,    70,    22,
      88,   126,    89,   101,    23,   144,   129,   -73,    77,   147,
     138,    78,   149,    23,    90,    35,   141,   -29,    -4,    73,
      83,    35,    69,    35,    87,    54,   140,    35,    54,   151,
      54,    88,   145,    89,    35,    54,   -29,    42,    92,    94,
      95,    54,    54,    54,   135,    96,    93,    97,   -29,   164,
     108,     9,    10,    11,   106,    54,   -76,   -76,   -76,   109,
      66,    54,   -76,   110,   112,    12,   166,   167,   111,    13,
      90,    35,    35,   114,   113,    54,    14,   115,   116,   118,
     121,    15,    16,   119,    17,     9,    10,    11,   124,   122,
      18,   127,    19,    20,    21,    22,   128,   130,   136,    12,
      23,    24,   139,    13,   158,    25,   137,    26,    27,   152,
      14,   156,   153,   159,   162,    15,    16,    81,    17,     9,
      10,    11,   160,   143,    18,   165,    19,    20,   107,    22,
     117,   142,   148,    12,    23,    24,   155,    13,   146,    25,
     157,    26,    27,   150,    14,    59,   163,   168,     0,    15,
      16,     0,     9,    10,    11,     0,     0,     0,    18,     0,
      19,    20,     0,    22,     0,     0,    12,     0,    23,    24,
      13,     0,     0,    25,     0,    26,    27,    14,     0,     0,
       0,     0,    15,    16,     0,     9,    10,    11,     0,     0,
       0,    18,     0,    19,    20,     0,    22,     0,     0,    12,
       0,    23,    24,    13,     0,     0,     0,     0,    26,    27,
      14,     0,     0,     0,     0,    15,    16,     0,    44,    10,
      45,     0,     0,     0,    18,     0,    19,    20,     0,    22,
       0,     0,    12,     0,    23,    24,    13,     0,     0,     0,
       0,     0,    27,    14,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,    23
};

static const yytype_int16 yycheck[] =
{
       8,    23,    55,    16,    26,    81,    26,     3,    16,     5,
      51,    24,    14,     3,     4,     5,    24,     7,    20,     3,
      40,     0,    28,     3,    29,    27,    50,    17,    41,    17,
      18,    21,    28,    41,    26,     3,     4,     5,    28,     7,
      13,    14,    30,    33,     3,    28,     5,    20,     3,    17,
      58,    27,   128,    21,    27,    30,    32,    47,    17,     3,
      28,    74,    52,    71,     5,    33,    74,    40,    90,    28,
      94,    95,    96,     5,    33,     3,    78,    50,     3,    47,
      11,    83,    13,   136,    52,   112,    88,    10,    18,   116,
     103,    28,   119,    52,    25,   103,   109,    28,    29,   121,
      10,   109,   115,   111,     5,    78,   108,   115,    81,   122,
      83,    11,   114,    13,   122,    88,    28,    32,    29,     6,
       7,    94,    95,    96,    97,    12,    29,     8,    28,   156,
      56,     3,     4,     5,    11,   108,     6,     7,     8,    55,
     162,   114,    12,    25,    27,    17,   159,   160,    26,    21,
      25,   159,   160,    58,    40,   128,    28,    26,    11,    26,
      26,    33,    34,    27,    36,     3,     4,     5,     3,    37,
      42,    29,    44,    45,    46,    47,    25,     5,    25,    17,
      52,    53,     5,    21,    26,    57,    31,    59,    60,    29,
      28,    48,    31,    37,    26,    33,    34,    30,    36,     3,
       4,     5,    39,   111,    42,   158,    44,    45,    58,    47,
      71,   110,   118,    17,    52,    53,   136,    21,   115,    57,
     138,    59,    60,   121,    28,    18,   153,   162,    -1,    33,
      34,    -1,     3,     4,     5,    -1,    -1,    -1,    42,    -1,
      44,    45,    -1,    47,    -1,    -1,    17,    -1,    52,    53,
      21,    -1,    -1,    57,    -1,    59,    60,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,     3,     4,     5,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    47,    -1,    -1,    17,
      -1,    52,    53,    21,    -1,    -1,    -1,    -1,    59,    60,
      28,    -1,    -1,    -1,    -1,    33,    34,    -1,     3,     4,
       5,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    47,
      -1,    -1,    17,    -1,    52,    53,    21,    -1,    -1,    -1,
      -1,    -1,    60,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    63,     3,     0,    28,     3,    29,    26,     3,
       4,     5,    17,    21,    28,    33,    34,    36,    42,    44,
      45,    46,    47,    52,    53,    57,    59,    60,    65,    66,
      67,    68,    76,    77,    79,    80,    82,    85,    86,    91,
      28,    27,    32,     3,     3,     5,    80,    91,     3,     4,
       7,    64,    89,    90,    91,    30,    82,     3,    70,    85,
       5,     3,    89,     5,    69,     3,    64,    88,    75,    82,
       3,    71,    72,    64,    73,    74,    89,    18,    28,    17,
      18,    30,    87,    10,    81,    89,    82,     5,    11,    13,
      25,    90,    29,    29,     6,     7,    12,     8,     3,     5,
      28,    77,    78,    26,    40,    83,    11,    67,    56,    55,
      25,    26,    27,    40,    58,    26,    11,    68,    26,    27,
      82,    26,    37,    89,     3,    81,    89,    29,    25,    89,
       5,    64,    90,    90,    90,    91,    25,    31,    82,     5,
      89,    82,    69,    66,    76,    89,    75,    76,    71,    76,
      73,    82,    29,    31,    81,    78,    48,    83,    26,    37,
      39,    84,    26,    87,    76,    70,    82,    82,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    86,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     3,     1,     4,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     4,     3,     2,     3,
       3,     2,     3,     3,     1,     1,     2,     6,     3,     1,
       3,     3,     3,     1,     6,     5,     4,     4,     4,     2,
       1,     4,     3,     1,     3,     3,     1,     1,     3,     1,
       2,     0,     3,     1,     3,     2,     2,     3,     4,     3,
       5,     3,     3,     3,     2,     3,     3,     1,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 83 "parse.y" /* yacc.c:1646  */
    { parseresult = makeprogram((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 100 "parse.y" /* yacc.c:1646  */
    { instlabel((yyvsp[-2])); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 101 "parse.y" /* yacc.c:1646  */
    { instlabel((yyvsp[0])); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "parse.y" /* yacc.c:1646  */
    { instconst((yyvsp[-4]), (yyvsp[-2])); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 104 "parse.y" /* yacc.c:1646  */
    { instconst((yyvsp[-3]), (yyvsp[-1])); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 106 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 109 "parse.y" /* yacc.c:1646  */
    { insttype((yyvsp[-2]), (yyvsp[0])); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 114 "parse.y" /* yacc.c:1646  */
    { instvars((yyvsp[-2]), (yyvsp[0])); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 117 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "parse.y" /* yacc.c:1646  */
    { (yyval) = instpoint((yyvsp[-1]), (yyvsp[0])); }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "parse.y" /* yacc.c:1646  */
    { (yyval) = instarray((yyvsp[-3]), (yyvsp[0])); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 123 "parse.y" /* yacc.c:1646  */
    { (yyval) = instrec((yyvsp[-2]), (yyvsp[-1])); }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "parse.y" /* yacc.c:1646  */
    { (yyval) = findtype((yyvsp[0])); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "parse.y" /* yacc.c:1646  */
    { (yyval) = instenum((yyvsp[-1])); }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "parse.y" /* yacc.c:1646  */
    { (yyval) = instdotdot((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), (yyvsp[-2])); }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "parse.y" /* yacc.c:1646  */
    { (yyval) = makefor(1, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "parse.y" /* yacc.c:1646  */
    { (yyval) = makeif((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "parse.y" /* yacc.c:1646  */
    { (yyval) = makefuncall((yyvsp[-2]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "parse.y" /* yacc.c:1646  */
    { (yyval) = makewhile((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 136 "parse.y" /* yacc.c:1646  */
    { (yyval) = makerepeat((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 137 "parse.y" /* yacc.c:1646  */
    { (yyval) = dogoto((yyvsp[-1]), (yyvsp[0])); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "parse.y" /* yacc.c:1646  */
    { (yyval) = makefuncall(talloc(), findid((yyvsp[-3])), (yyvsp[-1])); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "parse.y" /* yacc.c:1646  */
    { (yyval) = makeprogn((yyvsp[-2]), cons((yyvsp[-1]), (yyvsp[0]))); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "parse.y" /* yacc.c:1646  */
    { (yyval) = dolabel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "parse.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-1]), (yyvsp[0])); }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "parse.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "parse.y" /* yacc.c:1646  */
    { (yyval) = NULL;}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "parse.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "parse.y" /* yacc.c:1646  */
    { (yyval) = findid((yyvsp[0])); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "parse.y" /* yacc.c:1646  */
    { (yyval) = reducedot((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 161 "parse.y" /* yacc.c:1646  */
    { (yyval) = arrayref((yyvsp[-1]), NULL, (yyvsp[0]), NULL); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "parse.y" /* yacc.c:1646  */
    { (yyval) = dopoint((yyvsp[-1]), (yyvsp[0])); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "parse.y" /* yacc.c:1646  */
    { (yyval) = nconc((yyvsp[-2]), (yyvsp[0])); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "parse.y" /* yacc.c:1646  */
    { instfields((yyvsp[-2]), (yyvsp[0])); }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 168 "parse.y" /* yacc.c:1646  */
    { instfields((yyvsp[-4]), (yyvsp[-2])); (yyval) = nconc((yyvsp[-4]), (yyvsp[0])); }
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parse.y" /* yacc.c:1646  */
    { findid((yyvsp[-2])); (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]));}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 171 "parse.y" /* yacc.c:1646  */
    { findid((yyvsp[-2])); (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]));}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "parse.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "parse.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0]));}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "parse.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]));}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "parse.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]));}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "parse.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 182 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 185 "parse.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0])); }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1869 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 191 "parse.y" /* yacc.c:1906  */


/* You should add your own debugging flags below, and add debugging
   printouts to your programs.

   You will want to change DEBUG to turn off printouts once things
   are working.
  */

#define DEBUG         0             /* set bits here for debugging, 0 = off  */
#define DB_CONS       1             /* bit to trace cons */
#define DB_BINOP      2             /* bit to trace binop */
#define DB_MAKEIF     4             /* bit to trace makeif */
#define DB_MAKEPROGN  8             /* bit to trace makeprogn */
#define DB_PARSERES  16             /* bit to trace parseresult */
#define DB_MAKEFOR    1             /* bit to trace makefor */

 int labelnumber = 0;  /* sequential counter for internal label numbers */



/* dopoint handles a ^ operator.
   tok is a (now) unused token that is recycled. */
TOKEN dopoint(TOKEN var, TOKEN tok) {
  tok->operands = var;
  return tok;
}

/* instdotdot installs a .. subrange in the symbol table.
   dottok is a (now) unused token that is recycled. */
TOKEN instdotdot(TOKEN lowtok, TOKEN dottok, TOKEN hightok) {
  int a = lowtok->intval;
  int b = hightok->intval;

  return makesubrange(dottok, a, b);
}

/* instenum installs an enumerated subrange in the symbol table,
   e.g., type color = (red, white, blue)
   by calling makesubrange and returning the token it returns. */
TOKEN instenum(TOKEN idlist) {
  TOKEN tok = idlist;
  TOKEN subrange = talloc();
  int size = 0;

  for (size; tok ; size++) {
    instconst(tok, makeintc(size));
    tok = tok->link;
  }

  size--;
  subrange = makesubrange(idlist, 0, size);
  return subrange;
}

/* instfields will install type in a list idlist of field name tokens:
   re, im: real    put the pointer to REAL in the RE, IM tokens.
   typetok is a token whose symtype is a symbol table pointer.
   Note that nconc() can be used to combine these lists after instrec() */
TOKEN instfields(TOKEN idlist, TOKEN typetok) {
  TOKEN tok = idlist;
  SYMBOL record = makesym(tok->stringval);
  SYMBOL type = searchst(typetok->stringval);

  int jump = 0;
  int offnum = 0;

  while (tok) {
    offnum = jump;
    jump = jump + type->size;

    type = searchst(typetok->stringval);
    record = makesym(tok->stringval);
    record->datatype = type;
    record->offset = offnum;
    record->size = type->size;

    if (type->kind == BASICTYPE) {
      record->basicdt = type->basicdt;
    }

    tok->symtype = record;
    tok = tok->link;
  }

  return tok;
}


 /* instpoint will install a pointer type in symbol table */
TOKEN instpoint(TOKEN tok, TOKEN typename){
  SYMBOL sym = insertsym(typename->stringval);
  SYMBOL psym = symalloc();   

  sym->kind = TYPESYM;
  
  psym->kind = POINTERSYM;
  psym->size = basicsizes[POINTER];
  psym->basicdt = POINTER;
  psym->datatype = sym;

  tok->symtype = psym;
  return tok;
}

/* instrec will install a record definition.  Each token in the linked list
   argstok has a pointer its type.  rectok is just a trash token to be
   used to return the result in its symtype */
TOKEN instrec(TOKEN rectok, TOKEN argstok) {
  TOKEN second = argstok->link;
  TOKEN first = argstok;

  SYMBOL recsym = symalloc();

  int offset = wordaddress(argstok->symtype->size, 8);
  int offset_size = offset;

  while (second) {
    first->symtype->link = second->symtype;
    second->symtype->offset = offset_size;

    offset = wordaddress(second->symtype->size, 8);   
    offset_size += offset;

    first = second;
    second = second->link;
  }

  recsym->kind = RECORDSYM;
  rectok->symtype = recsym;
  recsym->datatype = argstok->symtype;
  recsym->size = offset_size;

  return rectok;
}

/* insttype will install a type name in symbol table.
   typetok is a token containing symbol table pointers. */
void insttype(TOKEN typename, TOKEN typetok) {
  SYMBOL tempsym = searchins(typename->stringval);
  SYMBOL type = typetok->symtype;

  tempsym->kind = TYPESYM;
  tempsym->basicdt = type->basicdt;
  tempsym->size = type->size;
  tempsym->datatype = type;
}

/* makesubrange makes a SUBRANGE symbol table entry, puts the pointer to it
   into tok, and returns tok. */
TOKEN makesubrange(TOKEN tok, int low, int high){

  SYMBOL sub = makesym("sub");
  sub->kind = SUBRANGE;
  sub->lowbound = low;
  sub->highbound = high;

  sub->basicdt = INTEGER;
  sub->size = basicsizes[INTEGER];

  tok->symtype = sub;
}

/* nconc concatenates two token lists, destructively, by making the last link
   of lista point to listb.
   (nconc '(a b) '(c d e))  =  (a b c d e)  */
/* nconc is useful for putting together two fieldlist groups to
   make them into a single list in a record declaration. */
TOKEN nconc(TOKEN lista, TOKEN listb) {
  //can use get_last to immediatly resolve nconc
  TOKEN tok = get_last(lista, 0);
  tok->link = listb;

  return lista;
}

/* reducedot handles a record reference.
   dot is a (now) unused token that is recycled. */
TOKEN reducedot(TOKEN var, TOKEN dot, TOKEN field) {
  TOKEN areftok;
  TOKEN offtok = makeintc(-1);
  TOKEN lasttok = get_last(var->operands, 0);

  SYMBOL locate = symalloc();
  SYMBOL varsym = searchst(get_last(var, 1)->stringval);
  SYMBOL temp = varsym;

  int done = 0;

  areftok = makeop(AREFOP);
  areftok->operands = var;
  var->link = offtok;

  while (temp && !done) {
    if (temp->datatype && temp->datatype->kind == BASICTYPE) 
      done = 1;
    if (!done)
      temp = temp->datatype;
  }
  done = 0;
  while (temp && !done) {
    if ((strcmp(temp->namestring, field->stringval) == 0)) {
      locate = temp;
      offtok->whichval = -1;
      if (var->whichval == AREFOP) 
          offtok->whichval = lasttok->whichval + locate->offset; 
      else {
        offtok->whichval = locate->offset;
        if (locate->datatype->basicdt == REAL) {
          offtok->link = makerealtok();
        }
      }
    if (temp->offset == lasttok->whichval) {
      locate = temp;
      done = 1;
      }
    }
    temp = temp->link;
  }

  if (var->whichval == AREFOP) {
    if (offtok->whichval >= 0) {
      var->operands->link = offtok;
    }
    areftok = var;
  }

  if (offtok->link && offtok->link->datatype == REAL) 
    areftok->datatype = REAL;
  
  offtok->link = NULL;

  return areftok;
}

/* addint adds integer off to expression exp, possibly using tok */
TOKEN addint(TOKEN exp, TOKEN off, TOKEN tok) {

  int exp_int = exp->intval;
  int off_int = off->intval;
  exp->intval = exp_int + off_int;
  
  return exp;
}

/* Gets and returns the last TOKEN (in)directly
   connected via ->operands or ->links to TOKEN tok. */
TOKEN get_last(TOKEN tok, int op) {
  TOKEN current = tok->link;
  if (op)
    current = tok->operands;
  while (current) {
    tok = current;
    if (op)
      current = current->operands;
    else
      current = current->link;
  }
  
  return tok;  
}

/* instlabel installs a user label into the label table */
void instlabel (TOKEN num) {
  int index = labelnumber++;
  all_labels[index] = num->intval;
  }


/* makefloat forces the item tok to be floating, by floating a constant
   or by inserting a FLOATOP operator */
TOKEN makefloat(TOKEN tok) {
  TOKEN flaottok = tok;

  if (tok->tokentype == NUMBERTOK) {
    flaottok->datatype = REAL;
    flaottok->realval = flaottok->intval;
  }
  else {
    flaottok = makeop(FLOATOP);
    flaottok->operands = tok;
  }
  return flaottok;
}

/* simple function to make a REAL tok */
TOKEN makerealtok() {
  TOKEN temp = talloc();
  temp->tokentype = NUMBERTOK;
  temp->datatype = REAL;
  return temp;
}

TOKEN cons(TOKEN item, TOKEN list)           /* add item to front of list */
  { item->link = list;

    return item;
  }

/* unaryop links a unary operator op to one operand, lhs */
TOKEN unaryop(TOKEN op, TOKEN lhs) {
    op->operands = lhs;          /* link operands to operator       */
    lhs->link = NULL;
    return op;
}

/*checks datatype of tok symbol*/
int checkDT(TOKEN tok, int checkINT) {
  SYMBOL sym = searchst(tok->stringval);
  if (checkINT && sym->basicdt == INTEGER) 
    return 1;
  else if (!checkINT && sym->basicdt == REAL) 
    return 1;
  return 0;
}

/* binop links a binary operator op to two operands, lhs and rhs */
TOKEN binop(TOKEN op, TOKEN lhs, TOKEN rhs) {
  op->operands = lhs;   // link operands to operator
  lhs->link = rhs;    // link second operand to first
  rhs->link = NULL;   // terminate operand list
  op->datatype = lhs->datatype;

  if (lhs->datatype != rhs->datatype) {
    TOKEN temp = makefloat(rhs);
    if (lhs->datatype == REAL && rhs->datatype == INTEGER) {
      op->datatype = REAL;
      op->operands = lhs;
      lhs->link = temp;
    }
    else if (lhs->datatype == INTEGER && rhs->datatype == REAL) {
      op->datatype = REAL;
      temp = makefloat(lhs);
      op->operands = temp;
      temp->link = rhs;

      if (op->whichval == ASSIGNOP) {
        temp = makeop(FIXOP);
        op->operands = lhs;
        lhs->link = temp;
      }
    }
  }

  if (DEBUG & DB_BINOP)
     { printf("binop\n");
       dbugprinttok(op);
       dbugprinttok(lhs);
       dbugprinttok(rhs);
     };
  return op;
}

/* makerepeat makes structures for a repeat statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makerepeat(TOKEN tok, TOKEN statements, TOKEN tokb, TOKEN expr) {
  TOKEN tempLabel = makelabel();
  TOKEN tokProg = makeprogn(talloc(), tempLabel); // operand tempLabel to tokProg
  TOKEN tokGOTO = makegoto(tempLabel->operands->intval);
  TOKEN tokProgOP = makeop(PROGNOP);
  TOKEN tokIF = makeif(makeop(IFOP), expr, tokProgOP, NULL);

  tokProgOP->link = tokGOTO;

  tempLabel->link = statements;

  //fail to allocate
  if (!tempLabel || !tokProg || !tokGOTO || !tokProgOP ||!tokIF) 
    return NULL;
  
//get nested progns 
  get_last(statements, 0)->link = tokIF;

  return tokProg;
} 

TOKEN makeif(TOKEN tok, TOKEN exp, TOKEN thenpart, TOKEN elsepart)
  {  tok->tokentype = OPERATOR;  /* Make it look like an operator   */
     tok->whichval = IFOP;
     if (elsepart != NULL) elsepart->link = NULL;
     thenpart->link = elsepart;
     exp->link = thenpart;
     tok->operands = exp;
     return tok;
   }

/* makeprogn makes a PROGN operator and links it to the list of statements.
   tok is a (now) unused token that is recycled. */
TOKEN makeprogn(TOKEN tok, TOKEN statements) { 
  //if statements is already a progn
  if (statements->whichval == PROGNOP) 
    return statements;

   tok->tokentype = OPERATOR;
     tok->whichval = PROGNOP;
     tok->operands = statements;

     return tok;
   }

/* findid finds an identifier in the symbol table and sets up
the symbol table pointers */
/* taken from lecture notes pg 127 */
TOKEN findid(TOKEN tok) {
  SYMBOL sym, typ;
  sym = searchst(tok->stringval);
  if (sym->kind == CONSTSYM) {
    if (sym->basicdt == INTEGER) {
      tok->tokentype = NUMBERTOK;
      tok->datatype = INTEGER;
      tok->intval = sym->constval.intnum;
    }
    if (sym->basicdt == REAL) {
      tok->tokentype = NUMBERTOK;
      tok->datatype = REAL;
      tok->realval = sym->constval.realnum;
    }
  }
  else {
    tok->symentry = sym;
    typ = sym->datatype;
    tok->symtype = typ;

    if (typ->kind == BASICTYPE || typ->kind == POINTERSYM) {
      tok->datatype = typ->basicdt;
    }
  }

  return tok;
}

/* findtype looks up a type name in the symbol table, puts the pointer
   to its type into tok->symtype, returns tok. */
TOKEN findtype(TOKEN tok) {
  SYMBOL sym;
  sym = searchst(tok->stringval);
  tok->symtype = sym->datatype;

  if (sym->kind == BASICTYPE) {
    tok->datatype = sym->basicdt;
    tok->symtype = sym;
  }

  return tok;
}


/* instconst installs a constant in the symbol table */
void instconst(TOKEN idtok, TOKEN consttok) {
  SYMBOL sym;

  sym = insertsym(idtok->stringval);
  sym->kind = CONSTSYM;
  sym->basicdt = consttok->datatype;

  if (sym->basicdt == REAL) //real
    sym->constval.realnum = consttok->realval;

  if (sym->basicdt == INTEGER) //int
    sym->constval.intnum = consttok->intval;

  else if (sym->basicdt == STRINGTYPE) //string
    strncpy(sym->constval.stringconst, consttok->stringval, 16);
}

/* install variables in symbol table */
/* taken from lecture notes pg 133 */
void instvars(TOKEN idlist, TOKEN typetok) {
  //blockoffs[blocknumber] is the offset in the current block
  // this is the next value for this storage allocation
  SYMBOL sym, typesym; int align;
  typesym = typetok->symtype;
  align = alignsize(typesym);
  while ( idlist != NULL )   /* for each id */
    {  sym = insertsym(idlist->stringval);
       sym->kind = VARSYM;
       sym->offset = wordaddress(blockoffs[blocknumber], align);
       sym->size = typesym->size;

       blockoffs[blocknumber] = sym->offset + sym->size;
       sym->datatype = typesym;
       sym->basicdt = typesym->basicdt;
       idlist = idlist->link;
    };
}

int wordaddress(int n, int wordsize)
  { return ((n + wordsize - 1) / wordsize) * wordsize; }
 
yyerror(s)
  char * s;
  { 
  fputs(s,stderr); putc('\n',stderr);
  }

/* makefuncall makes a FUNCALL operator and links it to the fn and args.
   tok is a (now) unused token that is recycled. */
TOKEN makefuncall(TOKEN tok, TOKEN fn, TOKEN args) {
  TOKEN functok = copytok(tok);
  TOKEN memtok = copytok(tok);

  fn->link = args;
  functok->operands = fn;

  if(!(strcmp(fn->stringval, "writeln")) || !(strcmp(fn->stringval, "write"))) {
    SYMBOL writelnf = searchst("writelnf");
    if(args->tokentype == OPERATOR)
      strcpy(fn->stringval, "writelnf");
    SYMBOL writelni = searchst("writelni");
    if(args->tokentype == IDENTIFIERTOK)
      strcpy(fn->stringval, "writelni");
  }

  SYMBOL func_symbol = searchst(fn->stringval);

  functok->tokentype = OPERATOR;
  functok->datatype = STRINGTYPE;
  functok->whichval = FUNCALLOP;
  functok->link = NULL;

  if(strcmp(fn->stringval, "new") == 0){
    //create number token for size of allocated memory
    memtok->tokentype = NUMBERTOK;
    memtok->datatype = INTEGER;
    memtok->symtype = searchst("integer");
    memtok->intval = searchst(args->stringval)->datatype->datatype->datatype->size;

    fn->link = memtok;
    functok->operands = fn;

    //create an assignop
    TOKEN assigntok = copytok(memtok);
    assigntok->whichval = ASSIGNOP;
    assigntok->tokentype = OPERATOR;
    functok->symentry = func_symbol;
    
    return binop(assigntok, args, functok);
    }
  
    //search symbol table for function
    int return_type = func_symbol->datatype->basicdt;
    int arg_type = func_symbol->datatype->link->basicdt;

  return functok;
}

/* makeprogram makes the tree structures for the top-level program */
TOKEN makeprogram(TOKEN name, TOKEN args, TOKEN statements) {
  TOKEN maketree = talloc();
  maketree = makeprogn(maketree, args);
  name->link = maketree;

  TOKEN treest = talloc();
  treest->tokentype = OPERATOR;
  treest->operands = name;
  treest->whichval = PROGRAMOP;
  maketree->link = statements;

  return treest;
}

/* copytok makes a new token that is a copy of origtok */
TOKEN copytok(TOKEN origtok) {
  //need to set all of newtok attributes to origtok
  TOKEN newtok = talloc();

  newtok->datatype = origtok->datatype;
  newtok->symtype = origtok->symtype;
  newtok->link = origtok->link;
  newtok->tokentype = origtok->tokentype;
  newtok->whichval = origtok->whichval;

  newtok->intval = origtok->intval;
  newtok->symentry = origtok->symentry;
  newtok->realval = origtok->realval;
  return newtok;
}

/* makelabel makes a new label, using labelnumber++ */
TOKEN makelabel() {
  //probably need makeintc.. increase labelnumber
  TOKEN labltok = talloc();
  labltok->tokentype = OPERATOR;
  labltok->operands = makeintc(labelnumber);
  labltok->whichval = LABELOP;
  
  //gets a new label for next time
  labelnumber++;
  return labltok;
}  

/* makeop makes a new operator token with operator number opnum.
   Example:  makeop(FLOATOP)  */
TOKEN makeop(int opnum){
  //need to check if i need to set anything for tok
  TOKEN tok = talloc();
    tok->whichval = opnum;
  tok->tokentype = OPERATOR;

  return tok;
}  

/* makegoto makes a GOTO operator to go to the specified label.
   The label number is put into a number token. */
TOKEN makegoto(int label) {
  TOKEN tok_goto = talloc();
  tok_goto->operands = makeintc(label);
  tok_goto->whichval = GOTOOP;
  return tok_goto;
}

/* makeintc makes a new token with num as its value */
TOKEN makeintc(int num) {
  TOKEN newint = talloc();
  newint->tokentype = NUMBERTOK;
  newint->intval = num;
  newint->datatype = INTEGER;
  
  return newint;
}

/* arrayref processes an array reference a[i]
   subs is a list of subscript expressions.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN arrayref(TOKEN arr, TOKEN tok, TOKEN subs, TOKEN tokb){
  SYMBOL symArray = searchst(arr->stringval);
  SYMBOL symType = symArray->datatype->datatype->datatype;

  TOKEN subscipt = talloc();;
  TOKEN areftok = talloc();
  TOKEN arrSize = talloc();
  TOKEN arrcpy = talloc();

  TOKEN timetok = talloc();
  TOKEN timecpy = talloc();

  int dub = 0;
  int offset = 0;

  if(subs->link) {
    symType = symArray->datatype->datatype; 
    dub = 1;
  }

  if(subs->tokentype == IDENTIFIERTOK){
    timetok->tokentype = OPERATOR;
    timetok->whichval = TIMESOP;
    timecpy = copytok(timetok);
    timecpy->whichval = PLUSOP;

    arrSize->tokentype = NUMBERTOK;
    arrSize->datatype = INTEGER;
    arrSize->intval = symType->size;
    arrcpy = copytok(arrSize);

    subscipt = binop(timetok, arrSize, subs);

    if(!dub)
          arrcpy->intval = -arrcpy->intval;
    else
      arrcpy->intval = -arrcpy->intval + 4;     
    subscipt = binop(timecpy, arrcpy, subscipt);
    dub = 1;
  } 

  areftok->tokentype = OPERATOR;
  areftok->whichval = AREFOP;
  areftok->operands = arr;
  
  if(dub)
    arr->link = subscipt;
  else{
    offset = symType->size * (subs->intval - 1);
    subs->intval = offset;
    arr->link = subs;
  }
  return areftok;
}

/* makefor makes structures for a for statement.
   sign is 1 for normal loop, -1 for downto.
   asg is an assignment statement, e.g. (:= i 1)
   endexpr is the end expression
   tok, tokb and tokc are (now) unused tokens that are recycled. */
TOKEN makefor(int sign, TOKEN tok, TOKEN asg, TOKEN tokb, TOKEN endexpr,
              TOKEN tokc, TOKEN statement) {
  TOKEN newLabel = makelabel();
  TOKEN iftok =  talloc();
  TOKEN progntok = talloc();
  TOKEN onetok = makeintc(1);
  TOKEN ASSIGNtok = makeop(ASSIGNOP);
  TOKEN LEtok = makeop(LEOP);
  TOKEN PLUStok = makeop(PLUSOP);
  TOKEN temp1 = copytok(asg->operands);
  TOKEN temp2 = copytok(temp1);
  TOKEN temp3 = copytok(temp1);

  statement->link = ASSIGNtok;
  ASSIGNtok->link = makegoto(labelnumber - 1);

  tok = makeprogn(tok, asg);
  tok->operands = asg;
  //creates the new label
  asg->link = newLabel;

  progntok = makeprogn(progntok, statement);
  iftok = makeif(iftok, LEtok, progntok, NULL);
  iftok->operands = LEtok;
  newLabel->link = iftok;

  //need to establish correct links with temp tokens for tree
  LEtok->operands = temp1;
  temp1->link = tokb;

  ASSIGNtok->operands = temp2;
  temp2->link = PLUStok;
  
  PLUStok->operands = temp3;
  temp3->link = onetok;

  if(DEBUG & DB_MAKEFOR) {
    printf("makefor\n");
    dbugprinttok(iftok);
    dbugprinttok(progntok);
    dbugprinttok(onetok);

    dbugprinttok(temp1);
    dbugprinttok(temp2);
    dbugprinttok(temp3);

    dbugprinttok(ASSIGNtok);
    dbugprinttok(LEtok);
    dbugprinttok(PLUStok);
  }
  return tok;
}

/* makewhile makes structures for a while statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makewhile(TOKEN tok, TOKEN expr, TOKEN tokb, TOKEN statement){
  TOKEN new_label = talloc();
  TOKEN numtok = talloc();
  TOKEN iftok = talloc();
  TOKEN linktok = unaryop(iftok, expr);
  TOKEN temptok = talloc();
  TOKEN gototok = talloc();

  labelnumber++;
  new_label->tokentype = OPERATOR;
  new_label->whichval = LABELOP;

  //create numtok
  numtok->tokentype = NUMBERTOK;
  numtok->intval = labelnumber;
  new_label->operands = numtok;

  //if section
  iftok->tokentype = OPERATOR;
  iftok->whichval = IFOP;
  new_label->link = iftok;
  linktok->operands->link = statement;

  //link goto with get_last
  temptok = get_last(statement->operands, 0);
  
  //create goto
  gototok->tokentype = OPERATOR;
  gototok->whichval = GOTOOP;
  temptok->link = unaryop(gototok, numtok);

  return makeprogn(tok, new_label);
}

/* instarray installs an array declaration into the symbol table.
   bounds points to a SUBRANGE symbol table entry.
   The symbol table pointer is returned in token typetok. */
TOKEN instarray(TOKEN bounds, TOKEN typetok) {
  TOKEN type = typetok;
  SYMBOL prev_sym = NULL;
  SYMBOL typesym = searchst(type->stringval);
  SYMBOL arrsym = symalloc();
  int low = 0;
  int high = 0;
  int count = 0;
  int size = 0;

  for(count; bounds; count++) {
    low = bounds->symtype->lowbound;
    high = bounds->symtype->highbound;

    arrsym = symalloc();
    arrsym->kind = ARRAYSYM;
    arrsym->datatype = typesym;
    if (count) {
      arrsym->datatype = type->symtype;
      arrsym->size = (high - low + 1) * size;
      }

    else 
      arrsym->size = (high - low + 1) * typesym->size;

    arrsym->lowbound = low;
    arrsym->highbound = high;
    type->symtype = arrsym;
    prev_sym = arrsym;
    size = prev_sym->size;
    bounds = bounds->link;
  }
  
  return type;
}

/* dogoto is the action for a goto statement.
   tok is a (now) unused token that is recycled. */
TOKEN dogoto(TOKEN tok, TOKEN labeltok) {
  TOKEN gotoTok = talloc();
  TOKEN numtok = talloc();
  int index;

  gotoTok->tokentype = OPERATOR;
  gotoTok->whichval = GOTOOP;
  numtok->tokentype = NUMBERTOK;

  //incrementing index
  for (index = 0; all_labels[index] != labeltok->intval; index++){}
  
  numtok->intval = index;
  gotoTok->operands = numtok;

  return gotoTok;
}

/* dolabel is the action for a label of the form   <number>: <statement>
   tok is a (now) unused token that is recycled. */
TOKEN dolabel(TOKEN labeltok, TOKEN tok, TOKEN statement) {
  TOKEN new_label = talloc();
  TOKEN progn = makeprogn(tok, statement);
  int index;

  new_label->tokentype = OPERATOR;
  new_label->whichval = LABELOP;
  new_label->operands = labeltok;
  new_label->link = statement;

  //incrementing index
  for(index = 0; all_labels[index] != labeltok->intval; index++){}

  labeltok->intval = index;
  progn->operands = new_label;
  
  return progn;
}

int main(int argc, char **argv) {
  int res;
  initsyms();
  res = yyparse();
  printst();
  printf("yyparse result = %8d\n", res);
  if (DEBUG & DB_PARSERES) dbugprinttok(parseresult);
  ppexpr(parseresult);           /* Pretty-print the result tree */
}