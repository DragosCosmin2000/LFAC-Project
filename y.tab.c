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

int var_depth = 0, var_scope = 0;
char aux_var_current_member[300], var_current_member[300] = "global";

void yyerror(const char* error_message);

#line 92 "y.tab.c"

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
#line 22 "limbaj.y"

   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;

#line 222 "y.tab.c"

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
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


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
static const yytype_int16 yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    56,    60,    61,
      70,    77,    59,    86,    87,    88,    91,    98,   105,   114,
     115,   118,   126,   129,   130,   133,   133,   133,   133,   133,
     135,   145,   154,   155,   158,   159,   163,   163,   172,   172,
     182,   182,   191,   191,   191,   191,   191,   194,   195,   196,
     197,   198,   204,   243,   201,   260,   259,   272,   273,   276,
     277,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   293,   294,   295,   298,   299,   300,   301,   302,
     305,   306,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   322,   322,   337,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349
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
  "decl_functii", "$@8", "$@9", "$@10", "parametrii", "param", "expresie",
  "VAL", "expresie_string", "list", "statements", "bloc", "$@11",
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,    59,   123,   125,    58,    91,    93,    40,    41,    44
};
# endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     347,     1,  -187,  -187,  -187,  -187,  -187,   -14,    61,   376,
      80,   315,    27,  -187,  -187,  -187,    85,  -187,  -187,  -187,
      69,  -187,    60,  -187,    74,  -187,  -187,  -187,    87,   142,
      72,    44,    64,    97,  -187,    67,  -187,    99,  -187,    22,
      75,    77,    83,   109,  -187,  -187,    52,  -187,  -187,    86,
      88,    91,   142,  -187,   354,  -187,    96,  -187,    73,    95,
     354,    96,  -187,   106,    44,    44,   212,  -187,   128,  -187,
     393,   142,   149,   102,    18,    18,   156,   157,   166,   168,
     169,   170,   403,   -16,    35,    35,    35,    35,    35,    68,
    -187,   142,   174,   -31,   408,    44,    44,    44,    44,    44,
    -187,  -187,    23,   173,   370,   130,   354,    96,   133,  -187,
     179,   138,   141,    18,    18,   -17,   398,    93,   177,   148,
     151,   139,   146,   158,  -187,  -187,    35,    33,    33,  -187,
    -187,  -187,    68,  -187,  -187,   159,  -187,   -31,   -31,  -187,
    -187,  -187,  -187,  -187,  -187,    -4,  -187,   163,  -187,  -187,
     167,   171,  -187,   376,  -187,   122,   385,    18,    18,   172,
    -187,  -187,  -187,  -187,  -187,    35,   180,    35,    15,  -187,
    -187,  -187,  -187,  -187,    24,  -187,   393,   178,  -187,  -187,
    -187,  -187,  -187,   393,   354,   393,   371,   191,  -187,   200,
     214,   216,   155,  -187,   181,   220,   230,    18,  -187,   347,
     347,  -187,  -187,   393,  -187,  -187,    21,   292,   338,  -187,
     256,   207,   218,  -187,   199,   347,    35,   338,   421,   228,
     393,   266,  -187
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      36,     0,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    36,     0,     6,    84,    83,     0,    82,    87,    89,
       0,    90,     0,    88,     0,     7,     5,    91,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,    30,
       0,     0,     0,     0,    72,    73,    68,    77,    74,     0,
       0,     0,     0,    71,    85,    67,    86,    20,     0,    22,
      23,    24,   102,   103,     0,     0,     0,     8,     0,     4,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,   101,     0,     0,     0,     0,     0,     0,
      94,     9,     0,     0,    36,     0,    31,    32,     0,    55,
       0,     0,    58,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    66,    76,     0,    61,    62,    63,
      64,    65,     0,    75,    21,     0,   100,    95,    96,    97,
      98,    99,    10,    34,    35,    30,    93,     0,    80,    33,
       0,    59,    52,     0,    50,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,    69,
      78,    79,    70,   104,     0,    81,    36,     0,    53,    57,
      47,    48,    49,    36,    51,    36,     0,     0,    17,     0,
       0,     0,    36,    60,     0,    36,    36,     0,    16,    36,
      36,    11,    56,    36,    37,    39,     0,    13,    14,    12,
      36,     0,     0,    54,     0,    36,     0,    15,     0,     0,
      36,    36,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -186,    -6,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,     0,   198,  -187,    19,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,   -63,  -187,  -187,  -187,  -187,   119,
    -187,   -28,  -187,   -25,   -80,   -67,  -187,  -187,  -187,   189
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   101,   142,   174,   209,   191,
      14,    53,    58,    59,   103,    17,    18,    19,    20,    21,
      22,    23,    24,   165,   115,    25,   178,   194,   150,   111,
     112,   116,    55,    61,   104,    26,    36,    37,    27,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    54,    60,   105,    56,    35,    28,    97,    98,    99,
      71,    15,   117,   207,   208,    29,   157,   158,   187,    16,
      89,    44,    45,    46,    82,    48,   143,    83,    33,   217,
      16,   159,   125,    31,   144,    51,    71,   147,    44,    45,
      46,    72,    48,   106,   189,   190,   107,    62,    30,    63,
     154,   155,    51,   113,   157,   158,   127,   128,   129,   130,
     131,   188,   211,    60,   133,   114,    32,    72,    38,    73,
      15,    86,    87,    88,    47,    44,    45,    46,    47,    48,
      34,    64,   126,    49,    50,    41,   156,    49,    50,    51,
      39,    65,   110,    40,   181,   182,   192,    78,    82,    30,
      42,    43,    68,   195,    15,   196,    67,    83,    69,   105,
       2,     3,     4,     5,     6,   132,   105,    70,   105,    52,
      57,    90,    74,   210,    75,   147,   157,   158,   147,   147,
      76,    77,    89,    79,   206,    80,   105,   184,    81,   186,
     221,   166,   102,   147,    91,    44,    45,    46,    47,    48,
     109,    92,   108,   105,   147,   157,   158,    49,    50,    51,
       1,   118,   119,     2,     3,     4,     5,     6,     7,   120,
     180,   148,   110,   121,   122,   123,    15,   135,   145,   149,
     -38,   -40,     9,    15,   151,    15,   152,   170,   218,    52,
     153,   167,    15,   168,   171,    15,    15,   169,   202,    15,
      15,    35,    35,    15,   175,   173,   172,    15,    15,   176,
      15,    35,   214,   216,   183,    15,   177,    15,    16,    16,
      15,    15,   185,   203,   193,     1,    16,    16,     2,     3,
       4,     5,     6,     7,    16,     1,    16,   198,     2,     3,
       4,     5,     6,     7,   199,   -38,   -40,     9,    95,    96,
      97,    98,    99,    93,    94,   -38,   -40,     9,   200,   201,
     100,     1,   215,   204,     2,     3,     4,     5,     6,     7,
     220,     1,   179,   205,     2,     3,     4,     5,     6,     7,
       0,   -38,   -40,     9,   137,   138,   139,   140,   141,   134,
       0,   -38,   -40,     9,     0,     0,     0,     1,     0,   213,
       2,     3,     4,     5,     6,     7,     0,     0,     0,   222,
       0,     0,     0,   212,     0,     8,   -36,   -38,   -40,     9,
       1,     0,     0,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,     8,     0,
     -38,   -40,     9,     1,     0,     0,     2,     3,     4,     5,
       6,     7,     1,     0,     0,     2,     3,     4,     5,     6,
       7,     8,   -36,   -38,   -40,     9,     0,     0,     0,     0,
       8,     0,   -38,   -40,     9,     1,     0,     0,     2,     3,
       4,     5,     6,     7,     2,     3,     4,     5,     6,   146,
      84,    85,    86,    87,    88,   -38,   -40,     9,     1,     0,
       0,     2,     3,     4,     5,     6,     7,    84,    85,    86,
      87,    88,   197,   160,   161,   162,   163,   164,   -38,   -40,
       9,    84,    85,    86,    87,    88,   160,   161,   162,   163,
     164,     0,     0,   124,    84,    85,    86,    87,    88,    84,
      85,    86,    87,    88,    95,    96,    97,    98,    99,     0,
       0,   124,     0,     0,     0,     0,   136,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,   219
};

