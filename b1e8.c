#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string[maxt];
    fgets(string, maxt, stdin);
    int i=0,cont=0;
    while(string[i]!='\0'){
         if(string[i]=='1'){
            cont++;
         }
         i++;
    }
    printf("-> %d",cont);

}

