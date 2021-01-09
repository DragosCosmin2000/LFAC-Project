#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 100

typedef struct Functions {
    char typeFunction[20];
    char nameFunction[20];
    int numberParameters;
    char parameters[10][10];
    int locatie;
}Functions;

Functions functions[n];
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
    strcpy(functions[nr_functions].typeFunction,type);   
    strcpy(functions[nr_functions].nameFunction,name);
    functions[nr_functions].numberParameters=nr_param;
    functions[nr_functions].locatie=locate;
    takeParameters(param,functions[nr_functions++].parameters);
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
void printare(){
    int i;
    for(i=0;i<nr_functions;i++){
        printf("%s %s %d ",functions[i].typeFunction,functions[i].nameFunction,functions[i].numberParameters);
        for(int j=0;j<functions[i].numberParameters;j++)
            printf("%s ",functions[i].parameters[j]);
        if(functions[i].locatie==1)
            printf(" Inside a class");
        else
            printf(" global function");
        printf("\n");
    }
}
