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

void yyerror(const char* error_message);

#line 88 "y.tab.c" /* yacc.c:339  */

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
#line 22 "limbaj.y" /* yacc.c:355  */

   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;

#line 206 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

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
       0,    47,    47,    50,    51,    54,    55,    56,    60,    61,
      70,    77,    59,    86,    87,    88,    91,    98,   105,   114,
     124,   135,   144,   147,   148,   151,   151,   151,   151,   151,
     153,   163,   172,   173,   176,   177,   181,   181,   190,   190,
     200,   200,   209,   209,   209,   209,   209,   212,   213,   214,
     215,   216,   222,   261,   219,   278,   277,   290,   291,   294,
     295,   298,   299,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   325,   334,   335,   336,   339,   340,
     341,   342,   343,   346,   347,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   364,   364,   379,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391
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
  "decl_functii", "$@8", "$@9", "$@10", "parametrii", "param", "param_f",
  "expresie", "VAL", "expresie_string", "list", "statements", "bloc",
  "$@11", "calculate", "eval_exp", YY_NULLPTR
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

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     313,    74,  -179,  -179,  -179,  -179,  -179,   -40,    13,   342,
      37,   281,   -17,  -179,  -179,  -179,    41,  -179,  -179,  -179,
      88,  -179,    23,  -179,    76,  -179,  -179,  -179,   100,    66,
     113,    16,    81,    80,   122,  -179,    92,  -179,   117,  -179,
      20,    89,    94,   101,   127,  -179,  -179,    50,  -179,  -179,
     114,   123,   128,    66,   320,  -179,   133,   107,  -179,   129,
     125,   320,   133,  -179,   140,    81,    81,   369,  -179,   164,
    -179,   359,    66,   183,    95,    73,    73,   210,   211,   185,
       9,   212,   216,   218,   374,    39,    38,    38,    38,    38,
      38,    85,   223,  -179,    66,   221,    91,   387,    81,    81,
      81,    81,    81,  -179,  -179,    24,   224,   336,   197,   320,
     133,   199,  -179,   241,   202,   213,    73,    73,     6,   364,
      77,   245,   227,   214,    38,  -179,   225,   215,   228,   229,
     230,  -179,  -179,   126,   126,  -179,  -179,  -179,    85,  -179,
     272,  -179,   234,  -179,    91,    91,  -179,  -179,  -179,  -179,
    -179,  -179,    78,  -179,   220,  -179,  -179,   246,   242,  -179,
     342,  -179,   172,   351,    73,    73,   253,  -179,  -179,  -179,
    -179,  -179,    38,   254,    38,     1,  -179,  -179,    38,  -179,
    -179,  -179,  -179,  -179,     8,  -179,   359,   251,  -179,  -179,
    -179,  -179,  -179,   359,   320,   359,   337,   252,  -179,  -179,
     256,   257,   259,   146,  -179,   261,   171,   182,    73,  -179,
     313,   313,  -179,  -179,   359,  -179,  -179,   106,   258,   304,
    -179,   222,   300,   266,  -179,   297,   313,    38,   304,   392,
     277,   359,   231,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      36,     0,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    36,     0,     6,    87,    86,     0,    85,    91,    93,
       0,    94,     0,    92,     0,     7,     5,    95,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      30,     0,     0,     0,     0,    75,    76,    70,    80,    77,
       0,     0,     0,     0,    89,    69,    90,     0,    20,     0,
      22,    23,    24,   106,   107,     0,     0,     0,     8,     0,
       4,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,   105,     0,     0,     0,
       0,     0,     0,    98,     9,     0,     0,    36,     0,    31,
      32,     0,    55,     0,     0,    58,     0,     0,     0,     0,
       0,     0,    18,     0,     0,    74,     0,    61,     0,     0,
       0,    68,    79,    63,    64,    65,    66,    67,     0,    78,
       0,    21,     0,   104,    99,   100,   101,   102,   103,    10,
      34,    35,    30,    97,     0,    83,    33,     0,    59,    52,
       0,    50,     0,     0,     0,     0,     0,    42,    43,    44,
      45,    46,     0,     0,     0,     0,    71,    73,     0,    81,
      82,    72,    88,   108,     0,    84,    36,     0,    53,    57,
      47,    48,    49,    36,    51,    36,     0,     0,    17,    62,
       0,     0,     0,    36,    60,     0,    36,    36,     0,    16,
      36,    36,    11,    56,    36,    37,    39,     0,    13,    14,
      12,    36,     0,     0,    54,     0,    36,     0,    15,     0,
       0,    36,    36,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -117,    -6,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,   226,  -179,     0,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,   -66,  -179,  -179,  -179,  -179,   173,
    -179,   154,   -28,  -179,   -23,  -178,   -69,  -179,  -179,  -179,
     102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   104,   149,   184,   220,   202,
      14,    15,    59,    60,   106,    17,    18,    19,    20,    21,
      22,    23,    24,   172,   118,    25,   188,   205,   157,   114,
     115,   126,   119,    55,    62,   107,    26,    37,    38,    27,
      67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    54,   108,    61,   197,    36,    56,    32,   203,    34,
     120,    16,    45,    46,    47,   206,    49,   207,    33,    45,
      46,    47,    48,    49,    39,    84,    52,   150,   200,   201,
      85,    50,    51,    52,    72,   151,   221,    35,   154,   164,
     165,    45,    46,    47,   109,    49,    40,   198,    42,   110,
     161,   162,   127,   232,   166,    52,   124,   125,   133,   134,
     135,   136,   137,    53,    58,    73,    61,    74,   139,    45,
      46,    47,    48,    49,   113,    91,    45,    46,    47,    28,
      49,    50,    51,    52,    63,   124,    64,   132,    29,   163,
      52,    48,    72,   218,   219,    79,    84,    80,   191,   192,
      50,    51,    43,     2,     3,     4,     5,     6,   116,   228,
     164,   165,    41,    53,    44,    85,    57,   108,    65,    30,
     117,    31,    68,    73,   108,   173,   108,    69,    66,   100,
     101,   102,   138,    70,   154,    71,    75,   154,   154,   164,
     165,    76,   217,   112,   194,   108,   196,   222,    77,    78,
     127,     1,   154,    92,     2,     3,     4,     5,     6,     7,
     113,    81,   108,   154,    88,    89,    90,    96,    97,    91,
      82,   -38,   -40,     9,    94,    83,     1,    93,   105,     2,
       3,     4,     5,     6,     7,    95,   111,     1,   123,   213,
       2,     3,     4,     5,     6,     7,   -38,   -40,     9,   229,
     144,   145,   146,   147,   148,   164,   165,   -38,   -40,     9,
      16,    16,    36,    36,   215,   121,   122,   128,    16,    16,
     190,   129,    36,   130,   142,   216,    16,     1,    16,   152,
       2,     3,     4,     5,     6,     7,     1,   140,   155,     2,
       3,     4,     5,     6,     7,   156,   158,   -38,   -40,     9,
     159,    86,    87,    88,    89,    90,   -38,   -40,     9,   174,
     176,   185,   160,     1,   178,   224,     2,     3,     4,     5,
       6,     7,   175,   177,   233,   182,   179,   180,   181,   223,
     183,     8,   -36,   -38,   -40,     9,     1,   187,   186,     2,
       3,     4,     5,     6,     7,   193,   195,   204,   209,   -96,
     210,   211,   212,   214,     8,   225,   -38,   -40,     9,     1,
     226,   227,     2,     3,     4,     5,     6,     7,     1,   231,
     141,     2,     3,     4,     5,     6,     7,     8,   -36,   -38,
     -40,     9,   199,   189,     0,     0,     8,     0,   -38,   -40,
       9,     1,     0,     0,     2,     3,     4,     5,     6,     7,
       2,     3,     4,     5,     6,   153,    86,    87,    88,    89,
      90,   -38,   -40,     9,     1,     0,     0,     2,     3,     4,
       5,     6,     7,    86,    87,    88,    89,    90,   208,   167,
     168,   169,   170,   171,   -38,   -40,     9,    86,    87,    88,
      89,    90,   167,   168,   169,   170,   171,     0,     0,   131,
      86,    87,    88,    89,    90,    98,    99,   100,   101,   102,
      86,    87,    88,    89,    90,     0,     0,   103,     0,     0,
       0,     0,   131,    98,    99,   100,   101,   102,    86,    87,
      88,    89,    90,     0,     0,   143,     0,     0,     0,     0,
     230
};

