#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char nome[maxt];
    fgets(nome,maxt,stdin);
    int i=0;
    while(nome[i]!='\n'){
        i++;
    }
    printf("nome contem %d letras",i);
}

