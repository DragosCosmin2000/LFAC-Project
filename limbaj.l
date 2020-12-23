%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {yylval.strval=strdup(yytext); return TIP;}
"+"|"-"|"*" {return SEMNE;}
"While" {return WHILE;}
"For" {return FOR;}
"If" {return IF;}
"<"|">"|"=" {return SIGNS;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
@[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext);return ID;}
":=" {return ASSIGN;}
[0-9]+ {yylval.strval=strdup(yytext);return NR;}
"'"[a-zA-Z]"'" {yylval.strval=strdup(yytext);return CHAR;}
"''"[ a-zA-Z]+"''" {yylval.strval=strdup(yytext);return STRING;}
"class" {return CLS;}
"private" {return PRV;}
"public" {return PUB;}
"new" { return NEW;}
"const" { return CONST;}
"to_upper()" { return TOUPPER;}
"to_lower()" { return TOLOWER;}
"length()" {return LENGTH;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
