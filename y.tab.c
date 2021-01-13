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
#line 1 "limbaj.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limbaj.h"
#include "functii.h"
#include "variabile.h"
extern FILE* yyin;
extern FILE* yyout;
extern char* yytext;
extern int yylineno;
extern unsigned program_status;
int yylex();
int nr_parametrii=0,pr1=0,pr2=0;
int locatie=0;
int ok=0;
int var_depth = 0, var_scope = 0;
char aux_var_current_member[300], var_current_member[300] = "global";
int valori_eval[20];
int nr_eval=0;
void yyerror(const char* error_message);

#line 89 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NR = 258,
    NRFLOAT = 259,
    ID = 260,
    STRINGS = 261,
    CHARS = 262,
    INT = 263,
    FLOAT = 264,
    BOOL = 265,
    STRING = 266,
    CHAR = 267,
    EVAL = 268,
    ASSIGN = 269,
    TOUPPER = 270,
    TOLOWER = 271,
    LENGTH = 272,
    BGIN = 273,
    END = 274,
    PRV = 275,
    PUB = 276,
    NEW = 277,
    CLASS = 278,
    IF = 279,
    WHILE = 280,
    FOR = 281,
    CONST = 282,
    GT = 283,
    LT = 284,
    EQ = 285,
    LET = 286,
    GET = 287,
    AND = 288,
    OR = 289,
    NOT = 290
  };
#endif
/* Tokens.  */
#define NR 258
#define NRFLOAT 259
#define ID 260
#define STRINGS 261
#define CHARS 262
#define INT 263
#define FLOAT 264
#define BOOL 265
#define STRING 266
#define CHAR 267
#define EVAL 268
#define ASSIGN 269
#define TOUPPER 270
#define TOLOWER 271
#define LENGTH 272
#define BGIN 273
#define END 274
#define PRV 275
#define PUB 276
#define NEW 277
#define CLASS 278
#define IF 279
#define WHILE 280
#define FOR 281
#define CONST 282
#define GT 283
#define LT 284
#define EQ 285
#define LET 286
#define GET 287
#define AND 288
#define OR 289
#define NOT 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "limbaj.y" /* yacc.c:355  */

   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;
   char charval;
   struct expr *expr_val;

#line 209 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      47,    48,    38,    36,    49,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    55,    56,    59,    60,    61,    65,    66,
      75,    82,    64,    91,    92,    93,    96,   107,   118,   131,
     146,   157,   163,   166,   167,   170,   170,   170,   170,   170,
     172,   193,   225,   246,   277,   309,   333,   333,   342,   342,
     352,   352,   361,   361,   361,   361,   361,   364,   365,   366,
     367,   368,   374,   414,   371,   432,   465,   430,   483,   484,
     487,   488,   491,   502,   513,   524,   535,   546,   547,   548,
     573,   598,   611,   642,   669,   670,   671,   674,   675,   676,
     677,   678,   681,   682,   685,   686,   687,   688,   737,   779,
     828,   870,   871,   872,   873,   874,   878,   878,   893,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   927,   961,
     978
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NR", "NRFLOAT", "ID", "STRINGS",
  "CHARS", "INT", "FLOAT", "BOOL", "STRING", "CHAR", "EVAL", "ASSIGN",
  "TOUPPER", "TOLOWER", "LENGTH", "BGIN", "END", "PRV", "PUB", "NEW",
  "CLASS", "IF", "WHILE", "FOR", "CONST", "GT", "LT", "EQ", "LET", "GET",
  "AND", "OR", "NOT", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "'{'",
  "'}'", "':'", "'['", "']'", "'('", "')'", "','", "$accept", "progr",
  "declaratii", "declaratie", "decl_clase", "$@1", "$@2", "$@3", "$@4",
  "continut_clasa", "creare_obiect", "apelare_functii", "parametrii_call",
  "param_call", "tip", "decl_variabile", "decl_const", "decl_if", "$@5",
  "decl_while", "$@6", "decl_for", "$@7", "semne", "expr_bool",
  "decl_functii", "$@8", "$@9", "$@10", "$@11", "parametrii", "param",
  "expresie", "VAL", "expresie_string", "list", "statements", "bloc",
  "$@12", "calculate", "eval_exp", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,    59,   123,   125,    58,    91,    93,    40,    41,    44
};
# endif

