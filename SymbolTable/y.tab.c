/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./SymbolTable/yfile.y" /* yacc.c:339  */

	#include <stdio.h>
	#include "symboltable.h"
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

	struct scope *global, *current_scope;
	int curr_line = 1;
	int temp = 1;

	int yyerror(const char* error);
	int error(int type, int spec, char* id);
	int yylex();
	
	int inloop = 0;

#line 84 "./SymbolTable/y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_SYMBOLTABLE_Y_TAB_H_INCLUDED
# define YY_YY_SYMBOLTABLE_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 20 "./SymbolTable/yfile.y" /* yacc.c:355  */

	struct datatype
	{
		int val_type;
		float numval;
		char sval[64];
		char idval[64];
	};

#line 124 "./SymbolTable/y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_OR = 258,
    T_AND = 259,
    T_BOOLEAN = 260,
    T_INTEGER = 261,
    T_IDENTIFIER = 262,
    T_STRING = 263,
    T_FLOAT = 264,
    T_FROM = 265,
    T_NOT = 266,
    T_WHILE = 267,
    T_WITH = 268,
    T_ELSE = 269,
    T_IF = 270,
    T_BREAK = 271,
    T_IN = 272,
    T_CONTINUE = 273,
    T_RETURN = 274,
    T_DEF = 275,
    T_FOR = 276,
    T_IMPORT = 277,
    T_AS = 278,
    T_PRINT = 279,
    T_PLUS = 280,
    T_MINUS = 281,
    T_POWER = 282,
    T_STAR = 283,
    T_DIVIDE = 284,
    T_MOD = 285,
    T_OPENP = 286,
    T_CLOSEP = 287,
    T_OPENS = 288,
    T_CLOSES = 289,
    T_EQUAL = 290,
    T_COMMA = 291,
    T_INDENT = 292,
    T_LESSER = 293,
    T_GREATER = 294,
    T_NO = 295,
    T_NEWLINE = 296,
    T_COLON = 297,
    T_RANGE = 298,
    T_DEDENT = 299,
    T_EOF = 300,
    T_SEMICOLON = 301
  };
#endif
/* Tokens.  */
#define T_OR 258
#define T_AND 259
#define T_BOOLEAN 260
#define T_INTEGER 261
#define T_IDENTIFIER 262
#define T_STRING 263
#define T_FLOAT 264
#define T_FROM 265
#define T_NOT 266
#define T_WHILE 267
#define T_WITH 268
#define T_ELSE 269
#define T_IF 270
#define T_BREAK 271
#define T_IN 272
#define T_CONTINUE 273
#define T_RETURN 274
#define T_DEF 275
#define T_FOR 276
#define T_IMPORT 277
#define T_AS 278
#define T_PRINT 279
#define T_PLUS 280
#define T_MINUS 281
#define T_POWER 282
#define T_STAR 283
#define T_DIVIDE 284
#define T_MOD 285
#define T_OPENP 286
#define T_CLOSEP 287
#define T_OPENS 288
#define T_CLOSES 289
#define T_EQUAL 290
#define T_COMMA 291
#define T_INDENT 292
#define T_LESSER 293
#define T_GREATER 294
#define T_NO 295
#define T_NEWLINE 296
#define T_COLON 297
#define T_RANGE 298
#define T_DEDENT 299
#define T_EOF 300
#define T_SEMICOLON 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "./SymbolTable/yfile.y" /* yacc.c:355  */

	struct datatype data;

