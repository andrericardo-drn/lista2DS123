#include <stdio.h>
#include <string.h>
#define maxt 100

int main(){
    char string[maxt];
    int cont=0,i=0;
    fgets(string,maxt,stdin);
    while(string[i]!='\0'){
        i++;
    }
    printf("Tamanho da string (contando com o ultimo caractere \\0)-> %d",i);
}