#define YYPACT_NINF -195

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-195)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     352,   116,  -195,  -195,  -195,  -195,  -195,   -35,    11,   289,
      36,   320,   -24,  -195,  -195,  -195,    32,  -195,  -195,  -195,
      29,  -195,    47,  -195,    70,  -195,  -195,  -195,    89,    82,
     119,    17,    10,    90,   130,  -195,   101,  -195,   127,  -195,
      28,   100,   111,   113,   155,  -195,  -195,    81,  -195,  -195,
     133,   140,   154,    82,   353,  -195,   167,   145,  -195,   156,
     168,   353,   167,  -195,    94,    10,    10,   157,  -195,   204,
    -195,   398,    82,   219,   144,   102,   102,   218,   221,   224,
      23,   223,   227,   244,   171,   -34,   110,   110,   110,   110,
     110,    61,   210,  -195,    82,   250,    76,    16,   408,    10,
      10,    10,    10,    10,  -195,  -195,    82,   249,   375,   216,
     353,   167,   212,  -195,   257,   215,   226,   102,   102,    15,
     403,    77,   251,   222,   248,  -195,   247,   255,   263,   264,
    -195,  -195,   110,    62,    62,  -195,  -195,  -195,    61,  -195,
      82,  -195,   267,  -195,   268,  -195,    16,    16,  -195,  -195,
    -195,  -195,   353,   167,    -4,  -195,   274,  -195,  -195,  -195,
     272,  -195,   289,  -195,   131,   390,   102,   102,   277,  -195,
    -195,  -195,  -195,  -195,   110,   284,   110,     5,  -195,  -195,
    -195,  -195,  -195,   353,   167,  -195,  -195,   146,  -195,   285,
     288,  -195,  -195,  -195,  -195,  -195,   398,   353,   398,   243,
     290,  -195,   220,   291,   294,   398,  -195,   298,   163,   173,
     102,  -195,   352,   352,  -195,   225,   398,  -195,  -195,   207,
     297,   343,  -195,  -195,   234,   334,   300,  -195,   327,   352,
     110,   343,   413,   307,   398,   261,  -195
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      36,     0,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    36,     0,     6,    86,    85,     0,    84,    91,    93,
       0,    94,     0,    92,     0,     7,     5,    95,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      30,     0,     0,     0,     0,    74,    75,    69,    79,    76,
       0,     0,     0,     0,    89,    68,    90,     0,    20,     0,
      22,    23,    24,   106,   107,     0,     0,     0,     8,     0,
       4,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,    98,     9,     0,     0,    36,     0,
      31,    32,     0,    55,     0,     0,    59,     0,     0,     0,
       0,     0,     0,    18,     0,    73,     0,     0,     0,     0,
      67,    78,     0,    62,    63,    64,    65,    66,     0,    77,
       0,    21,     0,   110,     0,   104,    99,   100,   101,   102,
     103,    10,    34,    35,    30,    97,     0,    82,    33,    56,
      60,    52,     0,    50,     0,     0,     0,     0,     0,    42,
      43,    44,    45,    46,     0,     0,     0,     0,    70,    72,
      80,    81,    71,    87,    88,   108,   109,     0,    83,     0,
       0,    53,    58,    47,    48,    49,    36,    51,    36,     0,
       0,    17,     0,     0,     0,    36,    61,     0,    36,    36,
       0,    16,    36,    36,    11,    36,    36,    37,    39,     0,
      13,    14,    12,    57,    36,     0,     0,    54,     0,    36,
       0,    15,     0,     0,    36,    36,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -194,    -6,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,    40,  -195,     0,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,   -72,  -195,  -195,  -195,  -195,  -195,
     180,  -195,   -28,  -195,   -22,    80,   -65,  -195,  -195,  -195,
     190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   105,   151,   187,   222,   204,
      14,    15,    59,    60,   107,    17,    18,    19,    20,    21,
      22,    23,    24,   174,   119,    25,   191,   207,   159,   189,
     115,   116,   120,    55,    62,   108,    26,    37,    38,    27,
      67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    54,    91,    61,   121,    36,   109,    56,   200,    34,
      72,    16,    32,    63,   131,    64,    33,    39,   220,   221,
      45,    46,    47,    48,    49,    84,    45,    46,    47,    48,
      49,    85,    50,    51,    52,   231,    35,    40,    50,    51,
      52,    73,    72,   156,   110,   163,   164,    65,   166,   167,
     111,   201,    61,    41,   101,   102,   103,    66,   133,   134,
     135,   136,   137,   168,    53,    58,    61,    48,    61,   139,
      53,   125,    42,    73,   114,    74,    50,    51,   152,    45,
      46,    47,    48,    49,   153,    45,    46,    47,    48,    49,
     165,    50,    51,    52,   194,   195,    43,    50,    51,    52,
      88,    89,    90,    44,    84,    45,    46,    47,   138,    49,
     166,   167,   183,    45,    46,    47,    85,    49,   184,    52,
     126,    28,    57,    53,   143,   175,    79,    52,    80,    53,
      29,   109,    68,   109,   141,    69,   144,   117,   219,    95,
     109,    96,    70,   156,   156,    71,   197,    75,   199,   118,
     156,   109,     2,     3,     4,     5,     6,   132,    76,   156,
      77,    30,   114,    31,   166,   167,   202,   203,     1,   109,
     156,     2,     3,     4,     5,     6,     7,    78,     1,   193,
      81,     2,     3,     4,     5,     6,     7,    82,   -38,   -40,
       9,    92,   113,    99,   100,   101,   102,   103,   -38,   -40,
       9,    83,   232,    91,    93,   104,   217,    86,    87,    88,
      89,    90,    16,    16,    36,    36,   218,    94,   106,   130,
      16,    16,   112,   122,   140,    36,   123,   124,   127,    16,
       1,    16,   128,     2,     3,     4,     5,     6,     7,     1,
     166,   167,     2,     3,     4,     5,     6,     7,   225,   129,
     -38,   -40,     9,   142,   154,    97,    98,   157,   158,   -38,
     -40,     9,   160,   161,   212,   176,     1,   177,   223,     2,
       3,     4,     5,     6,     7,   162,   208,   227,   209,    86,
      87,    88,    89,    90,   210,   215,   -38,   -40,     9,   146,
     147,   148,   149,   150,   178,   179,   224,     2,     3,     4,
       5,     6,     1,   180,   236,     2,     3,     4,     5,     6,
       7,   181,   182,   185,   235,   188,   186,   190,   226,   196,
       8,   -36,   -38,   -40,     9,     1,   198,   205,     2,     3,
       4,     5,     6,     7,   206,   213,   211,   214,   -96,   228,
     216,   230,   192,     8,   229,   -38,   -40,     9,     1,   234,
       0,     2,     3,     4,     5,     6,     7,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,   -36,   -38,   -40,
       9,     0,     0,     0,     0,     8,     0,   -38,   -40,     9,
       1,     0,     0,     2,     3,     4,     5,     6,     7,    86,
      87,    88,    89,    90,   155,     0,     0,     0,     0,     0,
     -38,   -40,     9,     1,     0,     0,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   -38,   -40,     9,    86,    87,    88,    89,
      90,   169,   170,   171,   172,   173,     0,     0,   130,    86,
      87,    88,    89,    90,    99,   100,   101,   102,   103,    86,
      87,    88,    89,    90,     0,     0,   145,     0,     0,     0,
       0,   233
};

