#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[5],max=INT_MIN,min=INT_MAX,media = 0;
    for (int i=0;i<5;i++) {
        printf("%d -> ",i+1);
        scanf("%d",&vetor[i]);
        if (vetor[i]>max) {
            max=vetor[i];
        }
        if (vetor[i]<min) {
            min=vetor[i];
        }
        media+=vetor[i];
    }
    printf("todos os valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("maior valor lido: %d\n", max);
    printf("menor valor lido: %d\n", min);
    printf("media dos valores: %.2f\n", (float)media / 5);
    return 0;
}
