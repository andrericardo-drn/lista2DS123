#include <stdio.h>
#include <limits.h>



int main(){
    int vetor[6];
    for(int i=0;i<6;i++){
        printf("%d -> ",i);
        scanf("%d",&vetor[i]);
    }
    printf("debg \n");
    for(int i=6;i>0;i--){
        printf("%d -> \n",vetor[i-1]);
    }

}