static const yytype_int16 yycheck[] =
{
       0,    29,    36,    31,    76,    11,    71,    29,     3,     9,
      14,    11,    47,     3,    48,     5,     5,    41,   212,   213,
       3,     4,     5,     6,     7,    53,     3,     4,     5,     6,
       7,    53,    15,    16,    17,   229,     0,     5,    15,    16,
      17,    45,    14,   108,    72,   117,   118,    37,    33,    34,
      72,    46,    80,    24,    38,    39,    40,    47,    86,    87,
      88,    89,    90,    48,    47,    48,    94,     6,    96,    91,
      47,    48,    25,    45,    74,    47,    15,    16,   106,     3,
       4,     5,     6,     7,   106,     3,     4,     5,     6,     7,
     118,    15,    16,    17,   166,   167,    26,    15,    16,    17,
      38,    39,    40,    14,   132,     3,     4,     5,    47,     7,
      33,    34,   140,     3,     4,     5,   138,     7,   140,    17,
      80,     5,     3,    47,    48,    48,    45,    17,    47,    47,
      14,   196,    42,   198,    94,     5,    96,    35,   210,    45,
     205,    47,    41,   208,   209,    18,   174,    47,   176,    47,
     215,   216,     8,     9,    10,    11,    12,    47,    47,   224,
      47,    45,   162,    47,    33,    34,    20,    21,     5,   234,
     235,     8,     9,    10,    11,    12,    13,    22,     5,    48,
      47,     8,     9,    10,    11,    12,    13,    47,    25,    26,
      27,    46,    48,    36,    37,    38,    39,    40,    25,    26,
      27,    47,   230,    36,    48,    48,    43,    36,    37,    38,
      39,    40,   212,   213,   220,   221,    43,    49,    14,    48,
     220,   221,     3,     5,    14,   231,     5,     3,     5,   229,
       5,   231,     5,     8,     9,    10,    11,    12,    13,     5,
      33,    34,     8,     9,    10,    11,    12,    13,    41,     5,
      25,    26,    27,     3,     5,    65,    66,    41,    46,    25,
      26,    27,     5,    48,    44,    14,     5,    45,    43,     8,
       9,    10,    11,    12,    13,    49,   196,    43,   198,    36,
      37,    38,    39,    40,    41,   205,    25,    26,    27,    99,
     100,   101,   102,   103,    46,    48,   216,     8,     9,    10,
      11,    12,     5,    48,    43,     8,     9,    10,    11,    12,
      13,    48,    48,    46,   234,    41,    48,    45,    21,    42,
      23,    24,    25,    26,    27,     5,    42,    42,     8,     9,
      10,    11,    12,    13,    46,    44,    46,    43,    18,     5,
      42,    14,   162,    23,    44,    25,    26,    27,     5,    42,
      -1,     8,     9,    10,    11,    12,    13,     5,    -1,    -1,
       8,     9,    10,    11,    12,    13,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    27,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    36,
      37,    38,    39,    40,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    25,    26,    27,    36,    37,    38,    39,
      40,    28,    29,    30,    31,    32,    -1,    -1,    48,    36,
      37,    38,    39,    40,    36,    37,    38,    39,    40,    36,
      37,    38,    39,    40,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    10,    11,    12,    13,    23,    27,
      51,    52,    53,    54,    60,    61,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    75,    86,    89,     5,    14,
      45,    47,    47,     5,    64,     0,    53,    87,    88,    41,
       5,    24,    25,    26,    14,     3,     4,     5,     6,     7,
      15,    16,    17,    47,    82,    83,    84,     3,    48,    62,
      63,    82,    84,     3,     5,    37,    47,    90,    42,     5,
      41,    18,    14,    45,    47,    47,    47,    47,    22,    45,
      47,    47,    47,    47,    82,    84,    36,    37,    38,    39,
      40,    36,    46,    48,    49,    45,    47,    90,    90,    36,
      37,    38,    39,    40,    48,    55,    14,    64,    85,    86,
      82,    84,     3,    48,    64,    80,    81,    35,    47,    74,
      82,    74,     5,     5,     3,    48,    62,     5,     5,     5,
      48,    48,    47,    82,    82,    82,    82,    82,    47,    84,
      14,    62,     3,    48,    62,    48,    90,    90,    90,    90,
      90,    56,    82,    84,     5,    19,    86,    41,    46,    78,
       5,    48,    49,    74,    74,    82,    33,    34,    48,    28,
      29,    30,    31,    32,    73,    48,    14,    45,    46,    48,
      48,    48,    48,    82,    84,    46,    48,    57,    41,    79,
      45,    76,    80,    48,    74,    74,    42,    82,    42,    82,
       3,    46,    20,    21,    59,    42,    46,    77,    85,    85,
      41,    46,    44,    44,    43,    85,    42,    43,    43,    74,
      52,    52,    58,    43,    85,    41,    21,    43,     5,    44,
      14,    52,    82,    48,    42,    85,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    55,    56,
      57,    58,    54,    59,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    68,    67,    70,    69,
      72,    71,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    76,    77,    75,    78,    79,    75,    80,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    88,    87,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     0,     0,
       0,     0,     9,     3,     3,     6,     8,     7,     5,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     5,     5,     5,     0,     8,     0,     8,
       0,    16,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     0,     0,    10,     0,     0,     9,     3,     1,
       2,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       4,     4,     4,     3,     1,     1,     1,     3,     3,     1,
       4,     4,     2,     3,     1,     1,     1,     6,     6,     3,
       3,     1,     1,     1,     1,     1,     0,     4,     4,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     4,     4,
       3
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
#line 52 "limbaj.y" /* yacc.c:1646  */
    {printf("Corect.\n");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "limbaj.y" /* yacc.c:1646  */
    {locatie=1;}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "limbaj.y" /* yacc.c:1646  */
    {
               //Clase
               if(cClas((yyvsp[-2].strval))==1)
                  pushClas((yyvsp[-2].strval));
               else{
                  program_status=0;
                  printf("Linia %d: Clase %s exista deja.\n", yylineno, (yyvsp[-2].strval));
               }
            }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 75 "limbaj.y" /* yacc.c:1646  */
    {
            	// Variabile
            	var_scope++;
            	var_depth++;
            	strcpy(var_current_member, "class ");
            	strcat(var_current_member, (yyvsp[-3].strval));
            }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "limbaj.y" /* yacc.c:1646  */
    {locatie=0;}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "limbaj.y" /* yacc.c:1646  */
    {
            	// Variabile
            	var_scope--;
            	var_depth--;
            	strcpy(var_current_member, "global");
            }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "limbaj.y" /* yacc.c:1646  */
    {
              if(cClas((yyvsp[-7].strval))==0 && cClas((yyvsp[-3].strval))==0){
                   if(cObj((yyvsp[-7].strval))==1)
                  addObjects((yyvsp[-7].strval),(yyvsp[-6].strval));
                   else
                  printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, (yyvsp[-7].strval));
                  }
                  else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-7].strval));
              }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "limbaj.y" /* yacc.c:1646  */
    {
              if(cClas((yyvsp[-6].strval))==0 && cClas((yyvsp[-2].strval))==0){
                if(cObj((yyvsp[-6].strval))==1)
                addObjects((yyvsp[-6].strval),(yyvsp[-5].strval));
                else
                printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, (yyvsp[-6].strval));
                }
                else
                printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-6].strval));
              }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "limbaj.y" /* yacc.c:1646  */
    {
              if(cClas((yyvsp[-4].strval))==0 && cClas((yyvsp[0].strval))==0){
                if(cObj((yyvsp[-4].strval))==1)
                addObjects((yyvsp[-4].strval),(yyvsp[-3].strval));
                else
                printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, (yyvsp[-4].strval));
                }
                else
                printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-4].strval));
              }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 132 "limbaj.y" /* yacc.c:1646  */
    {   char aux3[100];
                    strcpy(aux3,(yyvsp[-1].strval));
                    for(int i=1;i<strlen(aux3)-1;i++)
                      if(aux3[i]==' ' && aux3[i-1]==' '){
                          strcpy(aux3+i-1,aux3+i);
                      }
                     strcpy((yyvsp[-1].strval),aux3);
                     strcat((yyvsp[-1].strval), " ");
                    if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].strval),pr2)==0)
                      printf("Linia %d : apel incorect.\n",yylineno);
                    else
                       (yyval.strval)=get_fun_type((yyvsp[-3].strval));
                    pr2=0;
                }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "limbaj.y" /* yacc.c:1646  */
    {
                if(ok==2)
                  if(checkParametrii1((yyvsp[-2].strval))==0)
                          printf("aeroare\n");
                      else
                          (yyval.strval)=get_fun_type((yyvsp[-2].strval));
                ok=0;
                }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 158 "limbaj.y" /* yacc.c:1646  */
    {
                  strcat((yyval.strval) ," ");
                  strcat((yyval.strval), (yyvsp[0].strval));
                  pr2++;
                }
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 163 "limbaj.y" /* yacc.c:1646  */
    {char aux[200]; strcpy(aux," "); strcat(aux,(yyvsp[0].strval));(yyval.strval)=aux;pr2++;}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "limbaj.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].expr_val)->type; }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 167 "limbaj.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].expr_val)->type; }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 173 "limbaj.y" /* yacc.c:1646  */
    {
            			if(checkVariableExistence((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member) != 1)
            			{
                    if(!strcmp((yyvsp[-1].type), "integer"))
                      addVariableInt((yyvsp[0].strval), var_scope, var_depth, var_current_member, 0, 0);
                    else if(!strcmp((yyvsp[-1].type), "float"))
                      addVariableFloat((yyvsp[0].strval), var_scope, var_depth, var_current_member, 0.0, 0);
                    else if(!strcmp((yyvsp[-1].type), "char"))
                      addVariableChar((yyvsp[0].strval), var_scope, var_depth, var_current_member, '\0', 0);
                    else if(!strcmp((yyvsp[-1].type), "string"))
                      addVariableString((yyvsp[0].strval), var_scope, var_depth, var_current_member, "\0", 0);
                    else if(!strcmp((yyvsp[-1].type), "other"))
                      addVariableOther((yyvsp[0].strval), var_scope, var_depth, var_current_member, "none", 0);
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[0].strval));
            			}
            		}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 194 "limbaj.y" /* yacc.c:1646  */
    {
                  // Variabile
                  if(checkVariableExistence((yyvsp[-2].strval), (yyvsp[-3].type), var_scope, var_depth, var_current_member) != 1)
            			{
                    // Check type.
                    if(strcmp((yyvsp[-3].type), (yyvsp[0].expr_val)->type))
                    {
                      program_status = 0;
                      printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                    }
                    else
                    {
                      if(!strcmp((yyvsp[-3].type), "integer"))
                        addVariableInt((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->intval, 0);
                      else if(!strcmp((yyvsp[-3].type), "float"))
                        addVariableFloat((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->floatval, 0);
                      else if(!strcmp((yyvsp[-3].type), "char"))
                        addVariableChar((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->charval, 0);
                      else if(!strcmp((yyvsp[-3].type), "string"))
                        addVariableString((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, 0);
                      else if(!strcmp((yyvsp[-3].type), "other"))
                        addVariableOther((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->otherval, 0);
                    }
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[-2].strval));
            			}
                  free_expr((yyvsp[0].expr_val));
               }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 226 "limbaj.y" /* yacc.c:1646  */
    {
                  // Variabile
                  if(checkVariableExistence((yyvsp[-2].strval), (yyvsp[-3].type), var_scope, var_depth, var_current_member) != 1)
            			{
                    // Check type.
                    if(strcmp((yyvsp[-3].type), (yyvsp[0].expr_val)->type))
                    {
                      program_status = 0;
                      printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                    }
                    else
                      addVariableString((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, 0);
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[-2].strval));
            			}
                  free_expr((yyvsp[0].expr_val));
               }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 247 "limbaj.y" /* yacc.c:1646  */
    {
                  if((yyvsp[-1].intval) > 0)
                  {
                   if(checkVariableExistence((yyvsp[-3].strval), (yyvsp[-4].type), var_scope, var_depth, var_current_member) != 1)
                   {
                     if(!strcmp((yyvsp[-4].type), "integer"))
                       addArrayVariableInt((yyvsp[-3].strval), var_scope, var_depth, var_current_member, (yyvsp[-1].intval));
                     else if(!strcmp((yyvsp[-4].type), "float"))
                       addArrayVariableFloat((yyvsp[-3].strval), var_scope, var_depth, var_current_member, (yyvsp[-1].intval));
                     else if(!strcmp((yyvsp[-4].type), "char"))
                       addArrayVariableChar((yyvsp[-3].strval), var_scope, var_depth, var_current_member, (yyvsp[-1].intval));
                     else if(!strcmp((yyvsp[-4].type), "string"))
                       addArrayVariableString((yyvsp[-3].strval), var_scope, var_depth, var_current_member, (yyvsp[-1].intval));
                     else if(!strcmp((yyvsp[-4].type), "other"))
                       addVariableOther((yyvsp[-3].strval), var_scope, var_depth, var_current_member, "none", 0);
                   }
                   else
                   {
                     program_status = 0;
                     printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[-3].strval));
                   }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Spatiul alocat trebuie sa fie mai mare decat 0.\n", yylineno);
                  }
               }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 278 "limbaj.y" /* yacc.c:1646  */
    {
               // Variabile
               if(checkVariableExistence((yyvsp[-2].strval), (yyvsp[-3].type), var_scope, var_depth, var_current_member) != 1)
               {
                 // Check type.
                 if(strcmp((yyvsp[-3].type), (yyvsp[0].expr_val)->type))
                 {
                   program_status = 0;
                   printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                 }
                 else
                 {
                   if(!strcmp((yyvsp[-3].type), "integer"))
                     addVariableInt((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->intval, 1);
                   else if(!strcmp((yyvsp[-3].type), "float"))
                     addVariableFloat((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->floatval, 1);
                   else if(!strcmp((yyvsp[-3].type), "char"))
                     addVariableChar((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->charval, 1);
                   else if(!strcmp((yyvsp[-3].type), "string"))
                     addVariableString((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, 1);
                   else if(!strcmp((yyvsp[-3].type), "other"))
                     addVariableOther((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->otherval, 1);
                 }
               }
               else
               {
                 program_status = 0;
                 printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[-2].strval));
               }
               free_expr((yyvsp[0].expr_val));
            }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 310 "limbaj.y" /* yacc.c:1646  */
    {
              // Variabile
              if(checkVariableExistence((yyvsp[-2].strval), (yyvsp[-3].type), var_scope, var_depth, var_current_member) != 1)
              {
                // Check type.
                if(strcmp((yyvsp[-3].type), (yyvsp[0].expr_val)->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                }
                else
                  addVariableString((yyvsp[-2].strval), var_scope, var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, 1);
              }
              else
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, (yyvsp[-2].strval));
              }
              free_expr((yyvsp[0].expr_val));
           }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 333 "limbaj.y" /* yacc.c:1646  */
    {
          var_depth++;
        }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 337 "limbaj.y" /* yacc.c:1646  */
    {
          var_depth--;
        }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 342 "limbaj.y" /* yacc.c:1646  */
    {
              var_depth++;
            }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 346 "limbaj.y" /* yacc.c:1646  */
    {
              var_depth--;
            }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 352 "limbaj.y" /* yacc.c:1646  */
    {
            var_depth++;
          }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 356 "limbaj.y" /* yacc.c:1646  */
    {
            var_depth--;
          }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 374 "limbaj.y" /* yacc.c:1646  */
    {
             // Variabile
             var_scope++;
             var_depth++;
             if(!strncmp(var_current_member, "class", 5))
             {
               strcpy(aux_var_current_member, var_current_member);
               strcat(var_current_member, " method ");
               char signature[300];
               strcpy(signature, (yyvsp[-4].type));
               strcat(signature, " ");
               strcat(signature, (yyvsp[-3].strval));
               strcat(signature, " ");
               strcat(signature, "(");
               strcat(signature, " ");
               strcat(signature, (yyvsp[-1].strval));
               signature[strlen(signature) - 1] = '\0';
               strcat(signature, " ");
               strcat(signature, ")");
               strcat(var_current_member, signature);
             }
             else
             {
               strcpy(aux_var_current_member, var_current_member);
               strcpy(var_current_member, "function ");
               char signature[300];
               strcpy(signature, (yyvsp[-4].type));
               strcat(signature, " ");
               strcat(signature, (yyvsp[-3].strval));
               strcat(signature, " ");
               strcat(signature, "(");
               strcat(signature, " ");
               strcat(signature, (yyvsp[-1].strval));
               signature[strlen(signature) - 1] = '\0';
               strcat(signature, " ");
               strcat(signature, ")");
               strcat(var_current_member, signature);
             }
           }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 414 "limbaj.y" /* yacc.c:1646  */
    {
               if(cFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie)==1)
                 pushFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie);
               else{
                 printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-4].strval));
                 program_status=0;
               }
              nr_parametrii=0;
           }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 424 "limbaj.y" /* yacc.c:1646  */
    {
          		// Variabile
          		var_scope--;
          		var_depth--;
          		strcpy(var_current_member, aux_var_current_member);
            }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 432 "limbaj.y" /* yacc.c:1646  */
    {
                 // Variabile
                 var_scope++;
                 var_depth++;
                 if(!strncmp(var_current_member, "class", 5))
                 {
                   strcpy(aux_var_current_member, var_current_member);
                   strcat(var_current_member, " method ");
                   char signature[300];
                   strcpy(signature, (yyvsp[-3].type));
                   strcat(signature, " ");
                   strcat(signature, (yyvsp[-2].strval));
                   strcat(signature, " ");
                   strcat(signature, "(");
                   strcat(signature, " ");
                   strcat(signature, ")");
                   strcat(var_current_member, signature);
                 }
                 else
                 {
                   strcpy(aux_var_current_member, var_current_member);
                   strcpy(var_current_member, "function ");
                   char signature[300];
                   strcpy(signature, (yyvsp[-3].type));
                   strcat(signature, " ");
                   strcat(signature, (yyvsp[-2].strval));
                   strcat(signature, " ");
                   strcat(signature, "(");
                   strcat(signature, " ");
                   strcat(signature, ")");
                   strcat(var_current_member, signature);
                 }
               }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 465 "limbaj.y" /* yacc.c:1646  */
    {
                  nr_parametrii=0;
                  if(cFunc((yyvsp[-4].type),(yyvsp[-3].strval),0,nr_parametrii,locatie)==1)
                     pushFunc((yyvsp[-4].type),(yyvsp[-3].strval),0,nr_parametrii,locatie);
                  else{
                     printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-3].strval));
                     program_status=0;
                  }
               }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 475 "limbaj.y" /* yacc.c:1646  */
    {
           		// Variabile
           		var_scope--;
           		var_depth--;
           		strcpy(var_current_member, aux_var_current_member);
             }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 483 "limbaj.y" /* yacc.c:1646  */
    {strcat((yyval.strval),(yyvsp[0].strval));}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 484 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 487 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval), (yyvsp[-1].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[0].strval)); strcat((yyval.strval), ",");nr_parametrii++; }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 488 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval), (yyvsp[-3].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[-2].strval)); strcat((yyval.strval), "[]"); strcat((yyval.strval), ",");nr_parametrii++; }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 492 "limbaj.y" /* yacc.c:1646  */
    {
            char type[100];
            strcpy(type, get_exp_type((yyvsp[-2].expr_val), (yyvsp[0].expr_val)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              (yyval.expr_val) = create_other_expr("wrong_expr");
         }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 503 "limbaj.y" /* yacc.c:1646  */
    {
            char type[100];
            strcpy(type, get_exp_type((yyvsp[-2].expr_val), (yyvsp[0].expr_val)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              (yyval.expr_val) = create_other_expr("wrong_expr");
         }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 514 "limbaj.y" /* yacc.c:1646  */
    {
            char type[100];
            strcpy(type, get_exp_type((yyvsp[-2].expr_val), (yyvsp[0].expr_val)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              (yyval.expr_val) = create_other_expr("wrong_expr");
         }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "limbaj.y" /* yacc.c:1646  */
    {
            char type[100];
            strcpy(type, get_exp_type((yyvsp[-2].expr_val), (yyvsp[0].expr_val)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              (yyval.expr_val) = create_other_expr("wrong_expr");
         }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 536 "limbaj.y" /* yacc.c:1646  */
    {
            char type[100];
            strcpy(type, get_exp_type((yyvsp[-2].expr_val), (yyvsp[0].expr_val)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              (yyval.expr_val) = create_other_expr("wrong_expr");
         }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 546 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[-1].expr_val);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 547 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = (yyvsp[0].expr_val);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 549 "limbaj.y" /* yacc.c:1646  */
    {
            if(checkVariableExistence((yyvsp[0].strval), "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[0].strval));
              (yyval.expr_val) = create_other_expr("wrong_expr");
            }
            else
            {
              char type[100];
              strcpy(type, get_var_type((yyvsp[0].strval), var_current_member, var_depth));
              variable mvar = get_var((yyvsp[0].strval), var_current_member, var_depth);
              if(!strcmp(type, "integer"))
                (yyval.expr_val) = create_int_expr(mvar.intval);
              else if(!strcmp(type, "float"))
                (yyval.expr_val) = create_float_expr(mvar.floatval);
              else if(!strcmp(type, "char"))
                (yyval.expr_val) = create_char_expr(mvar.charval);
              else if(!strcmp(type, "string"))
                (yyval.expr_val) = create_string_expr(mvar.stringval);
              else if(!strcmp(type, "other"))
                (yyval.expr_val) = create_other_expr(mvar.otherval);
            }
         }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 574 "limbaj.y" /* yacc.c:1646  */
    {
           if(checkVariableExistence((yyvsp[-3].strval), "none", var_scope, var_depth, var_current_member) == 0)
           {
             program_status = 0;
             printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-3].strval));
             (yyval.expr_val) = create_other_expr("wrong_expr");
           }
           else
           {
             char type[100];
             strcpy(type, get_var_type((yyvsp[-3].strval), var_current_member, var_depth));
             variable mvar = get_var((yyvsp[-3].strval), var_current_member, var_depth);
             if(!strcmp(type, "integer"))
               (yyval.expr_val) = create_int_expr(mvar.intval);
             else if(!strcmp(type, "float"))
               (yyval.expr_val) = create_float_expr(mvar.floatval);
             else if(!strcmp(type, "char"))
               (yyval.expr_val) = create_char_expr(mvar.charval);
             else if(!strcmp(type, "string"))
               (yyval.expr_val) = create_string_expr(mvar.stringval);
             else if(!strcmp(type, "other"))
               (yyval.expr_val) = create_other_expr(mvar.otherval);
           }
         }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 599 "limbaj.y" /* yacc.c:1646  */
    {
            if(checkVariableExistence((yyvsp[-1].strval), "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> exista.\n", yylineno, (yyvsp[-1].strval));
              (yyval.expr_val) = create_other_expr("wrong_expr");
            }
            else
            {
              (yyval.expr_val) = create_int_expr(0); // vec_size
            }
         }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 612 "limbaj.y" /* yacc.c:1646  */
    { char aux3[100];
          strcpy(aux3,(yyvsp[-1].strval));
          for(int i=1;i<strlen(aux3)-1;i++)
             if(aux3[i]==' ' && aux3[i-1]==' '){
                  strcpy(aux3+i,aux3+i+1);
                  }
          strcpy((yyvsp[-1].strval),aux3);
          if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].strval),pr1)==0) // verificare daca functia chiar exista
          {
            pr1 = 0;
            printf("Linia %d: Functia %s nu exista.\n", yylineno, (yyvsp[-3].strval));
            (yyval.expr_val) = create_other_expr("wrong_expr");
          }
          else
            {
              char type[100];
              strcpy(type, get_fun_type((yyvsp[-3].strval)));
              if(!strcmp(type, "integer"))
                (yyval.expr_val) = create_int_expr(0);
              else if(!strcmp(type, "float"))
                (yyval.expr_val) = create_float_expr(0.0);
              else if(!strcmp(type, "char"))
                (yyval.expr_val) = create_char_expr('0');
              else if(!strcmp(type, "string"))
                (yyval.expr_val) = create_string_expr("0");
              else if(!strcmp(type, "other"))
                (yyval.expr_val) = create_other_expr("other");
            }
         pr1=0;
        }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 643 "limbaj.y" /* yacc.c:1646  */
    {
         if(checkParametrii1((yyvsp[-2].strval))==0) // verificare daca functia chiar exista
         {
           pr1 = 0;
           printf("Linia %d: Functia %s nu exista.\n", yylineno, (yyvsp[-2].strval));
           (yyval.expr_val) = create_other_expr("wrong_expr");
         }
         else
         {
            char type[100];
            strcpy(type, get_fun_type((yyvsp[-2].strval)));
            if(!strcmp(type, "integer"))
              (yyval.expr_val) = create_int_expr(0);
            else if(!strcmp(type, "float"))
              (yyval.expr_val) = create_float_expr(0.0);
            else if(!strcmp(type, "char"))
              (yyval.expr_val) = create_char_expr('0');
            else if(!strcmp(type, "string"))
              (yyval.expr_val) = create_string_expr("0");
            else if(!strcmp(type, "other"))
              (yyval.expr_val) = create_other_expr("other");
          pr1=0;
         }
         }
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 669 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_int_expr((yyvsp[0].intval));}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 670 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_float_expr((yyvsp[0].floatval));}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 671 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_char_expr((yyvsp[0].charval));}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 674 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_string_expr("expr");}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 675 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_string_expr("expr");}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 676 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_string_expr((yyvsp[0].strval));}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 677 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_string_expr("expr");}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 678 "limbaj.y" /* yacc.c:1646  */
    {(yyval.expr_val) = create_string_expr("expr");}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 689 "limbaj.y" /* yacc.c:1646  */
    {
              // Variabile
              if(checkVariableExistence((yyvsp[-5].strval), "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-5].strval));
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type((yyvsp[-5].strval), var_current_member, var_depth));
                if(strcmp(vtype, (yyvsp[0].expr_val)->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize((yyvsp[-5].strval), var_depth, var_current_member);
                  if(!checkConst((yyvsp[-5].strval), var_depth, var_current_member))
                  {
                    if((yyvsp[-3].intval) >= 0 && (yyvsp[-3].intval) < sz)
                    {
                      if(!strcmp(vtype, "integer"))
                        changeArrayIntVal((yyvsp[-5].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->intval, (yyvsp[-3].intval));
                      else if(!strcmp(vtype, "float"))
                        changeArrayFloatVal((yyvsp[-5].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->floatval, (yyvsp[-3].intval));
                      else if(!strcmp(vtype, "char"))
                        changeArrayCharVal((yyvsp[-5].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->charval, (yyvsp[-3].intval));
                      else if(!strcmp(vtype, "string"))
                        changeArrayStringVal((yyvsp[-5].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, (yyvsp[-3].intval));
                    }
                    else
                    {
                      program_status = 0;
                      printf("Linia %d: Index out of range.\n", yylineno);
                    }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Valoarea unei constante nu poate fi schimbata.\n", yylineno);
                  }
                }
              }
              free_expr((yyvsp[0].expr_val));
           }
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 738 "limbaj.y" /* yacc.c:1646  */
    {
              // Variabile
              if(checkVariableExistence((yyvsp[-5].strval), "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-5].strval));
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type((yyvsp[-5].strval), var_current_member, var_depth));
                if(strcmp(vtype, (yyvsp[0].expr_val)->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize((yyvsp[-5].strval), var_depth, var_current_member);
                  if(!checkConst((yyvsp[-5].strval), var_depth, var_current_member))
                  {
                    if((yyvsp[-3].intval) >= 0 && (yyvsp[-3].intval) < sz)
                    {
                      changeArrayStringVal((yyvsp[-5].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->stringval, (yyvsp[-3].intval));
                    }
                    else
                    {
                      program_status = 0;
                      printf("Linia %d: Index out of range.\n", yylineno);
                    }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Valoarea unei constante nu poate fi schimbata.\n", yylineno);
                  }
                }
              }
              free_expr((yyvsp[0].expr_val));
           }
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 780 "limbaj.y" /* yacc.c:1646  */
    {
              // Variabile
              if(checkVariableExistence((yyvsp[-2].strval), "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-2].strval));
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type((yyvsp[-2].strval), var_current_member, var_depth));
                if(strcmp(vtype, (yyvsp[0].expr_val)->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize((yyvsp[-2].strval), var_depth, var_current_member);
                  if(!checkConst((yyvsp[-2].strval), var_depth, var_current_member))
                  {
                    if(sz == 0)
                    {
                      if(!strcmp(vtype, "integer"))
                        changeIntVal((yyvsp[-2].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->intval);
                      else if(!strcmp(vtype, "float"))
                        changeFloatVal((yyvsp[-2].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->floatval);
                      else if(!strcmp(vtype, "char"))
                        changeCharVal((yyvsp[-2].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->charval);
                      else if(!strcmp(vtype, "string"))
                        changeStringVal((yyvsp[-2].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->stringval);
                    }
                    else
                    {
                      program_status = 0;
                      printf("Linia %d: Array ul are nevoie de un index pentru operatia de asignare.\n", yylineno);
                    }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Valoarea unei constante nu poate fi schimbata.\n", yylineno);
                  }
                }
              }
              free_expr((yyvsp[0].expr_val));
           }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 829 "limbaj.y" /* yacc.c:1646  */
    {
              // Variabile
              if(checkVariableExistence((yyvsp[-2].strval), "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-2].strval));
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type((yyvsp[-2].strval), var_current_member, var_depth));
                if(strcmp(vtype, (yyvsp[0].expr_val)->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize((yyvsp[-2].strval), var_depth, var_current_member);
                  if(!checkConst((yyvsp[-2].strval), var_depth, var_current_member))
                  {
                    if(sz == 0)
                    {
                      changeStringVal((yyvsp[-2].strval), var_depth, var_current_member, (yyvsp[0].expr_val)->stringval);
                    }
                    else
                    {
                      program_status = 0;
                      printf("Linia %d: Index out of range.\n", yylineno);
                    }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Valoarea unei constante nu poate fi schimbata.\n", yylineno);
                  }
                }
              }
              free_expr((yyvsp[0].expr_val));
           }
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 878 "limbaj.y" /* yacc.c:1646  */
    {
		// Variabile
		var_scope++;
		var_depth++;
		strcpy(var_current_member, "main");
	}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 885 "limbaj.y" /* yacc.c:1646  */
    {
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, "global");
	}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 893 "limbaj.y" /* yacc.c:1646  */
    { valori_eval[nr_eval++]=(yyvsp[-1].intval);}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 896 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 897 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 898 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 899 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 900 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 901 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-1].intval);}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 902 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = -(yyvsp[0].intval);}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 903 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 905 "limbaj.y" /* yacc.c:1646  */
    {
            if(checkVariableExistence((yyvsp[0].strval), "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[0].strval));
              (yyval.intval) = 0;
            }
            else
            {
              char type[100];
              strcpy(type, get_var_type((yyvsp[0].strval), var_current_member, var_depth));
              variable mvar = get_var((yyvsp[0].strval), var_current_member, var_depth);
              if(!strcmp(type, "integer"))
                 (yyval.intval) = mvar.intval;
              else
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> trebuie sa fie integer.\n", yylineno, (yyvsp[0].strval));
                (yyval.intval) = 0;
              }
            }
         }
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 927 "limbaj.y" /* yacc.c:1646  */
    {
            if(checkVariableExistence((yyvsp[-3].strval), "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, (yyvsp[-3].strval));
              (yyval.intval) = 0;
            }
            else
            {
              char type[100];
              strcpy(type, get_var_type((yyvsp[-3].strval), var_current_member, var_depth));
              variable mvar = get_var((yyvsp[-3].strval), var_current_member, var_depth);
              if(!strcmp(type, "integer"))
              {
              	    int sz = mvar.vec_size;
		    if(sz > 0 && (yyvsp[-1].intval) >= 0 && (yyvsp[-1].intval) < sz)
		    {
		      (yyval.intval) = (mvar.vec_intval)[(yyvsp[-1].intval)];
		    }
		    else
		    {
		      program_status = 0;
		      printf("Linia %d: Out of range.\n", yylineno);
		      (yyval.intval) = 0;
		    }
              }
              else
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> trebuie sa fie integer.\n", yylineno, (yyvsp[-3].strval));
                (yyval.intval) = 0;
              }
            }
         }
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 961 "limbaj.y" /* yacc.c:1646  */
    {
        			if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].strval),pr1)==0)
              {
                printf("Eroare linia %d: functia %s nu exista \n",yylineno,(yyvsp[-3].strval));
                program_status = 0;
              }
              else
              {
                  if(strcmp(get_fun_type((yyvsp[-3].strval)), "integer"))
                  {
                    printf("Eroare linia %d: functia %s nu este de tipul integer. \n",yylineno,(yyvsp[-3].strval));
                    program_status = 0;
                  }
        				   (yyval.intval)=0;
              }
                pr1=0;
		       }
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 978 "limbaj.y" /* yacc.c:1646  */
    {
          			if(checkParametrii1((yyvsp[-2].strval))==0)
                {
                  printf("Eroare linia %d: functia %s nu exista \n",yylineno,(yyvsp[-2].strval));
                }
                 else
                 {
                 if(strcmp(get_fun_type((yyvsp[-2].strval)), "integer"))
                 {
                   printf("Eroare linia %d: functia %s nu este de tipul integer. \n",yylineno,(yyvsp[-2].strval));
                   program_status = 0;
                 }
                  (yyval.intval)=0;
          				   (yyval.intval)=0;
                     }
                pr1=0;
  		       }
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2712 "y.tab.c" /* yacc.c:1646  */
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
#line 996 "limbaj.y" /* yacc.c:1906  */


void yyerror(const char* error_message)
{
   printf("Line %d: %s\n", yylineno, error_message);
}

int main(int argc, char** argv){
   // Input file
   yyin=fopen(argv[1],"r");
   yyparse();
   print_results();
   printFunctii();
   printClase();
   if(program_status==1){
    for(int i=0;i<nr_eval;i++)
      printf("%d ",valori_eval[i]);
    printf("\n");
   }
   printVars();
   fclose(yyin);
}
