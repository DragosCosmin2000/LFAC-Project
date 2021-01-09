%{
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
char var_current_member[300] = "global";

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
%type<strval> parametrii param
%type<type> tip

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
           | decl_functii{ if(program_status==0){ printf("Program gresit.\n");return 0;}}
           ;

decl_clase : CLASS ID '{'
            {locatie=1;}
             continut_clasa '}' {locatie=0;};

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

decl_functii : tip ID '(' parametrii ')'  
            {
                if(cFunc($1,$2,$4,nr_parametrii,locatie)==1)
                  pushFunc($1,$2,$4,nr_parametrii,locatie);
                else{
                  printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,$2);
                  program_status=0;
                }
               nr_parametrii=0;
            }
            '{' list '}'
             | tip ID '(' ')' 
               {
                  nr_parametrii=0;
                  if(cFunc($1,$2,0,nr_parametrii,locatie)==1)
                     pushFunc($1,$2,0,nr_parametrii,locatie);
                  else{
                     printf("Eroare linia %d: Functia '%s' deja exista.\n",yylineno,$2);
                     program_status=0;
                  }
               }
             '{' list '}'
             ;

parametrii : param ',' parametrii {strcat($$,$3);}
           | param {strcpy($$,$1);}
           ;

param : tip ID {strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, ",");nr_parametrii++; }
      | tip ID'['']' {strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, "[]"); strcat($$, ",");nr_parametrii++; }
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

bloc : BGIN list END { printare();}
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