static const yytype_int16 yycheck[] =
{
       0,    29,    71,    31,     3,    11,    29,    47,   186,     9,
      76,    11,     3,     4,     5,   193,     7,   195,     5,     3,
       4,     5,     6,     7,    41,    53,    17,     3,    20,    21,
      53,    15,    16,    17,    14,    11,   214,     0,   107,    33,
      34,     3,     4,     5,    72,     7,     5,    46,    25,    72,
     116,   117,    80,   231,    48,    17,    47,    48,    86,    87,
      88,    89,    90,    47,    48,    45,    94,    47,    91,     3,
       4,     5,     6,     7,    74,    36,     3,     4,     5,     5,
       7,    15,    16,    17,     3,    47,     5,    48,    14,   117,
      17,     6,    14,   210,   211,    45,   124,    47,   164,   165,
      15,    16,    26,     8,     9,    10,    11,    12,    35,   226,
      33,    34,    24,    47,    14,   138,     3,   186,    37,    45,
      47,    47,    42,    45,   193,    48,   195,     5,    47,    38,
      39,    40,    47,    41,   203,    18,    47,   206,   207,    33,
      34,    47,   208,    48,   172,   214,   174,    41,    47,    22,
     178,     5,   221,    46,     8,     9,    10,    11,    12,    13,
     160,    47,   231,   232,    38,    39,    40,    65,    66,    36,
      47,    25,    26,    27,    49,    47,     5,    48,    14,     8,
       9,    10,    11,    12,    13,    45,     3,     5,     3,    43,
       8,     9,    10,    11,    12,    13,    25,    26,    27,   227,
      98,    99,   100,   101,   102,    33,    34,    25,    26,    27,
     210,   211,   218,   219,    43,     5,     5,     5,   218,   219,
      48,     5,   228,     5,     3,    43,   226,     5,   228,     5,
       8,     9,    10,    11,    12,    13,     5,    14,    41,     8,
       9,    10,    11,    12,    13,    46,     5,    25,    26,    27,
      48,    36,    37,    38,    39,    40,    25,    26,    27,    14,
      46,    41,    49,     5,    49,    43,     8,     9,    10,    11,
      12,    13,    45,    48,    43,     3,    48,    48,    48,    21,
      46,    23,    24,    25,    26,    27,     5,    45,    42,     8,
       9,    10,    11,    12,    13,    42,    42,    46,    46,    18,
      44,    44,    43,    42,    23,     5,    25,    26,    27,     5,
      44,    14,     8,     9,    10,    11,    12,    13,     5,    42,
      94,     8,     9,    10,    11,    12,    13,    23,    24,    25,
      26,    27,   178,   160,    -1,    -1,    23,    -1,    25,    26,
      27,     5,    -1,    -1,     8,     9,    10,    11,    12,    13,
       8,     9,    10,    11,    12,    19,    36,    37,    38,    39,
      40,    25,    26,    27,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    36,    37,    38,    39,    40,    41,    28,
      29,    30,    31,    32,    25,    26,    27,    36,    37,    38,
      39,    40,    28,    29,    30,    31,    32,    -1,    -1,    48,
      36,    37,    38,    39,    40,    36,    37,    38,    39,    40,
      36,    37,    38,    39,    40,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    48,    36,    37,    38,    39,    40,    36,    37,
      38,    39,    40,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      48
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
      40,    36,    46,    48,    49,    45,    90,    90,    36,    37,
      38,    39,    40,    48,    55,    14,    64,    85,    86,    82,
      84,     3,    48,    64,    79,    80,    35,    47,    74,    82,
      74,     5,     5,     3,    47,    48,    81,    82,     5,     5,
       5,    48,    48,    82,    82,    82,    82,    82,    47,    84,
      14,    62,     3,    48,    90,    90,    90,    90,    90,    56,
       3,    11,     5,    19,    86,    41,    46,    78,     5,    48,
      49,    74,    74,    82,    33,    34,    48,    28,    29,    30,
      31,    32,    73,    48,    14,    45,    46,    48,    49,    48,
      48,    48,     3,    46,    57,    41,    42,    45,    76,    79,
      48,    74,    74,    42,    82,    42,    82,     3,    46,    81,
      20,    21,    59,    85,    46,    77,    85,    85,    41,    46,
      44,    44,    43,    43,    42,    43,    43,    74,    52,    52,
      58,    85,    41,    21,    43,     5,    44,    14,    52,    82,
      48,    42,    85,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    55,    56,
      57,    58,    54,    59,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    68,    67,    70,    69,
      72,    71,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    76,    77,    75,    78,    75,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    88,    87,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     0,     0,
       0,     0,     9,     3,     3,     6,     8,     7,     5,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     5,     5,     5,     0,     8,     0,     8,
       0,    16,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     0,     0,    10,     0,     8,     3,     1,     2,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     4,     4,     4,     3,     1,     1,     1,     3,     3,
       1,     4,     4,     2,     3,     1,     1,     1,     6,     3,
       3,     1,     1,     1,     1,     1,     0,     4,     4,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     4
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
#line 47 "limbaj.y" /* yacc.c:1646  */
    {printf("Corect.\n");}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "limbaj.y" /* yacc.c:1646  */
    {locatie=1;}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "limbaj.y" /* yacc.c:1646  */
    {
               //Clase
               if(cClas((yyvsp[-2].strval))==1)
                  pushClas((yyvsp[-2].strval));
               else{
                  program_status=0;
                  printf("Linia %d: Clase %s exista deja.\n", yylineno, (yyvsp[-2].strval));
               }
            }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "limbaj.y" /* yacc.c:1646  */
    {
            	// Variabile
            	var_scope++;
            	var_depth++;
            	strcpy(var_current_member, "class ");
            	strcat(var_current_member, (yyvsp[-3].strval));
            }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 77 "limbaj.y" /* yacc.c:1646  */
    {locatie=0;}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "limbaj.y" /* yacc.c:1646  */
    {
            	// Variabile
            	var_scope--;
            	var_depth--;
            	strcpy(var_current_member, "global");
            }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "limbaj.y" /* yacc.c:1646  */
    {
                if(cObj((yyvsp[-7].strval))==1)
                  addObjects((yyvsp[-7].strval),(yyvsp[-6].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-7].strval));
              }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "limbaj.y" /* yacc.c:1646  */
    {
                if(cObj((yyvsp[-6].strval))==1)
                  addObjects((yyvsp[-6].strval),(yyvsp[-5].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-6].strval));
              }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 106 "limbaj.y" /* yacc.c:1646  */
    {
                if(cObj((yyvsp[-4].strval))==1)
                  addObjects((yyvsp[-4].strval),(yyvsp[-3].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-4].strval));
              }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "limbaj.y" /* yacc.c:1646  */
    {
                    if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].strval),pr2)==0)
                      printf("Eroare linia %d : parametrii nu se potrivesc \n",yylineno);
                    else
                      if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].strval),pr2)==2)
                        printf("Eroare linia %d : functia %s nu exista \n",yylineno,(yyvsp[-3].strval));
                    ok=0;
                    pr2=0;
                }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "limbaj.y" /* yacc.c:1646  */
    {
                if(ok==2)
                  if(checkParametrii1((yyvsp[-2].strval))==0)
                          printf("aeroare\n");
                      else
                          (yyval.strval)=get_fun_type((yyvsp[-2].strval));
                ok=0;
                }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "limbaj.y" /* yacc.c:1646  */
    {
                  char params[1000];
                  strcpy(params, (yyval.strval));
                  strcat(params, " ");
                  strcat(params, (yyvsp[0].strval));
                  (yyval.strval) = params;
                  pr2++;
                }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 144 "limbaj.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].strval);pr2++;}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "limbaj.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].type);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 148 "limbaj.y" /* yacc.c:1646  */
    {(yyval.strval)= (yyvsp[0].type);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "limbaj.y" /* yacc.c:1646  */
    {
            			if(!checkVariableExistence((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member))
            				addVariable((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member);
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila %s exista deja.\n", yylineno, (yyvsp[0].strval));
            			}
            		}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 164 "limbaj.y" /* yacc.c:1646  */
    {
                  // Variabile
                  if(strcmp((yyvsp[-3].type), (yyvsp[0].type)))
                  {
                    program_status = 0;
                    printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                  }
               }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 181 "limbaj.y" /* yacc.c:1646  */
    {
          var_depth++;
        }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 185 "limbaj.y" /* yacc.c:1646  */
    {
          var_depth--;
        }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "limbaj.y" /* yacc.c:1646  */
    {
              var_depth++;
            }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 194 "limbaj.y" /* yacc.c:1646  */
    {
              var_depth--;
            }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 200 "limbaj.y" /* yacc.c:1646  */
    {
            var_depth++;
          }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 204 "limbaj.y" /* yacc.c:1646  */
    {
            var_depth--;
          }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 222 "limbaj.y" /* yacc.c:1646  */
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
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "limbaj.y" /* yacc.c:1646  */
    {
                if(cFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie)==1)
                  pushFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie);
                else{
                  printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-4].strval));
                  program_status=0;
                }
               nr_parametrii=0;
            }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 271 "limbaj.y" /* yacc.c:1646  */
    {
          		// Variabile
          		var_scope--;
          		var_depth--;
          		strcpy(var_current_member, aux_var_current_member);
            }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 278 "limbaj.y" /* yacc.c:1646  */
    {
                  nr_parametrii=0;
                  if(cFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie)==1)
                     pushFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie);
                  else{
                     printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-2].strval));
                     program_status=0;
                  }
               }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 290 "limbaj.y" /* yacc.c:1646  */
    {strcat((yyval.strval),(yyvsp[0].strval));}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 291 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 294 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval), (yyvsp[-1].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[0].strval)); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 295 "limbaj.y" /* yacc.c:1646  */
    {strcpy((yyval.strval), (yyvsp[-3].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[-2].strval)); strcat((yyval.strval), "[]"); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 298 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)=(yyvsp[0].type); pr1++;}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 300 "limbaj.y" /* yacc.c:1646  */
    {
                  char params[1000];
                  strcpy(params, (yyval.type));
                  strcat(params, " ");
                  strcat(params, (yyvsp[0].type));
                  (yyval.type) = params;
                  pr1++;
          }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 308 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 309 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 310 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 311 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 312 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 313 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-1].type);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 314 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 315 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_var_type((yyvsp[0].strval), var_current_member, var_depth);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 316 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = get_var_type((yyvsp[-3].strval), var_current_member, var_depth);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 317 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = "integer";}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 318 "limbaj.y" /* yacc.c:1646  */
    { ok++;
                                if(checkParametrii2((yyvsp[-3].strval),(yyvsp[-1].type),pr1)==0)
                                  printf("Eroare linia %d: functia %s are tip diferit\n",yylineno,(yyvsp[-3].strval));
                                else
                                  (yyval.type)=get_fun_type((yyvsp[-3].strval));
                                pr1=0;
                              }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 325 "limbaj.y" /* yacc.c:1646  */
    {
                      ok++;
                      if(checkParametrii1((yyvsp[-2].strval))==0)
                          printf("aeroare\n");
                      else
                          (yyval.type)=get_fun_type((yyvsp[-2].strval));
                     }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 334 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = "integer";}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 335 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = "float";}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 336 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type) = "char";}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 339 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)="string";}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 340 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)="string";}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 341 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)="string";}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 342 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)="string";}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 343 "limbaj.y" /* yacc.c:1646  */
    {(yyval.type)="string";}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 364 "limbaj.y" /* yacc.c:1646  */
    {
		// Variabile
		var_scope++;
		var_depth++;
		strcpy(var_current_member, "main");
	}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 371 "limbaj.y" /* yacc.c:1646  */
    {
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, "global");
	}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 379 "limbaj.y" /* yacc.c:1646  */
    {if(program_status==1) printf("Valoare: %i\n", (yyvsp[-1].intval));}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 382 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 383 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 384 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 385 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 386 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 387 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-1].intval);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 388 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = -(yyvsp[0].intval);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 389 "limbaj.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 390 "limbaj.y" /* yacc.c:1646  */
    {;}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 391 "limbaj.y" /* yacc.c:1646  */
    {;}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2066 "y.tab.c" /* yacc.c:1646  */
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
#line 395 "limbaj.y" /* yacc.c:1906  */


void yyerror(const char* error_message)
{
   printf("Line %d: %s\n", yylineno, error_message);
}

int main(int argc, char** argv){
   // Input file
   yyin=fopen(argv[1],"r");
   // Tables configuration
   tables_config();

   yyparse();
   printf("   Variabile: \n");
   printVars(NULL);
   printf("   Functii: \n");
   printFunctii();
   printf("   Clase: \n");
   printClase();
   print_results();
   fclose(yyin);
}
