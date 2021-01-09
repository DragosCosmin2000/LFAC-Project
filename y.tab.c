/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

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
int nr_parametrii=0;
int locatie=0;

char exp_type[100] = "none";
int var_depth = 0, var_scope = 0;
char aux_var_current_member[300], var_current_member[300] = "global";

void yyerror(const char* error_message);

#line 93 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    OR = 289
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "limbaj.y"

   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;

#line 221 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      44,    45,    37,    35,    48,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    51,    52,    55,    56,    57,    61,    62,
      69,    60,    78,    79,    80,    83,    84,    87,    88,    89,
      92,    93,    96,    97,   100,   100,   100,   100,   100,   102,
     112,   113,   114,   117,   118,   122,   122,   131,   131,   141,
     141,   150,   150,   150,   150,   150,   153,   154,   155,   156,
     161,   171,   159,   195,   194,   207,   208,   211,   212,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     228,   229,   230,   233,   234,   235,   236,   237,   240,   241,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     257,   263,   257,   272,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284
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
  "AND", "OR", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "'{'", "'}'",
  "':'", "'('", "')'", "'['", "']'", "','", "$accept", "progr",
  "declaratii", "declaratie", "decl_clase", "$@1", "$@2", "$@3",
  "continut_clasa", "apelare_functii", "creare_obiect", "parametrii_call",
  "param_call", "tip", "decl_variabile", "decl_const", "decl_if", "$@4",
  "decl_while", "$@5", "decl_for", "$@6", "semne", "expr_bool",
  "decl_functii", "$@7", "$@8", "$@9", "parametrii", "param", "expresie",
  "VAL", "expresie_string", "list", "statements", "bloc", "$@10", "$@11",
  "calculate", "eval_exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    43,    45,    42,    47,    37,
      59,   123,   125,    58,    40,    41,    91,    93,    44
};
# endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     333,    39,  -155,  -155,  -155,  -155,  -155,   -39,    20,   390,
      29,   301,    -9,  -155,  -155,  -155,    31,  -155,  -155,  -155,
      10,  -155,    24,  -155,    47,  -155,  -155,  -155,    79,    11,
      99,    81,    54,   102,  -155,    84,  -155,   108,  -155,    48,
      90,    92,    97,   125,  -155,  -155,   -36,  -155,  -155,    98,
     105,   106,    11,  -155,   419,  -155,   117,  -155,   111,   109,
     419,   117,  -155,   107,    81,    81,   335,  -155,   149,  -155,
     379,    11,   157,   158,    34,    34,   159,   166,   171,   168,
     172,   183,   358,    46,   155,   155,   155,   155,   155,    74,
    -155,    11,   173,    72,   397,    81,    81,    81,    81,    81,
    -155,  -155,   120,   184,   356,   154,   419,   117,  -155,   198,
     160,   156,   161,    34,   -12,   392,    32,   193,   163,   177,
     165,   178,   186,  -155,  -155,   155,   147,   147,  -155,  -155,
    -155,    74,  -155,  -155,   185,  -155,    72,    72,  -155,  -155,
    -155,   118,  -155,  -155,     6,  -155,   175,  -155,   195,   191,
    -155,   390,  -155,    67,   380,    34,    34,   197,  -155,  -155,
    -155,  -155,  -155,   155,   204,   155,     1,  -155,  -155,  -155,
    -155,  -155,   196,   203,   205,  -155,  -155,   379,   202,  -155,
    -155,  -155,  -155,  -155,   379,   419,   379,   413,   211,  -155,
     333,   333,  -155,   170,  -155,   225,   208,   217,    34,  -155,
     278,   324,  -155,  -155,   379,  -155,  -155,    42,   224,   243,
     271,   333,  -155,   266,   324,   155,   402,   240,   379,   252,
    -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      35,     0,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    35,     0,     6,    81,    82,     0,    80,    85,    87,
       0,    88,     0,    86,     0,     7,     5,    89,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,    29,
       0,     0,     0,     0,    70,    71,    66,    75,    72,     0,
       0,     0,     0,    69,    83,    65,    84,    16,     0,    21,
      22,    23,   101,   102,     0,     0,     0,     8,     0,     4,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,   100,     0,     0,     0,     0,     0,     0,
      93,     9,     0,     0,    35,     0,    30,    31,    53,     0,
       0,    56,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,    64,    74,     0,    59,    60,    61,    62,
      63,     0,    73,    20,     0,    99,    94,    95,    96,    97,
      98,     0,    33,    34,    29,    91,     0,    78,     0,    57,
      50,     0,    32,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,     0,     0,     0,     0,    67,    76,    77,
      68,   103,     0,     0,     0,    92,    79,    35,     0,    51,
      55,    46,    47,    48,    35,    49,    35,     0,     0,    18,
      35,    35,    10,    35,    58,     0,    35,    35,     0,    17,
      12,    13,    11,    54,    35,    36,    38,     0,     0,    35,
       0,    35,    52,     0,    14,     0,     0,     0,    35,    35,
      40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   -92,    -8,  -155,  -155,  -155,  -155,  -155,   -28,
    -155,   201,  -155,     0,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,   -68,  -155,  -155,  -155,  -155,   131,  -155,
     -17,  -155,   -10,  -154,   -64,  -155,  -155,  -155,  -155,   176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   101,   141,   202,   174,    14,
      15,    58,    59,   103,    17,    18,    19,    20,    21,    22,
      23,    24,   163,   114,    25,   179,   195,   148,   110,   111,
     115,    55,    61,   104,    26,    36,    37,   175,    27,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    53,    53,    35,   188,    31,   105,   116,    30,    33,
      78,    16,    54,    60,    44,    45,    46,    47,    48,    56,
      71,   155,   156,   193,    53,    32,    49,    50,    51,    34,
     196,    38,   197,   157,    40,    82,    39,    44,    45,    46,
     146,    48,    83,    53,    28,   153,    53,    53,   189,    41,
     209,    51,    73,    29,   106,    52,    53,    53,    53,    53,
      53,   107,    71,    53,   219,   155,   156,   126,   127,   128,
     129,   130,   109,    42,    60,   155,   156,   164,   113,   132,
      47,    89,   210,    30,    62,    53,    63,   182,   183,    49,
      50,   124,    72,    43,    73,    67,   154,    53,   200,   201,
     155,   156,    44,    45,    46,    47,    48,    68,    82,    97,
      98,    99,   181,   105,    49,    50,    51,    64,   131,   214,
     105,    83,   105,   142,    69,    65,    70,    53,    53,   146,
     207,   143,   146,   146,    74,    53,    75,    53,   172,   173,
     105,    76,    79,    52,    57,   146,   185,    77,   187,    80,
      81,   109,    89,    92,   105,   146,    90,    91,    44,    45,
      46,   112,    48,   102,   117,     2,     3,     4,     5,     6,
      53,   118,    51,   120,   119,     1,   134,   121,     2,     3,
       4,     5,     6,     7,    86,    87,    88,    53,   122,   144,
      16,    16,    35,    35,   147,   -37,   -39,     9,   216,   125,
      16,    16,   108,   149,   151,   150,    35,   165,   152,   166,
     168,    16,   203,     1,    16,   176,     2,     3,     4,     5,
       6,     7,     1,   169,   167,     2,     3,     4,     5,     6,
       7,   170,   171,   -37,   -39,     9,   177,   178,   184,   190,
      93,    94,   -37,   -39,     9,   186,   191,   192,     1,   194,
     205,     2,     3,     4,     5,     6,     7,     1,   199,   206,
       2,     3,     4,     5,     6,     7,   204,   211,   -37,   -39,
       9,   136,   137,   138,   139,   140,   213,   -37,   -39,     9,
     215,   218,   180,     1,     0,   212,     2,     3,     4,     5,
       6,     7,   133,     0,   220,     0,     0,     0,     0,   208,
       0,     8,   -35,   -37,   -39,     9,     1,     0,     0,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,     8,     0,   -37,   -39,     9,     1,
       0,     0,     2,     3,     4,     5,     6,     7,     1,     0,
       0,     2,     3,     4,     5,     6,     7,     8,   -35,   -37,
     -39,     9,     0,     0,     0,     0,     8,     0,   -37,   -39,
       9,     1,     0,     0,     2,     3,     4,     5,     6,     7,
      95,    96,    97,    98,    99,   145,     0,     0,     0,     0,
     100,   -37,   -39,     9,     1,     0,     0,     2,     3,     4,
       5,     6,     7,    84,    85,    86,    87,    88,     2,     3,
       4,     5,     6,   123,   -37,   -39,     9,     0,   158,   159,
     160,   161,   162,     0,     0,    84,    85,    86,    87,    88,
     158,   159,   160,   161,   162,   123,     0,    84,    85,    86,
      87,    88,    95,    96,    97,    98,    99,    84,    85,    86,
      87,    88,   135,     0,     0,     0,     0,   217,    84,    85,
      86,    87,    88,   198,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
       0,    29,    30,    11,     3,    44,    70,    75,    44,     9,
      46,    11,    29,    30,     3,     4,     5,     6,     7,    29,
      14,    33,    34,   177,    52,     5,    15,    16,    17,     0,
     184,    40,   186,    45,    24,    52,     5,     3,     4,     5,
     104,     7,    52,    71,     5,   113,    74,    75,    47,    25,
     204,    17,    46,    14,    71,    44,    84,    85,    86,    87,
      88,    71,    14,    91,   218,    33,    34,    84,    85,    86,
      87,    88,    72,    26,    91,    33,    34,    45,    44,    89,
       6,    35,    40,    44,     3,   113,     5,   155,   156,    15,
      16,    45,    44,    14,    46,    41,   113,   125,   190,   191,
      33,    34,     3,     4,     5,     6,     7,     5,   125,    37,
      38,    39,    45,   177,    15,    16,    17,    36,    44,   211,
     184,   131,   186,     3,    40,    44,    18,   155,   156,   193,
     198,    11,   196,   197,    44,   163,    44,   165,    20,    21,
     204,    44,    44,    44,    45,   209,   163,    22,   165,    44,
      44,   151,    35,    46,   218,   219,    45,    48,     3,     4,
       5,     3,     7,    14,     5,     8,     9,    10,    11,    12,
     198,     5,    17,     5,     3,     5,     3,     5,     8,     9,
      10,    11,    12,    13,    37,    38,    39,   215,     5,     5,
     190,   191,   200,   201,    40,    25,    26,    27,   215,    44,
     200,   201,    45,     5,    48,    45,   214,    14,    47,    46,
      45,   211,    42,     5,   214,    40,     8,     9,    10,    11,
      12,    13,     5,    45,    47,     8,     9,    10,    11,    12,
      13,    45,    47,    25,    26,    27,    41,    46,    41,    43,
      64,    65,    25,    26,    27,    41,    43,    42,     5,    47,
      42,     8,     9,    10,    11,    12,    13,     5,    47,    42,
       8,     9,    10,    11,    12,    13,    41,    43,    25,    26,
      27,    95,    96,    97,    98,    99,     5,    25,    26,    27,
      14,    41,   151,     5,    -1,    42,     8,     9,    10,    11,
      12,    13,    91,    -1,    42,    -1,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    27,     5,
      -1,    -1,     8,     9,    10,    11,    12,    13,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      27,     5,    -1,    -1,     8,     9,    10,    11,    12,    13,
      35,    36,    37,    38,    39,    19,    -1,    -1,    -1,    -1,
      45,    25,    26,    27,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    35,    36,    37,    38,    39,     8,     9,
      10,    11,    12,    45,    25,    26,    27,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      28,    29,    30,    31,    32,    45,    -1,    35,    36,    37,
      38,    39,    35,    36,    37,    38,    39,    35,    36,    37,
      38,    39,    45,    -1,    -1,    -1,    -1,    45,    35,    36,
      37,    38,    39,    40,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     8,     9,    10,    11,    12,    13,    23,    27,
      50,    51,    52,    53,    58,    59,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    73,    83,    87,     5,    14,
      44,    44,     5,    62,     0,    52,    84,    85,    40,     5,
      24,    25,    26,    14,     3,     4,     5,     6,     7,    15,
      16,    17,    44,    58,    79,    80,    81,    45,    60,    61,
      79,    81,     3,     5,    36,    44,    88,    41,     5,    40,
      18,    14,    44,    46,    44,    44,    44,    22,    46,    44,
      44,    44,    79,    81,    35,    36,    37,    38,    39,    35,
      45,    48,    46,    88,    88,    35,    36,    37,    38,    39,
      45,    54,    14,    62,    82,    83,    79,    81,    45,    62,
      77,    78,     3,    44,    72,    79,    72,     5,     5,     3,
       5,     5,     5,    45,    45,    44,    79,    79,    79,    79,
      79,    44,    81,    60,     3,    45,    88,    88,    88,    88,
      88,    55,     3,    11,     5,    19,    83,    40,    76,     5,
      45,    48,    47,    72,    79,    33,    34,    45,    28,    29,
      30,    31,    32,    71,    45,    14,    46,    47,    45,    45,
      45,    47,    20,    21,    57,    86,    40,    41,    46,    74,
      77,    45,    72,    72,    41,    79,    41,    79,     3,    47,
      43,    43,    42,    82,    47,    75,    82,    82,    40,    47,
      51,    51,    56,    42,    41,    42,    42,    72,    21,    82,
      40,    43,    42,     5,    51,    14,    79,    45,    41,    82,
      42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    54,    55,
      56,    53,    57,    57,    57,    58,    58,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    66,    65,    68,    67,    70,
      69,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      74,    75,    73,    76,    73,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      85,    86,    84,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     0,     0,
       0,     8,     3,     3,     6,     4,     3,     8,     7,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     5,     5,     5,     0,     8,     0,     8,     0,
      16,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       0,     0,    10,     0,     8,     3,     1,     2,     4,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     4,     1,
       1,     1,     1,     3,     3,     1,     4,     4,     2,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       0,     0,     5,     4,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 48 "limbaj.y"
                        {printf("Corect.\n");}
