#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[100];
    int i=0;
    printf("string: ");
    scanf("%100[^\n]s", s);
    fflush(stdin);
    printf("posicao: ");
    scanf("%d", &i);
    printf("Caracter numero %d: %c", i, s[i]);
    system("pause");
}
