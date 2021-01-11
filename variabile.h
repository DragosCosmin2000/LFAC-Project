#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 100

typedef struct variable {
	char* name;
	char* var_type;

	int is_assigned;
	int is_const;

	int intval;
	float floatval;
	char* stringval;
	char* otherval;

	int vec_size;

	int *vec_intval;
	float *vec_floatval;
	char **vec_stringval;
	char **vec_otherval;

	char* memberOf;
	int scope;
	int depth;
} variable;

variable var_table[m];
int nr_vars = 0;

int checkVariableExistence(char *ID, char* type, unsigned int scope, unsigned int depth, char *current_member)
{
	return 0;
}

void extend(int a)
{

}

void addVariable(char *ID, char* type, unsigned int scope, unsigned int depth, char *current_member)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup(type);
	var_table[nr_vars].is_assigned = 0;
	var_table[nr_vars].is_const = 0;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void printVars(FILE *file)
{
	for(int i = 0; i < nr_vars; i++)
	{
		printf("Nume: %s | Tip: %s | Scope: %d | Depth: %d | Member of: %s", var_table[i].name, var_table[i].var_type, var_table[i].scope, var_table[i].depth, var_table[i].memberOf);
		if(var_table[i].is_const)
			printf(" | CONST ");
		if(var_table[i].is_assigned)
		{
			printf(" | VALUE: ");
			if(!strcmp(var_table[i].var_type, "integer") || !strcmp(var_table[i].var_type, "bool"))
			{
				if(var_table[i].vec_size != 0)
					printf("PRINTARE VECTOR");
				else
					printf("%d ", var_table[i].intval);
			}

			if(!strcmp(var_table[i].var_type, "float"))
			{
				if(var_table[i].vec_size != 0)
					printf("PRINTARE VECTOR");
				else
					printf("%f ", var_table[i].floatval);
			}

			if(!strcmp(var_table[i].var_type, "string"))
			{
				if(var_table[i].vec_size != 0)
					printf("PRINTARE VECTOR");
				else
					printf("%s ", var_table[i].stringval);
			}
		}
		else
			printf(" | UNDEF ");

		printf("\n");
	}
}

char *get_var_type(char *id, char *current_member, int current_depth)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)))
					return var_table[i].var_type;
			}
		}
	}
	return "undef";
}
