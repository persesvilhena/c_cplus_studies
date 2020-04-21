#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char palavra1[50], palavra2[50];
    printf("Palavra 1: ");
    scanf("%50[^\n]s", palavra1);
    fflush(stdin);
    printf("Palavra 2: ");
    scanf("%50[^\n]s", palavra2);
    fflush(stdin);
    strcat(palavra1,palavra2);
    printf("palavra: %s", palavra1);
    system("pause");
}
