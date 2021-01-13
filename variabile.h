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
	char *vec_charval;
	char **vec_stringval;
	char **vec_otherval;

	char* memberOf;
	int scope;
	int depth;
} variable;

variable var_table[m];
int nr_vars = 0;

void changeIntVal(char *id, unsigned int current_depth, char *current_member, int new_val)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					var_table[i].intval = new_val;
			}
		}
	}
}

void changeArrayIntVal(char *id, unsigned int current_depth, char *current_member, int new_val, int index)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					(var_table[i].vec_intval)[index] = new_val;
			}
		}
	}
}

void changeArrayFloatVal(char *id, unsigned int current_depth, char *current_member, float new_val, int index)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					(var_table[i].vec_floatval)[index] = new_val;
			}
		}
	}
}

void changeFloatVal(char *id, unsigned int current_depth, char *current_member, float new_val)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					var_table[i].floatval = new_val;
			}
		}
	}
}

void changeArrayCharVal(char *id, unsigned int current_depth, char *current_member, char new_val, int index)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					(var_table[i].vec_charval)[index] = new_val;
			}
		}
	}
}

void changeCharVal(char *id, unsigned int current_depth, char *current_member, char new_val)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					var_table[i].charval = new_val;
			}
		}
	}
}

void changeArrayStringVal(char *id, unsigned int current_depth, char *current_member, char *new_val, int index)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					strcpy((var_table[i].vec_stringval)[index], new_val);
			}
		}
	}
}

void changeStringVal(char *id, unsigned int current_depth, char *current_member, char *new_val)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
				{
					var_table[i].stringval = malloc(sizeof(char) * 300);
					strcpy(var_table[i].stringval, new_val);
				}
			}
		}
	}
}

int checkConst(char *id, unsigned int current_depth, char *current_member)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					return var_table[i].is_const;
			}
		}
	}
}

int getSize(char *id, unsigned int current_depth, char *current_member)
{
	for(int i = 0; i < nr_vars; i++)
	{
		if(!strcmp(id, var_table[i].name))
		{
			if(var_table[i].depth <= current_depth)
			{
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					return var_table[i].vec_size;
			}
		}
	}
}

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
			else if(!strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
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

void addArrayVariableInt(char *ID, unsigned int scope, unsigned int depth, char *current_member, int nr_elem)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("integer");
	var_table[nr_vars].is_const = 0;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].vec_size = nr_elem;
	var_table[nr_vars].vec_intval = (int *) malloc(nr_elem * sizeof(int));
	for(int i = 0; i < nr_elem; i++)
	{
		(var_table[nr_vars].vec_intval)[i] = 0;
	}
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

void addArrayVariableFloat(char *ID, unsigned int scope, unsigned int depth, char *current_member, int nr_elem)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("float");
	var_table[nr_vars].is_const = 0;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].vec_size = nr_elem;
	var_table[nr_vars].vec_floatval = (float *) malloc(nr_elem * sizeof(float));
	for(int i = 0; i < nr_elem; i++)
	{
		(var_table[nr_vars].vec_floatval)[i] = 0.0;
	}
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

void addArrayVariableChar(char *ID, unsigned int scope, unsigned int depth, char *current_member, int nr_elem)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("char");
	var_table[nr_vars].is_const = 0;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].vec_size = nr_elem;
	var_table[nr_vars].vec_charval = (char *) malloc(nr_elem * sizeof(char));
	for(int i = 0; i < nr_elem; i++)
	{
		(var_table[nr_vars].vec_charval)[i] = '\0';
	}
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

void addArrayVariableString(char *ID, unsigned int scope, unsigned int depth, char *current_member, int nr_elem)
{
	if(nr_vars == m - 1)
		extend(2);
	var_table[nr_vars].name = strdup(ID);
	var_table[nr_vars].var_type = strdup("string");
	var_table[nr_vars].is_const = 0;
	var_table[nr_vars].scope = scope;
	var_table[nr_vars].depth = depth;
	var_table[nr_vars].vec_size = nr_elem;
	var_table[nr_vars].vec_stringval = malloc(nr_elem * sizeof(char*));
	for(int i = 0; i < nr_elem; i++)
	{
		var_table[nr_vars].vec_stringval[i] = malloc(300 * sizeof(char));
		strcpy((var_table[nr_vars].vec_stringval)[i], "\0");
	}
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

void printVars()
{
    int i,j;
    FILE *symbol_table;
    symbol_table = fopen("symbol_table.txt", "a");
    if(!symbol_table)
   {
      printf("Unable to open %s.\n", OUTPUT_FILE);
      exit(EXIT_FAILURE);
   }
    for(int i = 0; i < nr_vars; i++)
    {
        fprintf(symbol_table,"Nume: %s | Tip: %s | Scope: %d | Depth: %d | Member of: %s", var_table[i].name, var_table[i].var_type, var_table[i].scope, var_table[i].depth, var_table[i].memberOf);
        if(var_table[i].is_const)
            fprintf(symbol_table," | CONST ");

        fprintf(symbol_table," | VALUE: ");
        if(!strcmp(var_table[i].var_type, "integer") || !strcmp(var_table[i].var_type, "bool"))
        {
            if(var_table[i].vec_size != 0)
						for(int j = 0;j < var_table[i].vec_size; j++)
						{
							fprintf(symbol_table, "%d ", (var_table[i].vec_intval)[j]);
						}
            else
                fprintf(symbol_table,"%d ", var_table[i].intval);
        }

        if(!strcmp(var_table[i].var_type, "float"))
        {
            if(var_table[i].vec_size != 0)
						for(int j = 0;j < var_table[i].vec_size; j++)
						{
							fprintf(symbol_table,"%f ", (var_table[i].vec_floatval)[j]);
						}
            else
                fprintf(symbol_table,"%f ", var_table[i].floatval);
        }

        if(!strcmp(var_table[i].var_type, "string"))
        {
            if(var_table[i].vec_size != 0)
						for(int j = 0;j < var_table[i].vec_size; j++)
						{
							fprintf(symbol_table,"%s ", (var_table[i].vec_stringval)[j]);
						}
            else
                fprintf(symbol_table,"%s ", var_table[i].stringval);
        }

        if(!strcmp(var_table[i].var_type, "char"))
        {
            if(var_table[i].vec_size != 0)
						{
							fprintf(symbol_table,"%c ", (var_table[i].vec_charval)[j]);
						}
            else
                fprintf(symbol_table,"%c ", var_table[i].charval);
        }

        fprintf(symbol_table,"\n");
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
					{return var_table[i].var_type;}
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
				if(!strcmp(var_table[i].memberOf, current_member) || !strncmp(var_table[i].memberOf, current_member, strlen(var_table[i].memberOf)) || !strcmp(var_table[i].memberOf, "global"))
					return var_table[i];
			}
		}
	}
}
