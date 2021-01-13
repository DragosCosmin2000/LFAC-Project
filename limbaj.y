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
int valori_eval[20];
int nr_eval=0;
void yyerror(const char* error_message);
%}
%union{
   char* strval;
   char* type;
   int intval;
   int const_flag;
   float floatval;
   char charval;
   struct expr *expr_val;
}
%token<intval> NR
%token<floatval> NRFLOAT
%token<strval> ID STRINGS
%token<charval> CHARS
%token<type> INT FLOAT BOOL STRING CHAR
%token EVAL ASSIGN TOUPPER TOLOWER LENGTH BGIN END PRV PUB NEW CLASS IF WHILE FOR
%token<strval> CONST
%type<intval> eval_exp calculate
%token GT LT EQ LET GET
%type<strval> parametrii param  param_call parametrii_call
%type<strval> apelare_functii
%type<type> tip
%type<expr_val> expresie expresie_string VAL

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
              if(cClas($1)==0 && cClas($5)==0){
                   if(cObj($1)==1)
                  addObjects($1,$2);
                   else
                  printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, $1);
                  }
                  else
                  printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              | ID ID ASSIGN NEW ID'['']'
              {
              if(cClas($1)==0 && cClas($5)==0){
                if(cObj($1)==1)
                addObjects($1,$2);
                else
                printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, $1);
                }
                else
                printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              | ID ID ASSIGN NEW ID
              {
              if(cClas($1)==0 && cClas($5)==0){
                if(cObj($1)==1)
                addObjects($1,$2);
                else
                printf("Linia %d: Clasa %s contine deja acest obiect.\n", yylineno, $1);
                }
                else
                printf("Linia %d: Clasa %s nu exista.\n", yylineno, $1);
              }
              ;

apelare_functii : ID '(' parametrii_call ')'
                {   char aux3[100];
                    strcpy(aux3,$3);
                    for(int i=1;i<strlen(aux3)-1;i++)
                      if(aux3[i]==' ' && aux3[i-1]==' '){
                          strcpy(aux3+i-1,aux3+i);
                      }
                     strcpy($3,aux3);
                     strcat($3, " ");
                    if(checkParametrii2($1,$3,pr2)==0)
                      printf("Eroare linia %d : apel incorect.\n",yylineno);
                    else
                       $$=get_fun_type($1);
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
                  strcat($$ ," ");
                  strcat($$, $3);
                  pr2++;
                }
                | param_call {char aux[200]; strcpy(aux," "); strcat(aux,$1);$$=aux;pr2++;}
                ;

param_call : expresie {$$=$1->type; }
           | expresie_string {$$=$1->type; }
           ;

tip : INT | FLOAT | BOOL | STRING | CHAR ;

