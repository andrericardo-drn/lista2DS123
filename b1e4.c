#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char nome[maxt];
    fgets(nome,maxt,stdin);
    int i=0;
    while(i!=4 && nome[i]!='\n'){
        printf("%c",nome[i]);
        i++;
    }
}

