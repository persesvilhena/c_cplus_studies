#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[25], c, c1[5], nova[25], a;
    int i=0, j=0, x=0, d=0;
    printf("string: ");
    scanf("%100[^\n]s", s);
    fflush(stdin);
    printf("comeco: ");
    scanf("%d", &i);
    fflush(stdin);
    printf("fim: ");
    scanf("%d", &j);
    fflush(stdin);
    for(x=i;x<=j;x++){
        nova[d] = s[x];
        d++;
    }
    nova[d] = '\0';
    printf("string: %s", nova);
    system("pause");
}
