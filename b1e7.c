#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string1[maxt];
    char string2[maxt];
    fgets(string1, maxt, stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf("string1 -> %s \n",string1);
    fgets(string2, maxt, stdin);
    string2[strcspn(string2, "\n")] = '\0';
    printf("string2 -> %s \n",string2);
    int igual=1,i=0;
    while(igual==1||string1[i]!= '\0'||string2[i]!='\0'){
        if(!(string1[i]==string2[i])){
            igual=0;
        }
        i++;
    }
    if(igual==1){
        printf("strings iguais \n");
    }
    else if(igual==0){
        printf("strings nao sao iguais \n");
    }
}

