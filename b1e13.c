#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string[maxt];
    int brancocont=0,i=0;
    fgets(string, maxt, stdin);
    string[strcspn(string, "\n")] = '\0';
    while(string[i]!='\0'){
        if(string[i]==' '){
            brancocont++;
        }
        i++;
    }
    printf("%d",brancocont);
}