#line 232 "./SymbolTable/y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYMBOLTABLE_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "./SymbolTable/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    88,    89,    90,    91,    92,    94,    95,
      97,    98,    98,    98,    99,   101,   102,   104,   105,   107,
     109,   111,   114,   115,   116,   117,   118,   119,   120,   122,
     124,   125,   127,   130,   131,   133,   134,   136,   137,   138,
     140,   143,   146,   148,   149,   151,   153,   153,   154,   154,
     154,   156,   157,   158,   159,   160,   161,   163,   163,   166,
     167,   168,   169,   170,   171,   173,   174,   175,   178,   179,
     180,   181,   183,   184,   186,   187,   188,   190,   193,   195,
     196,   197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_OR", "T_AND", "T_BOOLEAN",
  "T_INTEGER", "T_IDENTIFIER", "T_STRING", "T_FLOAT", "T_FROM", "T_NOT",
  "T_WHILE", "T_WITH", "T_ELSE", "T_IF", "T_BREAK", "T_IN", "T_CONTINUE",
  "T_RETURN", "T_DEF", "T_FOR", "T_IMPORT", "T_AS", "T_PRINT", "T_PLUS",
  "T_MINUS", "T_POWER", "T_STAR", "T_DIVIDE", "T_MOD", "T_OPENP",
  "T_CLOSEP", "T_OPENS", "T_CLOSES", "T_EQUAL", "T_COMMA", "T_INDENT",
  "T_LESSER", "T_GREATER", "T_NO", "T_NEWLINE", "T_COLON", "T_RANGE",
  "T_DEDENT", "T_EOF", "T_SEMICOLON", "$accept", "P", "literal", "indexes",
  "all_stmt", "$@1", "$@2", "compound_stmt", "suite", "line", "indent",
  "dedent", "simple_stmt", "print_stmt", "print_list", "assignment_stmt",
  "list_stmt", "item", "list_literal", "break_stmt", "continue_stmt",
  "import_stmt", "import_list", "aug_assignment_stmt", "logical_exp",
  "rel_op", "arith_operator", "condition", "comp_operator",
  "expression_stmt", "term", "factor", "power", "while_stmt", "for_stmt",
  "range_stmt", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -29

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,    64,   -47,   -47,    -3,   -20,    34,    -9,    37,    11,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,    42,    38,    46,    47,   -47,    55,   -47,   -47,
      55,    77,    11,   -47,   -47,   -47,     0,    51,    55,    55,
      -3,   -47,   -47,    54,   -47,   -47,    55,     6,   -47,    63,
     -47,     7,    74,   -47,    69,    65,    68,    30,    88,   -31,
     -47,    54,    52,    52,   -47,   -47,    50,   -47,   -47,   -47,
     -47,    72,    73,   -47,    55,    55,    55,    55,    55,    55,
      55,   -47,   -47,   -47,   -47,    55,    75,    76,    78,    79,
      55,    -5,   -47,   -47,   -31,    13,   -47,   -47,   -47,    41,
      74,    74,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,    81,    66,     0,   -47,    71,   -47,
     110,   -47,   -47,   -47,   -47,    82,   111,    -6,   -47,   113,
      89,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,     9,    40,    41,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    51,    52,    54,    53,
      55,    56,     0,     0,     0,    44,    42,     0,     1,     2,
       0,     0,     0,    15,    16,    19,    11,     0,     0,     0,
       0,     6,     3,     9,     5,     4,     0,     0,    75,     0,
       7,    31,    67,    71,    73,     0,    47,    58,     0,     0,
      10,     9,    32,    45,    43,    76,     0,    37,    38,    34,
      39,     0,    36,    29,     0,     0,     0,     0,     0,     0,
       0,    77,    49,    48,    50,     0,     0,    59,    60,     0,
       0,     0,    20,    12,     0,    11,     8,    74,    33,     0,
      65,    66,    30,    68,    69,    70,    72,    46,    61,    63,
      62,    64,    57,    81,     0,     0,    11,    18,     0,    35,
       0,    78,    13,    21,    17,     0,     0,     0,    79,     0,
       0,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -47,   -34,   -36,   -47,   -47,   -47,    26,    -4,
     -47,   -47,   -47,   -47,    48,   -47,   -46,    23,   -47,   -47,
     -47,   -47,    83,   -47,    40,   -47,   -47,    36,   -47,   -25,
      -8,    21,   -47,   -47,   -47,   -47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,    48,    23,     7,     8,   116,    32,    93,    94,
      95,   124,     9,    10,    49,    11,    50,    71,    72,    12,
      13,    14,    26,    15,    55,    85,    24,    56,    90,    57,
      52,    53,    54,    33,    34,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    70,    51,   113,    25,    36,    92,     1,     1,    65,
      35,    27,    67,    62,    63,    68,     2,     2,     3,     3,
       1,    66,     4,     4,     5,     5,   128,    96,    59,     2,
     129,     3,    74,    75,    28,     4,    29,     5,   114,    47,
      69,   -28,   -28,    76,   -14,   -14,   -14,    67,    37,    30,
      68,    51,    35,    70,   -28,    74,    75,   -14,    31,   118,
      41,    42,    43,    44,    45,    86,   100,   101,    87,    88,
      89,    82,    83,    38,    47,    74,    75,    74,    75,    84,
     122,    39,    97,    40,    58,    61,    46,    22,    47,    16,
      17,    18,    19,    20,    21,    73,    80,    22,   103,   104,
     105,   106,    77,    78,    79,    91,    98,    81,   121,    99,
     108,   109,   120,   110,   111,   123,   125,   127,   126,   130,
     117,   131,   119,    64,   102,   107,   112
};

