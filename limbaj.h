#include <stdlib.h>
#include <stdio.h>

#define OUTPUT_FILE "symbol_table.txt"

unsigned program_status = 1;

typedef struct expr {
	char* type;

	int intval;
	float floatval;
	char* stringval;
	char* otherval;
	char charval;
} expr;

char *get_exp_type(expr *mexpr1, expr *mexpr2)
{
  if(!strcmp(mexpr1->type, "other") || !strcmp(mexpr2->type, "other"))
		return "wrong_expr";
	if(!strcmp(mexpr1->type, "string") || !strcmp(mexpr2->type, "string"))
		return "wrong_expr";
	if(!strcmp(mexpr1->type, "float") || !strcmp(mexpr2->type, "float"))
		return "float";
	else return "integer";
}

void free_expr(expr *mexpr)
{
	if(!strcmp(mexpr->type, "string"))
	{
		free(mexpr->stringval);
	}
	else if(!strcmp(mexpr->type, "other"))
	{
		free(mexpr->otherval);
	}
	free(mexpr->type);
	free(mexpr);
}

expr *create_int_expr(int val)
{
	expr* mexpr = (expr*)malloc(sizeof(expr));
	mexpr->intval = val;
	mexpr->type = (char*) malloc(sizeof("integer"));
	strcpy(mexpr->type, "integer");
	return mexpr;
}

expr *create_float_expr(float val)
{
	expr* mexpr = (expr*)malloc(sizeof(expr));
	mexpr->floatval = val;
	mexpr->type = (char*) malloc(sizeof("float"));
	strcpy(mexpr->type, "float");
	return mexpr;
}

expr *create_char_expr(char val)
{
	expr* mexpr = (expr*)malloc(sizeof(expr));
	mexpr->charval = val;
	mexpr->type = (char*) malloc(sizeof("char"));
	strcpy(mexpr->type, "char");
	return mexpr;
}

expr *create_string_expr(char *val)
{
	expr* mexpr = (expr*)malloc(sizeof(expr));
	mexpr->stringval = (char*) malloc(sizeof(val));
	strcpy(mexpr->stringval, val);
	mexpr->type = (char*) malloc(sizeof("string"));
	strcpy(mexpr->type, "string");
	return mexpr;
}

expr *create_other_expr(char *val)
{
	expr* mexpr = (expr*)malloc(sizeof(expr));
	mexpr->otherval = (char*) malloc(sizeof(val));
	strcpy(mexpr->otherval, val);
	mexpr->type = (char*) malloc(sizeof("other"));
	strcpy(mexpr->type, "other");
	return mexpr;
}

void print_results()
{
   // Delete delete the existing symbol table.
   if(remove(OUTPUT_FILE) == 0)
      printf("Deleted successfully.\n");
   else
      printf("Unable to delete the file. Don't worry, maybe it didn't exist.\n");

   // Create symbol table.
   FILE *symbol_table;
   symbol_table = fopen(OUTPUT_FILE, "w");
   if(!symbol_table)
   {
      printf("Unable to open %s.\n", OUTPUT_FILE);
      exit(EXIT_FAILURE);
   }
   fclose(symbol_table);
}
