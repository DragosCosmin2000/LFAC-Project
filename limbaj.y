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
int nr_parametrii=0,pr1=0,pr2=0;
int locatie=0;
int ok=0;
int var_depth = 0, var_scope = 0;
char aux_var_current_member[300], var_current_member[300] = "global";

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
%type<strval> parametrii param  param_call parametrii_call 
%type<strval> apelare_functii
%type<type> tip VAL expresie expresie_string param_f

%left AND OR NOT
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
           | decl_functii //{ if(program_status==0){ printf("Program gresit.\n");return 0;}}
           ;

decl_clase : CLASS ID '{'
            {locatie=1;}
            {
               //Clase
               if(cClas($2)==1)
                  pushClas($2);
               else{
                  program_status=0;
                  printf("Linia %d: Clase %s exista deja.\n", yylineno, $2);
               }
            }
            {
            	// Variabile
            	var_scope++;
            	var_depth++;
            	strcpy(var_current_member, "class ");
            	strcat(var_current_member, $2);
            }
             continut_clasa '}' {locatie=0;}
             {
            	// Variabile
            	var_scope--;
            	var_depth--;
            	strcpy(var_current_member, "global");
            }
            ;

continut_clasa : PRV ':' declaratii
               | PUB ':' declaratii
               | PRV ':' declaratii PUB ':' declaratii
               ;