#line 1593 "y.tab.c"
    break;

  case 7:
#line 57 "limbaj.y"
                         { if(program_status==0){ printf("Program gresit.\n");return 0;}}
#line 1599 "y.tab.c"
    break;

  case 8:
#line 61 "limbaj.y"
            {locatie=1;}
#line 1605 "y.tab.c"
    break;

  case 9:
#line 62 "limbaj.y"
            {
            	// Variabile
            	var_scope++;
            	var_depth++;
            	strcpy(var_current_member, "class ");
            	strcat(var_current_member, (yyvsp[-2].strval));
            }
#line 1617 "y.tab.c"
    break;

  case 10:
#line 69 "limbaj.y"
                                {locatie=0;}
#line 1623 "y.tab.c"
    break;

  case 11:
#line 70 "limbaj.y"
             {
            	// Variabile
            	var_scope--;
            	var_depth--;
            	strcpy(var_current_member, "global");
            }
#line 1634 "y.tab.c"
    break;

  case 29:
#line 103 "limbaj.y"
                        {
            			if(!checkVariableExistence((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member))
            				addVariable((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member);
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila %s exista deja.\n", yylineno, (yyvsp[0].strval));
            			}
            		}
#line 1648 "y.tab.c"
    break;

  case 35:
#line 122 "limbaj.y"
        {
          var_depth++;
        }
#line 1656 "y.tab.c"
    break;

  case 36:
#line 126 "limbaj.y"
        {
          var_depth--;
        }
#line 1664 "y.tab.c"
    break;

  case 37:
#line 131 "limbaj.y"
            {
              var_depth++;
            }
#line 1672 "y.tab.c"
    break;

  case 38:
#line 135 "limbaj.y"
            {
              var_depth--;
            }
#line 1680 "y.tab.c"
    break;

  case 39:
#line 141 "limbaj.y"
          {
            var_depth++;
          }
#line 1688 "y.tab.c"
    break;

  case 40:
#line 145 "limbaj.y"
          {
            var_depth--;
          }
#line 1696 "y.tab.c"
    break;

  case 50:
#line 161 "limbaj.y"
            {
                if(cFunc((yyvsp[-4].type),(yyvsp[-3].strval),(yyvsp[-1].strval),nr_parametrii,locatie)==1)
                  pushFunc((yyvsp[-4].type),(yyvsp[-3].strval),(yyvsp[-1].strval),nr_parametrii,locatie);
                else{
                  printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-3].strval));
                  program_status=0;
                }
               nr_parametrii=0;
            }