static const yytype_int16 yycheck[] =
{
       0,    29,    30,    70,    29,    11,     5,    38,    39,    40,
      14,    11,    75,   199,   200,    14,    33,    34,     3,     0,
      36,     3,     4,     5,    52,     7,     3,    52,     9,   215,
      11,    48,    48,    47,    11,    17,    14,   104,     3,     4,
       5,    45,     7,    71,    20,    21,    71,     3,    47,     5,
     113,   114,    17,    35,    33,    34,    84,    85,    86,    87,
      88,    46,    41,    91,    89,    47,     5,    45,    41,    47,
      70,    38,    39,    40,     6,     3,     4,     5,     6,     7,
       0,    37,    47,    15,    16,    25,   114,    15,    16,    17,
       5,    47,    73,    24,   157,   158,   176,    45,   126,    47,
      26,    14,     5,   183,   104,   185,    42,   132,    41,   176,
       8,     9,    10,    11,    12,    47,   183,    18,   185,    47,
      48,    48,    47,   203,    47,   192,    33,    34,   195,   196,
      47,    22,    36,    47,   197,    47,   203,   165,    47,   167,
     220,    48,    14,   210,    49,     3,     4,     5,     6,     7,
      48,    45,     3,   220,   221,    33,    34,    15,    16,    17,
       5,     5,     5,     8,     9,    10,    11,    12,    13,     3,
      48,    41,   153,     5,     5,     5,   176,     3,     5,    46,
      25,    26,    27,   183,     5,   185,    48,    48,   216,    47,
      49,    14,   192,    45,    48,   195,   196,    46,    43,   199,
     200,   207,   208,   203,    41,    46,    48,   207,   208,    42,
     210,   217,     5,    14,    42,   215,    45,   217,   199,   200,
     220,   221,    42,    42,    46,     5,   207,   208,     8,     9,
      10,    11,    12,    13,   215,     5,   217,    46,     8,     9,
      10,    11,    12,    13,    44,    25,    26,    27,    36,    37,
      38,    39,    40,    64,    65,    25,    26,    27,    44,    43,
      48,     5,    44,    43,     8,     9,    10,    11,    12,    13,
      42,     5,   153,    43,     8,     9,    10,    11,    12,    13,
      -1,    25,    26,    27,    95,    96,    97,    98,    99,    91,
      -1,    25,    26,    27,    -1,    -1,    -1,     5,    -1,    43,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    27,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    27,     5,    -1,    -1,     8,     9,
      10,    11,    12,    13,     8,     9,    10,    11,    12,    19,
      36,    37,    38,    39,    40,    25,    26,    27,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    36,    37,    38,
      39,    40,    41,    28,    29,    30,    31,    32,    25,    26,
      27,    36,    37,    38,    39,    40,    28,    29,    30,    31,
      32,    -1,    -1,    48,    36,    37,    38,    39,    40,    36,
      37,    38,    39,    40,    36,    37,    38,    39,    40,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    48,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     8,     9,    10,    11,    12,    13,    23,    27,
      51,    52,    53,    54,    60,    61,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    75,    85,    88,     5,    14,
      47,    47,     5,    64,     0,    53,    86,    87,    41,     5,
      24,    25,    26,    14,     3,     4,     5,     6,     7,    15,
      16,    17,    47,    61,    81,    82,    83,    48,    62,    63,
      81,    83,     3,     5,    37,    47,    89,    42,     5,    41,
      18,    14,    45,    47,    47,    47,    47,    22,    45,    47,
      47,    47,    81,    83,    36,    37,    38,    39,    40,    36,
      48,    49,    45,    89,    89,    36,    37,    38,    39,    40,
      48,    55,    14,    64,    84,    85,    81,    83,     3,    48,
      64,    79,    80,    35,    47,    74,    81,    74,     5,     5,
       3,     5,     5,     5,    48,    48,    47,    81,    81,    81,
      81,    81,    47,    83,    62,     3,    48,    89,    89,    89,
      89,    89,    56,     3,    11,     5,    19,    85,    41,    46,
      78,     5,    48,    49,    74,    74,    81,    33,    34,    48,
      28,    29,    30,    31,    32,    73,    48,    14,    45,    46,
      48,    48,    48,    46,    57,    41,    42,    45,    76,    79,
      48,    74,    74,    42,    81,    42,    81,     3,    46,    20,
      21,    59,    84,    46,    77,    84,    84,    41,    46,    44,
      44,    43,    43,    42,    43,    43,    74,    52,    52,    58,
      84,    41,    21,    43,     5,    44,    14,    52,    81,    48,
      42,    84,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    55,    56,
      57,    58,    54,    59,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    68,    67,    70,    69,
      72,    71,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    76,    77,    75,    78,    75,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    87,    86,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     0,     0,
       0,     0,     9,     3,     3,     6,     8,     7,     5,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     5,     5,     5,     0,     8,     0,     8,
       0,    16,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     0,     0,    10,     0,     8,     3,     1,     2,
       4,     3,     3,     3,     3,     3,     3,     1,     1,     4,
       4,     1,     1,     1,     1,     3,     3,     1,     4,     4,
       2,     3,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     0,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     4
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
#line 47 "limbaj.y"
                        {printf("Corect.\n");}
#line 1597 "y.tab.c"
    break;

  case 7:
#line 56 "limbaj.y"
                         { if(program_status==0){ printf("Program gresit.\n");return 0;}}
#line 1603 "y.tab.c"
    break;

  case 8:
#line 60 "limbaj.y"
            {locatie=1;}
#line 1609 "y.tab.c"
    break;

  case 9:
#line 61 "limbaj.y"
            {
               //Clase
               if(cClas((yyvsp[-2].strval))==1)
                  pushClas((yyvsp[-2].strval));
               else{
                  program_status=0;
                  printf("Linia %d: Clase %s exista deja.\n", yylineno, (yyvsp[-2].strval));
               }
            }
#line 1623 "y.tab.c"
    break;

  case 10:
#line 70 "limbaj.y"
            {
            	// Variabile
            	var_scope++;
            	var_depth++;
            	strcpy(var_current_member, "class ");
            	strcat(var_current_member, (yyvsp[-3].strval));
            }
#line 1635 "y.tab.c"
    break;

  case 11:
#line 77 "limbaj.y"
                                {locatie=0;}
#line 1641 "y.tab.c"
    break;

  case 12:
#line 78 "limbaj.y"
             {
            	// Variabile
            	var_scope--;
            	var_depth--;
            	strcpy(var_current_member, "global");
            }
#line 1652 "y.tab.c"
    break;

  case 16:
#line 92 "limbaj.y"
              {
                if(cObj((yyvsp[-7].strval))==1)
                  addObjects((yyvsp[-7].strval),(yyvsp[-6].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-7].strval));
              }
