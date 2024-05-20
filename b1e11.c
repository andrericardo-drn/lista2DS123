#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string[maxt];
    int i=0;
    fgets(string, maxt, stdin);
    string[strcspn(string, "\n")] = '\0';
    while(string[i]!='\0'){
        if(string[i]!='a'&&string[i]!='e'&&string[i]!='i'&&string[i]!='o'&&string[i]!='u'){
            printf("%c",string[i]);
        }
        i++;
    }


}