decl_variabile : tip ID
            		{
            			if(checkVariableExistence($2, $1, var_scope, var_depth, var_current_member) != 1)
            			{
                    if(!strcmp($1, "integer"))
                      addVariableInt($2, var_scope, var_depth, var_current_member, 0, 0);
                    else if(!strcmp($1, "float"))
                      addVariableFloat($2, var_scope, var_depth, var_current_member, 0.0, 0);
                    else if(!strcmp($1, "char"))
                      addVariableChar($2, var_scope, var_depth, var_current_member, '\0', 0);
                    else if(!strcmp($1, "string"))
                      addVariableString($2, var_scope, var_depth, var_current_member, "\0", 0);
                    else if(!strcmp($1, "other"))
                      addVariableOther($2, var_scope, var_depth, var_current_member, "none", 0);
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $2);
            			}
            		}
               | tip ID ASSIGN expresie
               {
                  // Variabile
                  if(checkVariableExistence($2, $1, var_scope, var_depth, var_current_member) != 1)
            			{
                    // Check type.
                    if(strcmp($1, $4->type))
                    {
                      program_status = 0;
                      printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, $1);
                    }
                    else
                    {
                      if(!strcmp($1, "integer"))
                        addVariableInt($2, var_scope, var_depth, var_current_member, $4->intval, 0);
                      else if(!strcmp($1, "float"))
                        addVariableFloat($2, var_scope, var_depth, var_current_member, $4->floatval, 0);
                      else if(!strcmp($1, "char"))
                        addVariableChar($2, var_scope, var_depth, var_current_member, $4->charval, 0);
                      else if(!strcmp($1, "string"))
                        addVariableString($2, var_scope, var_depth, var_current_member, $4->stringval, 0);
                      else if(!strcmp($1, "other"))
                        addVariableOther($2, var_scope, var_depth, var_current_member, $4->otherval, 0);
                    }
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $2);
            			}
                  free_expr($4);
               }
               | tip ID ASSIGN expresie_string
               {
                  // Variabile
                  if(checkVariableExistence($2, $1, var_scope, var_depth, var_current_member) != 1)
            			{
                    // Check type.
                    if(strcmp($1, $4->type))
                    {
                      program_status = 0;
                      printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, $1);
                    }
                    else
                      addVariableString($2, var_scope, var_depth, var_current_member, $4->stringval, 0);
                  }
            			else
            			{
            				program_status = 0;
            				printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $2);
            			}
                  free_expr($4);
               }
               | tip ID '[' NR ']'
               {
                  if($4 > 0)
                  {
                   if(checkVariableExistence($2, $1, var_scope, var_depth, var_current_member) != 1)
                   {
                     if(!strcmp($1, "integer"))
                       addArrayVariableInt($2, var_scope, var_depth, var_current_member, $4);
                     else if(!strcmp($1, "float"))
                       addArrayVariableFloat($2, var_scope, var_depth, var_current_member, $4);
                     else if(!strcmp($1, "char"))
                       addArrayVariableChar($2, var_scope, var_depth, var_current_member, $4);
                     else if(!strcmp($1, "string"))
                       addArrayVariableString($2, var_scope, var_depth, var_current_member, $4);
                     else if(!strcmp($1, "other"))
                       addVariableOther($2, var_scope, var_depth, var_current_member, "none", 0);
                   }
                   else
                   {
                     program_status = 0;
                     printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $2);
                   }
                  }
                  else
                  {
                    program_status = 0;
                    printf("Linia %d: Spatiul alocat trebuie sa fie mai mare decat 0.\n", yylineno);
                  }
               }
               ;

decl_const : CONST tip ID ASSIGN expresie
            {
               // Variabile
               if(checkVariableExistence($3, $2, var_scope, var_depth, var_current_member) != 1)
               {
                 // Check type.
                 if(strcmp($2, $5->type))
                 {
                   program_status = 0;
                   printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, $2);
                 }
                 else
                 {
                   if(!strcmp($2, "integer"))
                     addVariableInt($3, var_scope, var_depth, var_current_member, $5->intval, 1);
                   else if(!strcmp($2, "float"))
                     addVariableFloat($3, var_scope, var_depth, var_current_member, $5->floatval, 1);
                   else if(!strcmp($2, "char"))
                     addVariableChar($3, var_scope, var_depth, var_current_member, $5->charval, 1);
                   else if(!strcmp($2, "string"))
                     addVariableString($3, var_scope, var_depth, var_current_member, $5->stringval, 1);
                   else if(!strcmp($2, "other"))
                     addVariableOther($3, var_scope, var_depth, var_current_member, $5->otherval, 1);
                 }
               }
               else
               {
                 program_status = 0;
                 printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $3);
               }
               free_expr($5);
            }
           | CONST tip ID ASSIGN expresie_string
           {
              // Variabile
              if(checkVariableExistence($3, $2, var_scope, var_depth, var_current_member) != 1)
              {
                // Check type.
                if(strcmp($2, $5->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, $2);
                }
                else
                  addVariableString($3, var_scope, var_depth, var_current_member, $5->stringval, 1);
              }
              else
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> exista deja.\n", yylineno, $3);
              }
              free_expr($5);
           }
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
               strcpy(aux_var_current_member, var_current_member);
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
                   strcat(signature, ")");
                   strcat(var_current_member, signature);
                 }
                 else
                 {
                   strcpy(aux_var_current_member, var_current_member);
                   strcpy(var_current_member, "function ");
                   char signature[300];
                   strcpy(signature, $1);
                   strcat(signature, " ");
                   strcat(signature, $2);
                   strcat(signature, " ");
                   strcat(signature, "(");
                   strcat(signature, " ");
                   strcat(signature, ")");
                   strcat(var_current_member, signature);
                 }
               }
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
             {
           		// Variabile
           		var_scope--;
           		var_depth--;
           		strcpy(var_current_member, aux_var_current_member);
             }
             ;