creare_obiect : ID ID ASSIGN NEW ID'['NR']'
              {
                if(cObj($1)==1)
                  addObjects($1,$2);
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              | ID ID ASSIGN NEW ID'['']'
              {
                if(cObj($1)==1)
                  addObjects($1,$2);
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              | ID ID ASSIGN NEW ID
              {
                if(cObj($1)==1)
                  addObjects($1,$2);
                else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              ;

apelare_functii : ID '(' parametrii_call ')' 
                {
                    if(checkParametrii2($1,$3,pr2)==0)
                      printf("Eroare linia %d : parametrii nu se potrivesc \n",yylineno);
                    else
                      if(checkParametrii2($1,$3,pr2)==2)
                        printf("Eroare linia %d : functia %s nu exista \n",yylineno,$1);
                    ok=0;
                    pr2=0;
                }
                | ID '(' ')' 
                {
                if(ok==2)
                  if(checkParametrii1($1)==0)
                          printf("aeroare\n");
                      else
                          $$=get_fun_type($1);
                ok=0;
                }
                ;

parametrii_call : param_call ',' parametrii_call
                {
                  char params[1000];
                  strcpy(params, $$);
                  strcat(params, " ");
                  strcat(params, $3);
                  $$ = params;
                  pr2++;
                }
                | param_call {$$=$1;pr2++;}
                ;

param_call : expresie {$$=$1;}
           | expresie_string {$$= $1;}
           ;

tip : INT | FLOAT | BOOL | STRING | CHAR ;

decl_variabile : tip ID
            		{
            			if(!checkVariableExistence($2, $1, var_scope, var_depth, var_current_member))
            				addVariable($2, $1, var_scope, var_depth, var_current_member);
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila %s exista deja.\n", yylineno, $2);
            			}
            		}
               | tip ID ASSIGN expresie
               {
                  // Variabile
                  if(strcmp($1, $4))
                  {
                    program_status = 0;
                    printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, $1);
                  }
               }
               | tip ID ASSIGN expresie_string
               | tip ID '[' NR ']'
               ;

decl_const : CONST tip ID ASSIGN NR
           | CONST tip ID ASSIGN STRING
           ;

decl_if :
        {
          var_depth++;
        }
        IF '(' expr_bool ')' '{' list'}'
        {
          var_depth--;
        }
        ;
decl_while :
            {
              var_depth++;
            }
            WHILE '(' expr_bool ')' '{' list '}'
            {
              var_depth--;
            }
            ;

decl_for :
          {
            var_depth++;
          }
          FOR '(' ID ASSIGN expresie ';' expr_bool ';' ID ASSIGN expresie ')' '{' list '}'
          {
            var_depth--;
          }
          ;

semne : GT | LT | EQ | LET | GET ;


expr_bool : '(' expr_bool ')'
          | expr_bool AND expr_bool
          | expr_bool OR expr_bool
          | NOT expr_bool
          | expresie semne expresie
          ;

decl_functii : tip ID
	     '(' parametrii ')'

       {
         // Variabile
         var_scope++;
         var_depth++;
         if(!strncmp(var_current_member, "class", 5))
         {
           strcpy(aux_var_current_member, var_current_member);
           strcat(var_current_member, " method ");
           char signature[300];
           strcpy(signature, $1);
           strcat(signature, " ");
           strcat(signature, $2);
           strcat(signature, " ");
           strcat(signature, "(");
           strcat(signature, " ");
           strcat(signature, $4);
           signature[strlen(signature) - 1] = '\0';
           strcat(signature, " ");
           strcat(signature, ")");
           strcat(var_current_member, signature);
         }
         else
         {
           strcpy(var_current_member, "function ");
           char signature[300];
           strcpy(signature, $1);
           strcat(signature, " ");
           strcat(signature, $2);
           strcat(signature, " ");
           strcat(signature, "(");
           strcat(signature, " ");
           strcat(signature, $4);
           signature[strlen(signature) - 1] = '\0';
           strcat(signature, " ");
           strcat(signature, ")");
           strcat(var_current_member, signature);
         }
       }

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
            {
          		// Variabile
          		var_scope--;
          		var_depth--;
          		strcpy(var_current_member, aux_var_current_member);
            }
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

param_f : expresie {$$=$1; pr1++;}
        | expresie ',' param_f
          {
                  char params[1000];
                  strcpy(params, $$);
                  strcat(params, " ");
                  strcat(params, $3);
                  $$ = params;
                  pr1++;
          };
expresie : expresie '+' expresie {$$ = get_exp_type($1, $3);}
         | expresie '-' expresie {$$ = get_exp_type($1, $3);}
         | expresie '*' expresie {$$ = get_exp_type($1, $3);}
         | expresie '/' expresie {$$ = get_exp_type($1, $3);}
         | expresie '%' expresie {$$ = get_exp_type($1, $3);}
         | '(' expresie ')' {$$ = $2;}
         | VAL {$$ = $1;}
         | ID {$$ = get_var_type($1, var_current_member, var_depth);}
         | ID '[' NR ']' {$$ = get_var_type($1, var_current_member, var_depth);}
         | LENGTH '(' ID ')' {$$ = "integer";}
         | ID '(' param_f ')' { ok++;
                                if(checkParametrii2($1,$3,pr1)==0)
                                  printf("Eroare linia %d: functia %s are tip diferit\n",yylineno,$1);
                                else
                                  $$=get_fun_type($1);
                                pr1=0;
                              }
        | ID '(' ')' {
                      ok++;
                      if(checkParametrii1($1)==0)
                          printf("aeroare\n");
                      else
                          $$=get_fun_type($1);
                     }
         ;

VAL : NR {$$ = "integer";}
    | NRFLOAT {$$ = "float";}
    | CHARS {$$ = "char";}
    ;

expresie_string : expresie_string '+' expresie_string {$$="string";}
                | '(' expresie_string ')' {$$="string";}
                | STRINGS {$$="string";}
                | TOUPPER '(' ID ')' {$$="string";}
                | TOLOWER '(' ID ')' {$$="string";}
                ;

list : statements ';'
     | list statements ';'
     ;

statements : decl_variabile
           | apelare_functii
           | creare_obiect
           | ID '['NR']' ASSIGN NR
           | ID ASSIGN expresie
           | ID ASSIGN expresie_string
           | decl_const
           | decl_for
           | decl_if
           | decl_while
           | calculate
           ;

bloc :
	{
		// Variabile
		var_scope++;
		var_depth++;
		strcpy(var_current_member, "main");
	}
	BGIN list END
	{
		// Variabile
		var_scope--;
		var_depth--;
		strcpy(var_current_member, "global");
	}
     ;

calculate : EVAL '(' eval_exp ')' {if(program_status==1) printf("Valoare: %i\n", $3);}
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
   printf("   Variabile: \n");
   printVars(NULL);
   printf("   Functii: \n");
   printFunctii();
   printf("   Clase: \n");
   printClase();
   print_results();
   fclose(yyin);
}