#line 1710 "y.tab.c"
    break;

  case 51:
#line 171 "limbaj.y"
            {
          		// Variabile
          		var_scope++;
          		var_depth++;
          		if(!strncmp(var_current_member, "class", 5))
          		{
          			strcpy(aux_var_current_member, var_current_member);
          			strcat(var_current_member, " method ");
          			strcat(var_current_member, (yyvsp[-4].strval));
          		}
              else
              {
                strcpy(var_current_member, "function ");
                strcat(var_current_member, (yyvsp[-4].strval));
              }
            }
#line 1731 "y.tab.c"
    break;

  case 52:
#line 188 "limbaj.y"
            {
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, aux_var_current_member);
            }
#line 1742 "y.tab.c"
    break;

  case 53:
#line 195 "limbaj.y"
               {
                  nr_parametrii=0;
                  if(cFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie)==1)
                     pushFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie);
                  else{
                     printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-2].strval));
                     program_status=0;
                  }
               }
#line 1756 "y.tab.c"
    break;

  case 55:
#line 207 "limbaj.y"
                                  {strcat((yyval.strval),(yyvsp[0].strval));}
#line 1762 "y.tab.c"
    break;

  case 56:
#line 208 "limbaj.y"
                   {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1768 "y.tab.c"
    break;

  case 57:
#line 211 "limbaj.y"
               {strcpy((yyval.strval), (yyvsp[-1].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[0].strval)); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1774 "y.tab.c"
    break;

  case 58:
#line 212 "limbaj.y"
                     {strcpy((yyval.strval), (yyvsp[-3].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[-2].strval)); strcat((yyval.strval), "[]"); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1780 "y.tab.c"
    break;

  case 90:
#line 257 "limbaj.y"
        {
		// Variabile
		var_scope++;
		var_depth++;
		strcpy(var_current_member, "main");
	}
#line 1791 "y.tab.c"
    break;

  case 91:
#line 263 "limbaj.y"
                      { printare();}
#line 1797 "y.tab.c"
    break;

  case 92:
#line 264 "limbaj.y"
        {
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, "global");
	}
#line 1808 "y.tab.c"
    break;

  case 93:
#line 272 "limbaj.y"
                                  {printf("Valoare: %i\n", (yyvsp[-1].intval));}
#line 1814 "y.tab.c"
    break;

  case 94:
#line 275 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 1820 "y.tab.c"
    break;

  case 95:
#line 276 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 1826 "y.tab.c"
    break;

  case 96:
#line 277 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 1832 "y.tab.c"
    break;

  case 97:
#line 278 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 1838 "y.tab.c"
    break;

  case 98:
#line 279 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 1844 "y.tab.c"
    break;

  case 99:
#line 280 "limbaj.y"
                            {(yyval.intval) = (yyvsp[-1].intval);}
#line 1850 "y.tab.c"
    break;

  case 100:
#line 281 "limbaj.y"
                        {(yyval.intval) = -(yyvsp[0].intval);}
#line 1856 "y.tab.c"
    break;

  case 101:
#line 282 "limbaj.y"
              {(yyval.intval) = (yyvsp[0].intval);}
#line 1862 "y.tab.c"
    break;

  case 102:
#line 283 "limbaj.y"
              {;}
#line 1868 "y.tab.c"
    break;

  case 103:
#line 284 "limbaj.y"
                         {;}
#line 1874 "y.tab.c"
    break;


#line 1878 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 288 "limbaj.y"


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
   printVars(NULL);
   print_results();
   fclose(yyin);
}
