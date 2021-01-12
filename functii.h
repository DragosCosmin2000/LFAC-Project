#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 100

typedef struct Functions {
    char *typeFunction;
    char *nameFunction;
    int numberParameters;
    char parameters[10][10];
    int locatie;
}Functions;

typedef struct Class{
    char *className;
    char objects[20][20];
    int nr_objects;
}Class;
Functions functions[n];
Class clase[n];
int nr_classes;
int nr_functions;
void takeParameters(char *param ,char cuv[][10]){
    int x=0;
    char *aux,*aux1;
    aux = strtok( param, "," );
    while(aux){
        int i=0;
        while(aux[i]!=' ')
            i++;
        strcpy(aux+i,aux+strlen(aux));
        strcpy(cuv[x++],aux);
        aux=strtok(NULL,",");
    }
}
void pushFunc (char *type, char* name, char *param,int nr_param,int locate){
    functions[nr_functions].typeFunction=strdup(type);
    functions[nr_functions].nameFunction=strdup(name);
    functions[nr_functions].numberParameters=nr_param;
    functions[nr_functions].locatie=locate;
    if(nr_param != 0)
    {
      takeParameters(param,functions[nr_functions++].parameters);
    }
}
int cFunc(char *type, char* name, char *param,int nr_param,int locate){
    int i;
    char matrix[10][10];
    for(i=0;i<nr_functions;i++){
        if(nr_param==0 ){
            if(functions[i].numberParameters==0 && strcmp(functions[i].nameFunction,name)==0 && strcmp(functions[i].typeFunction,type)==0)
                return 0;
        }
        else
        if(strcmp(functions[i].nameFunction,name)==0 && strcmp(functions[i].typeFunction,type)==0 && nr_param==functions[i].numberParameters && locate==functions[i].locatie){
                takeParameters(param,matrix);
                int j;
                for(j=0;j<nr_param;j++){
                    if(strcmp(functions[i].parameters[j],matrix[j])!=0)
                        return 1;
                }
                return 0;
            }
    }
    return 1;
}
char* get_fun_type (char* name){
    int i;
    for(i=0;i<nr_functions;i++)
        if(strcmp(functions[i].nameFunction,name)==0)
            return functions[i].typeFunction;
}
int checkParametrii1(char* name){
   int i;
    for(i=0;i<nr_functions;i++)
        if(strcmp(functions[i].nameFunction,name)==0)
            return 1;
    return 0;
}
int checkParametrii2(char* name,char* param,int nr_param){
    char *aux;
    int k=0,i;
    for(i=0;i<nr_functions;i++){
        if(strcmp(functions[i].nameFunction,name)==0 && nr_param==functions[i].numberParameters){
            char *aux;
            aux = strtok( param, " " );
            k=0;
            while(aux){
                if(strcmp(functions[i].parameters[k],aux)!=0)
                    return 0;
                k++;
                aux=strtok(NULL," ");
            }
            return 1;
    }
    }
    return 2;
}
int cClas(char *name){
    int i;
    for(i=0;i<nr_classes;i++)
        if(strcmp(clase[i].className,name)==0)
            return 0;
    return 1;
}
void pushClas(char* name){
    clase[nr_classes].className=strdup(name);
    clase[nr_classes++].nr_objects=0;
}
void addObjects(char* clsName,char* objName){
    int i;
    for(i=0;i<nr_classes;i++)
        if(strcmp(clase[i].className,clsName)==0){
    		strcpy(clase[i].objects[clase[i].nr_objects++],objName);
		break;
	}
}

int cObj(char *name){
    int i;
    for(i=0;i<nr_classes;i++)
        if(strcmp(clase[i].className,name)==0){
	    	int j;
		for(j=0;j<clase[i].nr_objects;j++)
			if(strcmp(name,clase[i].objects[j])==0)
       		    		return 0;
		break;
	}
    return 1;
}
void printFunctii(){
    int i;
    for(i=0;i<nr_functions;i++){
        printf("Tip: %s | Nume: %s | Nr Parametrii: %d | Tipul parametrii:",functions[i].typeFunction,functions[i].nameFunction,functions[i].numberParameters);
        for(int j=0;j<functions[i].numberParameters;j++)
            printf("%s ",functions[i].parameters[j]);
        if(functions[i].locatie==1)
            printf("| Locatie: Inside a class");
        else
            printf("| Locatie: Global function");
        printf("\n");
    }
}
void printClase(){
    int i,j;
    for(i=0;i<nr_classes;i++){
        printf("Clasa: %s cu obiectele: ",clase[i].className);
        for(j=0;j<clase[i].nr_objects;j++)
            printf("%s ",clase[i].objects[j]);
        printf("\n");
    }
}
