#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 100

typedef struct variable {
	char* name;
	char* var_type;

	int is_const;

	int intval;
	float floatval;
	char* stringval;
	char* otherval;
	char charval;

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
	int dif_depth = 0;
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(ID, var_table[i].name))
			if(!strcmp(var_table[i].memberOf, current_member))
			{
				if(var_table[i].depth == depth)
				{
					return 1;
				}
				else if(var_table[i].depth < depth)
				{
					// Exista dar are depth mai mic
					dif_depth = 1;
				}
			}
			else if(!strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)))
			{
				dif_depth = 1;
			}
			else if(!strcmp(var_table[i].memberOf, "global"))
			{
				if(var_table[i].depth == 0)
					dif_depth = 1;
			}
	}
	if(dif_depth == 1)
		return 2;
	return 0;
}

void extend(int a)
{

}

void addVariableInt(char *ID, unsigned int scope, unsigned int depth, char *current_member, int val, int const_flag)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("integer");
	var_table[nr_vars].is_const = const_flag;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].intval = val;
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void addVariableFloat(char *ID, unsigned int scope, unsigned int depth, char *current_member, float val, int const_flag)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("float");
	var_table[nr_vars].is_const = const_flag;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].floatval = val;
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void addVariableChar(char *ID, unsigned int scope, unsigned int depth, char *current_member, char val, int const_flag)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("char");
	var_table[nr_vars].is_const = const_flag;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].charval = val;
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void addVariableString(char *ID, unsigned int scope, unsigned int depth, char *current_member, char *val, int const_flag)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("string");
	var_table[nr_vars].is_const = const_flag;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].stringval = strdup(val);
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void addVariableOther(char *ID, unsigned int scope, unsigned int depth, char *current_member, char *val, int const_flag)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("other");
	var_table[nr_vars].is_const = const_flag;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].otherval = strdup(val);
	var_table[nr_vars++].memberOf = strdup(current_member);
}

void printVars(FILE *file)
{
	for(int i = 0; i < nr_vars; i++)
	{
		printf("Nume: %s | Tip: %s | Scope: %d | Depth: %d | Member of: %s", var_table[i].name, var_table[i].var_type, var_table[i].scope, var_table[i].depth, var_table[i].memberOf);
		if(var_table[i].is_const)
			printf(" | CONST ");

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

		if(!strcmp(var_table[i].var_type, "char"))
		{
			if(var_table[i].vec_size != 0)
				printf("PRINTARE VECTOR");
			else
				printf("%c ", var_table[i].charval);
		}

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
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					return var_table[i].var_type;
			}
		}
	}
}

variable get_var(char *id, char *current_member, int current_depth)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)))
					return var_table[i];
			}
		}
	}
}
