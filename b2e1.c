#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    int A[6]={1,0,5,-2,-5,7};
    int i=0;
    int soma=A[0]+A[1]+A[5];
    A[4]=100;
    printf("soma posicao 0, 1 e 5 -> %d \n",soma);
    while(i!=6){
        printf("posicao %d -> %d \n",i,A[i]);
        i++;
    }

}

