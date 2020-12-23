%{
#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern FILE* yyout;
extern char* yytext;
extern int yylineno;
void printIn_symbol(char* value);
%}
%union {
int intval;
char* strval;
}
%token <strval>NR
%token <strval>STRING
%token <strval>TIP
%token <strval>CHAR
%token <strval>ID
%token BGIN END ASSIGN CLS PRV PUB WHILE FOR IF SIGNS SEMNE NEW CONST TOUPPER TOLOWER LENGTH
%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii : declaratie_var ';'
           | declaratie_fun ';'
	         | declaratii declaratie_var ';'
           | declaratii declaratie_fun ';'
	      ;
declaratii_faraFunctii : declaratie_var ';'
                       | declaratii_faraFunctii declaratie_var ';'
                   ;
declaratie_var : TIP decl
               | TIP ID {char *s; strcpy(s, $1); strcat(s, " "); strcat(s, $2); printIn_symbol(s);}
               | CONST TIP ID
               | CONST TIP decl
               | asign_vector
               | TIP decl_vectori
               | if_stmt
               | while_stmt
               | for_stmt
               | operatii_clase
               | operatii_string
               | ID ASSIGN expresie
               ;
declaratie_fun : TIP functii
               | clase
               ;
decl_vectori : ID'[' NR ']'
             | ID'[' NR ']' ASSIGN NR
             ;
asign_vector : ID'[' NR ']' ASSIGN NR
             | ID'[' NR ']' ASSIGN ID
             | ID'[' NR ']'
             ;
lista_param : param
            | lista_param ','  param
            ;
functii : ID '(' lista_param ')' '{' declaratii_faraFunctii '}'
        | ID '(' ')' '{' declaratii_faraFunctii '}'
        | ID '(' lista_param ')'
        | ID '(' ')'
        ;
value : NR
      | NR '.' NR
      | CHAR
      | STRING
      ;
decl : ID ASSIGN value
     | ID ASSIGN ID
     | decl ',' ID
     | decl ',' ID ASSIGN value
     ;
if_stmt : IF '(' vars SIGNS vars ')' '{' declaratii_faraFunctii '}'
        ;
while_stmt : WHILE '(' vars SIGNS vars ')' '{' declaratii_faraFunctii '}'
           ;
vars: value | ID | asign_vector;
for_stmt : FOR '(' ID ASSIGN vars ';' ID SIGNS vars ';' ID ASSIGN ID SEMNE vars ')' '{' declaratii_faraFunctii '}'
         ;
param : TIP ID
      ;
clase : CLS ID '{' pozitii '}'
      ;
pozitii : PRV ':' declaratii PUB ':' declaratii
        | PRV ':' declaratii
        | PUB ':' declaratii
        ;
operatii_clase : ID ID ASSIGN NEW ID '[' NR ']'
               | ID ID ASSIGN NEW ID
               ;
operatii_string : ID'.'TOUPPER
                | ID'.'TOLOWER
                | ID'.'LENGTH
                ;
/* bloc */
bloc : BGIN list END
     ;

/* lista instructiuni */
list :  statement ';'
     | list statement ';'
     ;

/* instructiune */
statement: declaratie_var
         | ID '(' lista_apel ')'
         ;
expresie : '(' expresie ')'
         | expresie SEMNE expresie
         | value
         | ID
         ;
lista_apel : expresie
           | ID '(' lista_apel ')'
           | lista_apel ',' expresie
           | lista_apel ',' ID '(' lista_apel ')'
           ;
%%

void printIn_symbol(char* value)
{
   FILE* symb = fopen("symbol_table.txt", "a");
   strcat(value, "\n");
   fprintf(symb, value);
   fclose(symb);
}

void yyerror(char * s){
  printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
// Stergem symbol_table.txt
if(remove("symbol_table.txt") == 0)
  printf("symbol_table.txt a fost sters cu succes\n");
else
  printf("eroare la stergere symbol_table.txt. Posibil ca fisierul sa nu fi existat!\n");
yyin=fopen(argv[1],"r");
yyparse();
fclose(yyin);
}
