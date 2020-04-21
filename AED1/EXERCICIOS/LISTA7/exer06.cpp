#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[25], c, c1[5], nova[25] = "_", a;
    int i=0, x=0, d=0;
    printf("string: ");
    scanf("%25[^\n]s", s);
    fflush(stdin);    
    strcat(nova,s);
    strcat(nova,"_");
    printf("string: %s", nova);
    system("pause");
}
