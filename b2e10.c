#include <stdio.h>
#include <limits.h>



int main(){
    int vetor[15],media=0,soma=0;
    for(int i=0;i<15;i++){
        printf("%d -> ",i);
        scanf("%d",&vetor[i]);
        soma+=vetor[i];
    }
    media=(soma/15);
    printf("media -> %d ",media);
}
