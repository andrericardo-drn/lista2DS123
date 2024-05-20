#include <stdio.h>
#include <string.h>



int main(){
    int vetor[10],contpares=0;
    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    printf("debug 1 \n");
    for(int i=0;i<10;i++){
        if(vetor[i]%2==0){
            contpares++;
        }
    }
    printf("pares -> %d",contpares);
}

