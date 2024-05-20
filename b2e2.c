#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    int numeros[6];
    for(int i=0;i<6;i++){
        scanf("%d",&numeros[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d \n",numeros[i]);
    }
}

