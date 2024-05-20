#include <stdio.h>
#include <limits.h>



int main(){
    int vetor[6],num=0,leutodos=1;
    int i=0;
    while(i!=6){
        printf("%d -> ",i);
        scanf("%d",&num);
        if(num%2==0){
            vetor[i]=num;
        }
        else{
            leutodos=0;
            break;
        }
        leutodos=1;
        i++;
    }
    printf("-------");
    if(leutodos==1){
        for(int i=5;i>=0;i--){
            printf("%d -> %d \n",i,vetor[i]);
        }
    }
}
