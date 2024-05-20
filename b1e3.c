#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char nome[maxt];
    int i=0;
    fgets(nome,maxt,stdin);

    while(nome[i]!='\0'){
        if(nome[0]=='a'||nome[0]=='A'){
            printf("%c",nome[i]);
        }else if(nome[0]!='a'||nome[0]!='A'){
            break;
        }
        i++;
    }
}

