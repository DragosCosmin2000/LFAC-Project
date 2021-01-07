%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap

%%
"integer" {yylval.type = strdup(yytext); return INT;}
"float" {yylval.type = strdup(yytext); return FLOAT;}
"char" {yylval.type = strdup(yytext); return CHAR;}
"string" {yylval.type = strdup(yytext); return STRING;}
"bool" {yylval.type = strdup(yytext); return BOOL;}

"Eval" {return EVAL;}

"to_upper" {return TOUPPER;}
"to_lower" {return TOLOWER;}
"length" {return LENGTH;}

"+" {return ('+');}
"-" {return ('-');}
"*" {return ('*');}
"/" {return ('/');}
"%" {return ('%');}
"<" {return LT;}
">" {return GT;}
"==" {return EQ;}
"<=" {return LET;}
">=" {return GET;}
"&&" {return AND;}
"||" {return OR;}
":=" {return ASSIGN;}

"while" {return WHILE;}
"for" {return FOR;}
"if" {return IF;}

"main(){" {return BGIN;}
"end}" {return END;}

"private" {return PRV;}
"public" {return PUB;}
"new" {return NEW;}
"class" {return CLASS;}

[_a-zA-Z][_a-zA-Z0-9]* {return ID;}

[+-]?[1-9][0-9]*|0 {yylval.intval = atoi(yytext); return NR;}
[+-]?([1-9][0-9]*\.[0-9]+)|(0\.[0-9]+) {return NRFLOAT;}

"'"[a-zA-Z]"'" {return CHARS;}
\"[^"\n]*\" {return STRINGS;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
%%
