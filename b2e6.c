#include <stdio.h>
#include <limits.h>



int main(){
    int min=INT_MAX,max=INT_MIN;
    int vetor[10];
    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<10;i++){
        if(vetor[i]>max){
            max=vetor[i];
        }
        else if(vetor[i]<min){
            min=vetor[i];
        }
    }
    printf("%d \n",max);
    printf("%d \n",min);
}

