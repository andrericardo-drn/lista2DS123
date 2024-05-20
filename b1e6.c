#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char nome[maxt];
    char sexo[maxt];
    int idade=0;
    fgets(nome,maxt,stdin);
    nome[strcspn(nome, "\n")] = '\0';
    fgets(sexo,maxt,stdin);
    sexo[strcspn(sexo, "\n")] = '\0';
    scanf("%d",&idade);
    if(strcmp(sexo,"feminino")==0 && idade < 25){
        printf("ACEITA");
    }
    else{
        printf("NAO ACEITA");
    }
}

