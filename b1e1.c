#include <stdio.h>
#include <string.h>
#define maxt 100

int main(){
    char string[maxt];
    fgets(string,maxt,stdin);
    printf("%s",string);
}