#line 1663 "y.tab.c"
    break;

  case 17:
#line 99 "limbaj.y"
              {
                if(cObj((yyvsp[-6].strval))==1)
                  addObjects((yyvsp[-6].strval),(yyvsp[-5].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-6].strval));
              }
#line 1674 "y.tab.c"
    break;

  case 18:
#line 106 "limbaj.y"
              {
                if(cObj((yyvsp[-4].strval))==1)
                  addObjects((yyvsp[-4].strval),(yyvsp[-3].strval));
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, (yyvsp[-4].strval));
              }
#line 1685 "y.tab.c"
    break;

  case 19:
#line 114 "limbaj.y"
                                             { printf("Parametrii apel functie %s: %s\n", (yyvsp[-3].strval), (yyvsp[-1].strval)); (yyval.type) = "ceva";}
#line 1691 "y.tab.c"
    break;

  case 20:
#line 115 "limbaj.y"
                             {(yyval.type) = "ceva";}
#line 1697 "y.tab.c"
    break;

  case 21:
#line 119 "limbaj.y"
                {
                  char params[1000];
                  strcpy(params, (yyval.strval));
                  strcat(params, " ");
                  strcat(params, (yyvsp[0].strval));
                  (yyval.strval) = params;
                }
#line 1709 "y.tab.c"
    break;

  case 22:
#line 126 "limbaj.y"
                             {(yyval.strval)=(yyvsp[0].strval);}
#line 1715 "y.tab.c"
    break;

  case 23:
#line 129 "limbaj.y"
                      {(yyval.strval)=(yyvsp[0].type);}
#line 1721 "y.tab.c"
    break;

  case 24:
#line 130 "limbaj.y"
                             {(yyval.strval)= (yyvsp[0].type);}
#line 1727 "y.tab.c"
    break;

  case 30:
#line 136 "limbaj.y"
                        {
            			if(!checkVariableExistence((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member))
            				addVariable((yyvsp[0].strval), (yyvsp[-1].type), var_scope, var_depth, var_current_member);
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila %s exista deja.\n", yylineno, (yyvsp[0].strval));
            			}
            		}
#line 1741 "y.tab.c"
    break;

  case 31:
#line 146 "limbaj.y"
               {
                  // Variabile
                  if(strcmp((yyvsp[-3].type), (yyvsp[0].type)))
                  {
                    program_status = 0;
                    printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, (yyvsp[-3].type));
                  }
               }
#line 1754 "y.tab.c"
    break;

  case 36:
#line 163 "limbaj.y"
        {
          var_depth++;
        }
#line 1762 "y.tab.c"
    break;

  case 37:
#line 167 "limbaj.y"
        {
          var_depth--;
        }
#line 1770 "y.tab.c"
    break;

  case 38:
#line 172 "limbaj.y"
            {
              var_depth++;
            }
#line 1778 "y.tab.c"
    break;

  case 39:
#line 176 "limbaj.y"
            {
              var_depth--;
            }
#line 1786 "y.tab.c"
    break;

  case 40:
#line 182 "limbaj.y"
          {
            var_depth++;
          }
#line 1794 "y.tab.c"
    break;

  case 41:
#line 186 "limbaj.y"
          {
            var_depth--;
          }
#line 1802 "y.tab.c"
    break;

  case 52:
#line 204 "limbaj.y"
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
#line 1845 "y.tab.c"
    break;

  case 53:
#line 243 "limbaj.y"
            {
                if(cFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie)==1)
                  pushFunc((yyvsp[-5].type),(yyvsp[-4].strval),(yyvsp[-2].strval),nr_parametrii,locatie);
                else{
                  printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-4].strval));
                  program_status=0;
                }
               nr_parametrii=0;
            }
#line 1859 "y.tab.c"
    break;

  case 54:
#line 253 "limbaj.y"
            {
          		// Variabile
          		var_scope--;
          		var_depth--;
          		strcpy(var_current_member, aux_var_current_member);
            }
#line 1870 "y.tab.c"
    break;

  case 55:
#line 260 "limbaj.y"
               {
                  nr_parametrii=0;
                  if(cFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie)==1)
                     pushFunc((yyvsp[-3].type),(yyvsp[-2].strval),0,nr_parametrii,locatie);
                  else{
                     printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,(yyvsp[-2].strval));
                     program_status=0;
                  }
               }
#line 1884 "y.tab.c"
    break;

  case 57:
#line 272 "limbaj.y"
                                  {strcat((yyval.strval),(yyvsp[0].strval));}
#line 1890 "y.tab.c"
    break;

  case 58:
#line 273 "limbaj.y"
                   {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1896 "y.tab.c"
    break;

  case 59:
#line 276 "limbaj.y"
               {strcpy((yyval.strval), (yyvsp[-1].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[0].strval)); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1902 "y.tab.c"
    break;

  case 60:
#line 277 "limbaj.y"
                     {strcpy((yyval.strval), (yyvsp[-3].type)); strcat((yyval.strval), " "); strcat((yyval.strval), (yyvsp[-2].strval)); strcat((yyval.strval), "[]"); strcat((yyval.strval), ",");nr_parametrii++; }
#line 1908 "y.tab.c"
    break;

  case 61:
#line 280 "limbaj.y"
                                 {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1914 "y.tab.c"
    break;

  case 62:
#line 281 "limbaj.y"
                                 {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1920 "y.tab.c"
    break;

  case 63:
#line 282 "limbaj.y"
                                 {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1926 "y.tab.c"
    break;

  case 64:
#line 283 "limbaj.y"
                                 {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1932 "y.tab.c"
    break;

  case 65:
#line 284 "limbaj.y"
                                 {(yyval.type) = get_exp_type((yyvsp[-2].type), (yyvsp[0].type));}
#line 1938 "y.tab.c"
    break;

  case 66:
#line 285 "limbaj.y"
                            {(yyval.type) = (yyvsp[-1].type);}
#line 1944 "y.tab.c"
    break;

  case 67:
#line 286 "limbaj.y"
               {(yyval.type) = (yyvsp[0].type);}
#line 1950 "y.tab.c"
    break;

  case 68:
#line 287 "limbaj.y"
              {(yyval.type) = get_var_type((yyvsp[0].strval), var_current_member, var_depth);}
#line 1956 "y.tab.c"
    break;

  case 69:
#line 288 "limbaj.y"
                         {(yyval.type) = get_var_type((yyvsp[-3].strval), var_current_member, var_depth);}
#line 1962 "y.tab.c"
    break;

  case 70:
#line 289 "limbaj.y"
                             {(yyval.type) = "integer";}
#line 1968 "y.tab.c"
    break;

  case 71:
#line 290 "limbaj.y"
                           {(yyval.type) = (yyvsp[0].type);}
#line 1974 "y.tab.c"
    break;

  case 72:
#line 293 "limbaj.y"
         {(yyval.type) = "integer";}
#line 1980 "y.tab.c"
    break;

  case 73:
#line 294 "limbaj.y"
              {(yyval.type) = "float";}
#line 1986 "y.tab.c"
    break;

  case 74:
#line 295 "limbaj.y"
            {(yyval.type) = "char";}
#line 1992 "y.tab.c"
    break;

  case 75:
#line 298 "limbaj.y"
                                                      {(yyval.type)="string";}
#line 1998 "y.tab.c"
    break;

  case 76:
#line 299 "limbaj.y"
                                          {(yyval.type)="string";}
#line 2004 "y.tab.c"
    break;

  case 77:
#line 300 "limbaj.y"
                          {(yyval.type)="string";}
#line 2010 "y.tab.c"
    break;

  case 78:
#line 301 "limbaj.y"
                                     {(yyval.type)="string";}
#line 2016 "y.tab.c"
    break;

  case 79:
#line 302 "limbaj.y"
                                     {(yyval.type)="string";}
#line 2022 "y.tab.c"
    break;

  case 92:
#line 322 "limbaj.y"
        {
		// Variabile
		var_scope++;
		var_depth++;
		strcpy(var_current_member, "main");
	}
#line 2033 "y.tab.c"
    break;

  case 93:
#line 329 "limbaj.y"
        {
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, "global");
	}
#line 2044 "y.tab.c"
    break;

  case 94:
#line 337 "limbaj.y"
                                  {printf("Valoare: %i\n", (yyvsp[-1].intval));}
#line 2050 "y.tab.c"
    break;

  case 95:
#line 340 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 2056 "y.tab.c"
    break;

  case 96:
#line 341 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 2062 "y.tab.c"
    break;

  case 97:
#line 342 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 2068 "y.tab.c"
    break;

  case 98:
#line 343 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 2074 "y.tab.c"
    break;

  case 99:
#line 344 "limbaj.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 2080 "y.tab.c"
    break;

  case 100:
#line 345 "limbaj.y"
                            {(yyval.intval) = (yyvsp[-1].intval);}
#line 2086 "y.tab.c"
    break;

  case 101:
#line 346 "limbaj.y"
                        {(yyval.intval) = -(yyvsp[0].intval);}
#line 2092 "y.tab.c"
    break;

  case 102:
#line 347 "limbaj.y"
              {(yyval.intval) = (yyvsp[0].intval);}
#line 2098 "y.tab.c"
    break;

  case 103:
#line 348 "limbaj.y"
              {;}
#line 2104 "y.tab.c"
    break;

  case 104:
#line 349 "limbaj.y"
                         {;}
#line 2110 "y.tab.c"
    break;


#line 2114 "y.tab.c"

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
#line 353 "limbaj.y"


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