parametrii : param ',' parametrii {strcat($$,$3);}
          | param {strcpy($$,$1);}
          ;

param : tip ID {strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, ",");nr_parametrii++; }
     | tip ID'['']' {strcpy($$, $1); strcat($$, " "); strcat($$, $2); strcat($$, "[]"); strcat($$, ",");nr_parametrii++; }
     ;

expresie : expresie '+' expresie
         {
            char type[100];
            strcpy(type, get_exp_type($1, $3));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              $$ = create_other_expr("wrong_expr");
         }
         | expresie '-' expresie
         {
            char type[100];
            strcpy(type, get_exp_type($1, $3));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              $$ = create_other_expr("wrong_expr");
         }
         | expresie '*' expresie
         {
            char type[100];
            strcpy(type, get_exp_type($1, $3));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              $$ = create_other_expr("wrong_expr");
         }
         | expresie '/' expresie
         {
            char type[100];
            strcpy(type, get_exp_type($1, $3));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              $$ = create_other_expr("wrong_expr");
         }
         | expresie '%' expresie
         {
            char type[100];
            strcpy(type, get_exp_type($1, $3));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "wrong_expr"))
              $$ = create_other_expr("wrong_expr");
         }
         | '(' expresie ')' {$$ = $2;}
         | VAL {$$ = $1;}
         | ID
         {
            if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              $$ = create_other_expr("wrong_expr");
            }
            else
            {
              char type[100];
              strcpy(type, get_var_type($1, var_current_member, var_depth));
              variable mvar = get_var($1, var_current_member, var_depth);
              if(!strcmp(type, "integer"))
                $$ = create_int_expr(mvar.intval);
              else if(!strcmp(type, "float"))
                $$ = create_float_expr(mvar.floatval);
              else if(!strcmp(type, "char"))
                $$ = create_char_expr(mvar.charval);
              else if(!strcmp(type, "string"))
                $$ = create_string_expr(mvar.stringval);
              else if(!strcmp(type, "other"))
                $$ = create_other_expr(mvar.otherval);
            }
         }
         | ID '[' NR ']'
         {
           if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
           {
             program_status = 0;
             printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
             $$ = create_other_expr("wrong_expr");
           }
           else
           {
             char type[100];
             strcpy(type, get_var_type($1, var_current_member, var_depth));
             variable mvar = get_var($1, var_current_member, var_depth);
             if(!strcmp(type, "integer"))
               $$ = create_int_expr(mvar.intval);
             else if(!strcmp(type, "float"))
               $$ = create_float_expr(mvar.floatval);
             else if(!strcmp(type, "char"))
               $$ = create_char_expr(mvar.charval);
             else if(!strcmp(type, "string"))
               $$ = create_string_expr(mvar.stringval);
             else if(!strcmp(type, "other"))
               $$ = create_other_expr(mvar.otherval);
           }
         }
         | LENGTH '(' ID ')'
         {
            if(checkVariableExistence($3, "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> exista.\n", yylineno, $3);
              $$ = create_other_expr("wrong_expr");
            }
            else
            {
              $$ = create_int_expr(0); // vec_size
            }
         }
         | ID '(' parametrii_call ')'
        { char aux3[100];
          strcpy(aux3,$3);
          for(int i=1;i<strlen(aux3)-1;i++)
             if(aux3[i]==' ' && aux3[i-1]==' '){
                  strcpy(aux3+i,aux3+i+1);
                  }
          strcpy($3,aux3);
          if(checkParametrii2($1,$3,pr1)==0) // verificare daca functia chiar exista
          {
            pr1 = 0;
            printf("Linia %d: Functia %s nu exista.\n", yylineno, $1);
            $$ = create_other_expr("wrong_expr");
          }
          else
            {
              char type[100];
              strcpy(type, get_fun_type($1));
              if(!strcmp(type, "integer"))
                $$ = create_int_expr(0);
              else if(!strcmp(type, "float"))
                $$ = create_float_expr(0.0);
              else if(!strcmp(type, "char"))
                $$ = create_char_expr('0');
              else if(!strcmp(type, "string"))
                $$ = create_string_expr("0");
              else if(!strcmp(type, "other"))
                $$ = create_other_expr("other");
            }
         pr1=0;
        }
        | ID '(' ')'
         {
         if(checkParametrii1($1)==0) // verificare daca functia chiar exista
         {
           pr1 = 0;
           printf("Linia %d: Functia %s nu exista.\n", yylineno, $1);
           $$ = create_other_expr("wrong_expr");
         }
         else
         {
            char type[100];
            strcpy(type, get_fun_type($1));
            if(!strcmp(type, "integer"))
              $$ = create_int_expr(0);
            else if(!strcmp(type, "float"))
              $$ = create_float_expr(0.0);
            else if(!strcmp(type, "char"))
              $$ = create_char_expr('0');
            else if(!strcmp(type, "string"))
              $$ = create_string_expr("0");
            else if(!strcmp(type, "other"))
              $$ = create_other_expr("other");
          pr1=0;
         }
         }
         ;

