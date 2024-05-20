#include <stdio.h>
#include <string.h>
#define tam 10


int main(){
    float numeros[tam];
    float quadradoNumeros[tam];
    int i=0;
    for(i;i<tam;i++){
        scanf("%f",&numeros[i]);
        printf("num lido na posicao numeros[%d] -> %.2f \n",i,numeros[i]);
    }
    for(i=0;i<tam;i++){
        quadradoNumeros[i]=(numeros[i]*numeros[i]);
    }
    for(i=0;i<tam;i++){
        printf("%.2f \n",numeros[i]);
    }
    for(i=0;i<tam;i++){
        printf("%.2f \n",quadradoNumeros[i]);
    }
}

