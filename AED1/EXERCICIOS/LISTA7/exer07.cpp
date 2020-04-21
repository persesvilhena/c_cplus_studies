#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[30], s2[30];
    printf("string1: ");
    scanf("%30[^\n]s", s);
    fflush(stdin);    
    printf("string2: ");
    scanf("%30[^\n]s", s2);
    fflush(stdin);   
    if(strcmp(s,s2) == 0){
        printf("sao iguais");
    }else{
        printf("nao sao iguais");
    }
    system("pause");
}
