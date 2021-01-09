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
	float floatvalue;
	char* stringvalue;
	char* otherval;

	char* memberOf;
	int scope;
	int depth;
} variable;

variable var_table[m];
int nr_vars = 0;

int checkVariableExistence(char *ID, char* type, unsigned int scope, unsigned int depth, char *current_member)
{
	printf("CHECK\n");
	return 0;    
}

void addVariable(char *ID, char* type, unsigned int scope, unsigned int depth, char *current_member)
{
	printf("%s %s %d %d %s\n", ID, type, scope, depth, current_member);
}