VAL : NR {$$ = create_int_expr($1);}
    | NRFLOAT {$$ = create_float_expr($1);}
    | CHARS {$$ = create_char_expr($1);}
    ;

expresie_string : expresie_string '+' expresie_string {$$ = create_string_expr("expr");}
                | '(' expresie_string ')' {$$ = create_string_expr("expr");}
                | STRINGS {$$ = create_string_expr($1);}
                | TOUPPER '(' ID ')' {$$ = create_string_expr("expr");}
                | TOLOWER '(' ID ')' {$$ = create_string_expr("expr");}
                ;

list : statements ';'
     | list statements ';'
     ;

statements : decl_variabile
           | apelare_functii
           | creare_obiect
           | ID '['NR']' ASSIGN expresie
           {
              // Variabile
              if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type($1, var_current_member, var_depth));
                if(strcmp(vtype, $6->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize($1, var_depth, var_current_member);
                  if(!checkConst($1, var_depth, var_current_member))
                  {
                    if($3 >= 0 && $3 < sz)
                    {
                      if(!strcmp(vtype, "integer"))
                        changeArrayIntVal($1, var_depth, var_current_member, $6->intval, $3);
                      else if(!strcmp(vtype, "float"))
                        changeArrayFloatVal($1, var_depth, var_current_member, $6->floatval, $3);
                      else if(!strcmp(vtype, "char"))
                        changeArrayCharVal($1, var_depth, var_current_member, $6->charval, $3);
                      else if(!strcmp(vtype, "string"))
                        changeArrayStringVal($1, var_depth, var_current_member, $6->stringval, $3);
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
              free_expr($6);
           }
           | ID '['NR']' ASSIGN expresie_string
           {
              // Variabile
              if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type($1, var_current_member, var_depth));
                if(strcmp(vtype, $6->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize($1, var_depth, var_current_member);
                  if(!checkConst($1, var_depth, var_current_member))
                  {
                    if($3 >= 0 && $3 < sz)
                    {
                      changeArrayStringVal($1, var_depth, var_current_member, $6->stringval, $3);
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
              free_expr($6);
           }
           | ID ASSIGN expresie
           {
              // Variabile
              if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type($1, var_current_member, var_depth));
                if(strcmp(vtype, $3->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize($1, var_depth, var_current_member);
                  if(!checkConst($1, var_depth, var_current_member))
                  {
                    if(sz == 0)
                    {
                      if(!strcmp(vtype, "integer"))
                        changeIntVal($1, var_depth, var_current_member, $3->intval);
                      else if(!strcmp(vtype, "float"))
                        changeFloatVal($1, var_depth, var_current_member, $3->floatval);
                      else if(!strcmp(vtype, "char"))
                        changeCharVal($1, var_depth, var_current_member, $3->charval);
                      else if(!strcmp(vtype, "string"))
                        changeStringVal($1, var_depth, var_current_member, $3->stringval);
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
              free_expr($3);
           }
           | ID ASSIGN expresie_string
           {
              // Variabile
              if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              }
              else
              {
                // Check type.
                char vtype[300];
                strcpy(vtype, get_var_type($1, var_current_member, var_depth));
                if(strcmp(vtype, $3->type))
                {
                  program_status = 0;
                  printf("Linia %d: Expresia trebuie sa aiba tipul %s.\n", yylineno, vtype);
                }
                else
                {
                  int sz = getSize($1, var_depth, var_current_member);
                  if(!checkConst($1, var_depth, var_current_member))
                  {
                    if(sz == 0)
                    {
                      changeStringVal($1, var_depth, var_current_member, $3->stringval);
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
              free_expr($3);
           }
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

calculate : EVAL '(' eval_exp ')' { valori_eval[nr_eval++]=$3;}
          ;

eval_exp : eval_exp '+' eval_exp {$$ = $1 + $3;}
         | eval_exp '-' eval_exp {$$ = $1 - $3;}
         | eval_exp '*' eval_exp {$$ = $1 * $3;}
         | eval_exp '/' eval_exp {$$ = $1 / $3;}
         | eval_exp '%' eval_exp {$$ = $1 % $3;}
         | '(' eval_exp ')' {$$ = $2;}
         | '-' eval_exp {$$ = -$2;}
         | NR {$$ = $1;}
         | ID
         {
            if(checkVariableExistence($1, "none", var_scope, var_depth, var_current_member) == 0)
            {
              program_status = 0;
              printf("Linia %d: Variabila <%s> nu exista.\n", yylineno, $1);
              $$ = 0;
            }
            else
            {
              char type[100];
              strcpy(type, get_var_type($1, var_current_member, var_depth));
              variable mvar = get_var($1, var_current_member, var_depth);
              if(!strcmp(type, "integer"))
                 $$ = mvar.intval;
              else
              {
                program_status = 0;
                printf("Linia %d: Variabila <%s> trebuie sa fie integer.\n", yylineno, $1);
                $$ = 0;
              }
            }
         }
         | ID '[' NR ']' {;}
         | ID '(' parametrii_call ')' {
        			if(checkParametrii2($1,$3,pr1)==0)
              {
                printf("Eroare linia %d: functia %s nu exista \n",yylineno,$1);
                program_status = 0;
              }
              else
              {
                  if(strcmp(get_fun_type($1), "integer"))
                  {
                    printf("Eroare linia %d: functia %s nu este de tipul integer. \n",yylineno,$1);
                    program_status = 0;
                  }
        				   $$=0;
              }
                pr1=0;
		       }
           | ID '(' ')' {
          			if(checkParametrii1($1)==0)
                {
                  printf("Eroare linia %d: functia %s nu exista \n",yylineno,$1);
                }
                 else
                 {
                 if(strcmp(get_fun_type($1), "integer"))
                 {
                   printf("Eroare linia %d: functia %s nu este de tipul integer. \n",yylineno,$1);
                   program_status = 0;
                 }
                  $$=0;
          				   $$=0;
                     }
                pr1=0;
  		       }
         ;
%%

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
