#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string[maxt+1];
    fgets(string, maxt, stdin);
    string[strcspn(string, "\n")] = '\0';
    int tam = strlen(string);
    for(int i=tam;i>0;i--){
        printf("%c \n",string[i]);
    }

}

