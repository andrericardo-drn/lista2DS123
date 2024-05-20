#include <stdio.h>
#include <string.h>



int main(){
    int vetor[8];
    int x,y;
    for(int i=0;i<8;i++){
        printf("%d ->",i);
        scanf("%d",&vetor[i]);
    }
    printf("x -> ");
    scanf("%d",&x);
    printf("y -> ");
    scanf("%d",&y);
    if((x>0 && x <= 8) && (y>0 && y<=8)){
        printf("soma -> %d \n",vetor[x]+vetor[y]);
    }
    for(int i=0;i<8;i++){
        printf("%d \n",vetor[i]);

    }
}