static const yytype_uint8 yycheck[] =
{
      36,    47,    27,     8,     7,     9,    37,     7,     7,    43,
      41,    31,     6,    38,    39,     9,    16,    16,    18,    18,
       7,    46,    22,    22,    24,    24,    32,    61,    32,    16,
      36,    18,    25,    26,     0,    22,    45,    24,    43,    33,
      34,    41,    41,    36,    44,    45,    45,     6,     6,    12,
       9,    76,    41,    99,    41,    25,    26,    44,    21,    95,
       5,     6,     7,     8,     9,    35,    74,    75,    38,    39,
      40,     3,     4,    35,    33,    25,    26,    25,    26,    11,
     116,    35,    32,    36,     7,    34,    31,    33,    33,    25,
      26,    27,    28,    29,    30,    32,    27,    33,    77,    78,
      79,    80,    28,    29,    30,    17,    34,    42,    42,    36,
      35,    35,    31,    35,    35,    44,     6,     6,    36,     6,
      94,    32,    99,    40,    76,    85,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    16,    18,    22,    24,    48,    51,    52,    59,
      60,    62,    66,    67,    68,    70,    25,    26,    27,    28,
      29,    30,    33,    50,    73,     7,    69,    31,     0,    45,
      12,    21,    54,    80,    81,    41,    56,     6,    35,    35,
      36,     5,     6,     7,     8,     9,    31,    33,    49,    61,
      63,    76,    77,    78,    79,    71,    74,    76,     7,    56,
      51,    34,    76,    76,    69,    50,    76,     6,     9,    34,
      63,    64,    65,    32,    25,    26,    36,    28,    29,    30,
      27,    42,     3,     4,    11,    72,    35,    38,    39,    40,
      75,    17,    37,    55,    56,    57,    50,    32,    34,    36,
      77,    77,    61,    78,    78,    78,    78,    71,    35,    35,
      35,    35,    74,     8,    43,    82,    53,    55,    51,    64,
      31,    42,    51,    44,    58,     6,    36,     6,    32,    36,
       6,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    50,    50,
      51,    52,    53,    51,    51,    54,    54,    55,    55,    56,
      57,    58,    59,    59,    59,    59,    59,    59,    59,    60,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      66,    67,    68,    69,    69,    70,    71,    71,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    81,    82,
      82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     4,     0,
       3,     0,     0,     6,     0,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     1,     4,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     3,     1,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     1,     2,     3,     5,     6,
       8,     1
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
#line 86 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1429 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = int_type; (yyval.data.numval) = (yyvsp[0].data.numval);}
#line 1435 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = float_type; (yyval.data.numval) = (yyvsp[0].data.numval);}
#line 1441 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 90 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = string_type; strcpy((yyval.data.sval),(yyvsp[0].data.sval));  }
#line 1447 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = bool_type; (yyval.data.numval) = (yyvsp[0].data.numval);}
#line 1453 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = list_type; strcpy((yyval.data.sval),(yyvsp[0].data.sval));  }
#line 1459 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval),"%d %s", (int)(yyvsp[-2].data.numval), (yyvsp[0].data.sval));}
#line 1465 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 95 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {strcpy((yyval.data.sval), "");}
#line 1471 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {inloop++;}
#line 1477 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {inloop--;}
#line 1483 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 107 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {curr_line++;}
#line 1489 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {current_scope = create_scope(current_scope);}
#line 1495 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {current_scope = exit_scope(current_scope);}
#line 1501 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 127 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {if(strlen((yyvsp[-2].data.sval))!=0){struct datatype *temp=lookup(current_scope,(yyvsp[-3].data.idval), (yyvsp[-2].data.sval)); if(temp==NULL){error(6,0,(yyvsp[-3].data.idval));} if(temp!=NULL){if(temp->val_type<0){error(temp->val_type+11,0, (yyvsp[-3].data.idval));}}}  if(strlen((yyvsp[-2].data.sval))==0){if((yyvsp[0].data.val_type)==string_type || (yyvsp[0].data.val_type)==list_type){add_variable(current_scope, (yyvsp[-3].data.idval), (yyvsp[0].data.val_type), curr_line, (void*)(((yyvsp[0].data.sval)))); } else{add_variable(current_scope, (yyvsp[-3].data.idval), (yyvsp[0].data.val_type), curr_line, (void*)(&((yyvsp[0].data.numval))));}}}
#line 1507 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "[%s]", (yyvsp[-1].data.sval)); (yyval.data.val_type)=list_type;}
#line 1513 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "[]"); (yyval.data.val_type)=list_type;}
#line 1519 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "%s %s", (yyvsp[-2].data.sval), (yyvsp[0].data.sval));}
#line 1525 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "%s", (yyvsp[0].data.sval));}
#line 1531 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "%d", (int)(yyvsp[0].data.numval));}
#line 1537 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "%f", (float)(yyvsp[0].data.numval));}
#line 1543 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {sprintf((yyval.data.sval), "%s", (yyvsp[0].data.sval));}
#line 1549 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {if(inloop==0) error(11, 0, 0);}
#line 1555 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 144 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {if(inloop==0) error(12, 0, 0);}
#line 1561 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 173 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(8, flag, NULL); switch(flag){case 22: strcpy((yyval.data.sval), strcat((yyvsp[-2].data.sval), (yyvsp[0].data.sval))); (yyval.data.val_type) = string_type; break; case 20: case 21: case 23: case 2: case 12: case 32: error(8, flag, NULL); break; default: (yyval.data.numval) = (yyvsp[-2].data.numval)+(yyvsp[0].data.numval); if(flag==0 || flag==30 || flag==3 || flag==33) (yyval.data.val_type) = int_type; else (yyval.data.val_type) = float_type;}}
#line 1567 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(7, flag, NULL); switch(flag){case 20: case 21: case 22: case 23: case 2: case 12: case 32: error(7, flag, NULL); break; default: (yyval.data.numval) = (yyvsp[-2].data.numval)-(yyvsp[0].data.numval); if(flag==0 || flag==30 || flag==3 || flag==33) (yyval.data.val_type) = int_type; else (yyval.data.val_type) = float_type;}}
#line 1573 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = (yyvsp[0].data.val_type); switch((yyval.data.val_type)){ case int_type: case float_type: case bool_type: (yyval.data.numval) = (yyvsp[0].data.numval); break; case string_type: strcpy((yyval.data.sval), (yyvsp[0].data.sval)); break;}}
#line 1579 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(5, flag, NULL); switch(flag){case 12: case 21: case 22: error(5, flag, NULL); break; case 20: case 23: case 2: case 32:  error(5, flag, NULL);break; default: (yyval.data.numval) = (yyvsp[-2].data.numval)*(yyvsp[0].data.numval); if(flag==0 || flag==30 || flag==3) (yyval.data.val_type) = int_type; else (yyval.data.val_type) = float_type;}}
#line 1585 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(4, flag, NULL); switch(flag){case 20: case 21: case 22: case 23: case 2: case 12: case 32:  error(4, flag, NULL); break; default: if((yyvsp[0].data.numval)==0) error(3, 0, NULL); (yyval.data.numval) = (yyvsp[-2].data.numval)/(yyvsp[0].data.numval); (yyval.data.val_type) = float_type;}}
#line 1591 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(2, flag, NULL); switch(flag){case 20: case 21: case 22: case 23: case 2: case 12: case 32: case 1: case 10: case 11: case 13: case 31: error(2, flag, NULL); break; default: if((yyvsp[0].data.numval)==0) error(2, 0, NULL); (yyval.data.numval) = (int)(yyvsp[-2].data.numval)%(int)(yyvsp[0].data.numval); (yyval.data.val_type) = int_type;}}
#line 1597 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 181 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = (yyvsp[0].data.val_type); switch((yyval.data.val_type)){ case int_type: case float_type: case bool_type: (yyval.data.numval) = (yyvsp[0].data.numval); break; case string_type: strcpy((yyval.data.sval), (yyvsp[0].data.sval)); break;}}
#line 1603 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 183 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {int flag = (yyvsp[-2].data.val_type)*10+(yyvsp[0].data.val_type); if((yyvsp[-2].data.val_type)==4 || (yyvsp[-2].data.val_type)==5 || (yyvsp[0].data.val_type)==4 || (yyvsp[0].data.val_type)==5) error(1, flag, NULL); switch(flag){case 20: case 21: case 22: case 23: case 2: case 12: case 32: error(1, flag, NULL); break; default: (yyval.data.numval) = pow((yyvsp[-2].data.numval), (yyvsp[0].data.numval)); if(flag==0 || flag==30 || flag==3 || flag==33) (yyval.data.val_type) = int_type; else (yyval.data.val_type) = float_type;}}
#line 1609 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = (yyvsp[0].data.val_type); switch((yyval.data.val_type)){ case int_type: case float_type: case bool_type: (yyval.data.numval) = (yyvsp[0].data.numval); break; case string_type: strcpy((yyval.data.sval), (yyvsp[0].data.sval)); break;}}
#line 1615 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 186 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {(yyval.data.val_type) = (yyvsp[-1].data.val_type); switch((yyval.data.val_type)){ case int_type: case float_type: case bool_type: (yyval.data.numval) = (yyvsp[-1].data.numval); break; case string_type: strcpy((yyval.data.sval), (yyvsp[-1].data.sval)); break;}}
#line 1621 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 187 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    { (yyval.data.val_type) = (yyvsp[0].data.val_type); switch((yyval.data.val_type)){ case int_type: case float_type: case bool_type: (yyval.data.numval) = (yyvsp[0].data.numval); break; case string_type: strcpy((yyval.data.sval), (yyvsp[0].data.sval)); break;}}
#line 1627 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 188 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    { struct datatype *temp=lookup(current_scope,(yyvsp[-1].data.idval), (yyvsp[0].data.sval)); if(temp!=NULL){if(temp->val_type<0){error(temp->val_type+11,0, (yyvsp[-1].data.idval));}(yyval.data.val_type)=temp->val_type; if(temp->val_type==int_type|| temp->val_type==float_type || temp->val_type==bool_type)(yyval.data.numval)=temp->numval; else {strcpy((yyval.data.sval), temp->sval);}} else{ error(6,0,(yyvsp[-1].data.idval)); } }
#line 1633 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 193 "./SymbolTable/yfile.y" /* yacc.c:1646  */
    {add_variable(current_scope, (yyvsp[-3].data.idval), int_type, curr_line, (void*)(&temp));}
#line 1639 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
    break;


#line 1643 "./SymbolTable/y.tab.c" /* yacc.c:1646  */
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
#line 201 "./SymbolTable/yfile.y" /* yacc.c:1906  */


int error(int type, int spec, char* id)
{
	int x = spec/10;
	int y = spec%10;
	
	char types[6][10] = {"int", "float", "string", "bool", "list", "list"};
	yyerror("");
	switch(type)
	{
		case 1:
			printf("unsupported operand type(s) for ** or pow(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;

		case 2:
			printf("unsupported operand type(s) for mod(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;

		case 3:
			printf("ZeroDivisionError: integer division or modulo by zero in line %d\n", curr_line);
			break;
		
		case 4:
			printf("unsupported operand type(s) for div(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;

		case 5:
			printf("unsupported operand type(s) for mul(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;
		
		case 6:
			printf("Undefined variable %s in line %d\n", id, curr_line);
			break;

		case 7:
			printf("unsupported operand type(s) for sub(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;

		case 8:
			printf("unsupported operand type(s) for add(): %s and %s in line %d\n", types[x], types[y], curr_line);
			break;

		case 9:
			printf("index out of range in variable %s, line %d\n", id, curr_line);
			break;

		case 10:
			printf("variable %s not indexable in line %d\n", id, curr_line);
			break;

		case 11:
			printf("cannot have jump statement break outside a loop in line %d\n", curr_line);
			break;

		case 12:
			printf("cannot have jump statement continue outside a loop in line %d\n", curr_line);
			break;

	}
	exit(1);
	return 1;
}
int yyerror(const char* error)
{
	printf("Syntax Error:%s\n", error);
	return 1;
}

int main()
{
	global = (struct scope*)malloc(sizeof(struct scope));
	global->parent_scope = NULL;	
	global->next_in_scope = NULL;
	global->child_scope = NULL;
	global->var_items = NULL;
	global->position = 1;

	current_scope = global;

	if(!yyparse())
	{
		printf("Valid\n");
		print_table(global, 0);
		return 0;
	}
	return 1;
}
