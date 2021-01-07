/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 14 "limbaj.y"

   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;

#line 133 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
