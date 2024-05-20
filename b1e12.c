#include <stdio.h>
#include <string.h>
#define maxt 100


int main(){
    char string[maxt];
    char caracter;
    int i=0,vogaiscont=0;
    fgets(string, maxt, stdin);
    string[strcspn(string, "\n")] = '\0';
    while(string[i]!='\0'){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
            vogaiscont++;
        }
        i++;
    }
    scanf("%c",&caracter);
    i=0;
    while(string[i]!='\0'){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
            string[i]=caracter;
        }
        i++;
    }
    printf("%s",string);
}

