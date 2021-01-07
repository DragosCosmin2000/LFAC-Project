%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limbaj.h"
extern FILE* yyin;
extern FILE* yyout;
extern char* yytext;
extern int yylineno;
extern unsigned program_status;
int yylex();
void yyerror(const char* error_message);
%}
%union{
   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;
}
%token<intval> NR
%token<floatval> NRFLOAT
%token<strval> ID STRINGS CHARS
%token<type> INT FLOAT BOOL STRING CHAR
%token EVAL ASSIGN TOUPPER TOLOWER LENGTH BGIN END PRV PUB NEW CLASS IF WHILE FOR
%token<const_flag> CONST
%type<intval> eval_exp calculate
%token GT LT EQ LET GET

%left AND OR
%left '+' '-'
%left '*' '/' '%'

%start progr
%%

progr : declaratii bloc {printf("Corect.\n");}
      ;
      
declaratii : declaratie ';'
           | declaratii declaratie ';'
           ;

declaratie : statements
           | decl_clase
           | decl_functii
           ;

decl_clase : CLASS ID '{' continut_clasa '}' ;

continut_clasa : PRV ':' declaratii
               | PUB ':' declaratii
               | PRV ':' declaratii PUB ':' declaratii
               ;

apelare_functii : ID '(' parametrii_call ')'
                | ID '(' ')'
                ;

creare_obiect : ID ID ASSIGN NEW ID'['NR']' 
              | ID ID ASSIGN NEW ID'['']' 
              | ID ID ASSIGN NEW ID 
              ;

parametrii_call : param_call ',' parametrii_call
                | param_call
                ;
                
param_call : expresie
           | expresie_string
           ;

tip : INT | FLOAT | BOOL | STRING | CHAR ;

decl_variabile : tip ID
               | tip ID ASSIGN expresie
               | tip ID ASSIGN expresie_string
               | tip ID '[' NR ']'
               ;

decl_const : CONST tip ID ASSIGN NR
           | CONST tip ID ASSIGN STRING
           ;
           
decl_if : IF '(' expr_bool ')' '{' list'}' ;

decl_while : WHILE '(' expr_bool ')' '{' list '}' ;

decl_for : FOR '(' ID ASSIGN ID ';' expr_bool ';' expresie ')' '{' list '}' ;

semne : GT | LT | EQ | LET | GET ;


expr_bool : '(' expr_bool ')'
          | expr_bool AND expr_bool
          | expr_bool OR expr_bool
          | expresie semne expresie
          ;

decl_functii : tip ID '(' parametrii ')' '{' list '}'
             | tip ID '(' ')' '{' list '}'
             ;

parametrii : param ',' parametrii
           | param
           ;

param : tip ID
      | tip ID'['']'
      ;

expresie : expresie '+' expresie
         | expresie '-' expresie
         | expresie '*' expresie
         | expresie '/' expresie
         | expresie '%' expresie
         | '(' expresie ')'
         | VAL
         | ID
         | ID '[' NR ']'
         | LENGTH '(' ID ')'
         | apelare_functii
         ;

VAL : NR
    | NRFLOAT
    | CHARS
    ;

expresie_string : expresie_string '+' expresie_string
                | '(' expresie_string ')'
                | STRINGS
                | TOUPPER '(' ID ')'
                | TOLOWER '(' ID ')'
                ;

list : statements ';'
     | list statements ';'
     ;

statements : decl_variabile
           | apelare_functii
           | creare_obiect
           | ID ASSIGN expresie
           | ID ASSIGN expresie_string
           | decl_const
           | decl_for
           | decl_if
           | decl_while
           | calculate
           ;

bloc : BGIN list END
     ;

calculate : EVAL '(' eval_exp ')' {printf("Valoare: %i\n", $3);}
          ;

eval_exp : eval_exp '+' eval_exp {$$ = $1 + $3;}
         | eval_exp '-' eval_exp {$$ = $1 - $3;}
         | eval_exp '*' eval_exp {$$ = $1 * $3;}
         | eval_exp '/' eval_exp {$$ = $1 / $3;}
         | eval_exp '%' eval_exp {$$ = $1 % $3;}
         | '(' eval_exp ')' {$$ = $2;}
         | '-' eval_exp {$$ = -$2;}
         | NR {$$ = $1;}
         | ID {;}
         | ID '[' NR ']' {;}
         ;


%%

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
   print_results();
   fclose(yyin);
}
