#include <stdio.h>
#include <limits.h>



int main(){
    float vetor[15],somaPositivos=0;
    int contNegativos=0;
    for(int i=0;i<15;i++){
        printf("%d -> ",i+1);
        scanf("%f",&vetor[i]);
        if(vetor[i]>0){
            somaPositivos+=vetor[i];
        }
        else{
            contNegativos++;
        }
    }
    printf("contNegativos -> %d \n",contNegativos);
    printf("somaPositivos -> %.2f \n",somaPositivos);
}
