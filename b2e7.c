#include <stdio.h>
#include <limits.h>



int main(){
    int max=INT_MIN;
    int vetor[10],posi=0;
    for(int i=0;i<10;i++){
        printf("%d -> ",i);
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<10;i++){
        if(vetor[i]>max){
            max=vetor[i];
            posi=i;
        }
    }
    printf("==> %d MAX ==> %d POSI",max,posi);
}
