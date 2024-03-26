#include <stdio.h>
#ifndef TESTE_H
#define TESTE_H

    void print(char *x){
        printf("%s",x);
    }
    void printi(int x){
        printf("%i", x);
    }
    int intinput(int x){
        int var;
        x=0;
        printf("%i",x);
        scanf("%i",&var);
        // printf("%i", var);
        return var;
    }
    int soma(int a,int b){
        printf("%i", a+b);
    }

#endif