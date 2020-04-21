#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char strings[5][100], string[100];
    int x=0, exibi = 1;
    for(x=0;x<5;x++){
        printf("String: ");
        scanf("%100[^\n]s", strings[x]);
        fflush(stdin);
    }
    printf("String a ser encontrada: ");
    scanf("%100[^\n]s", string);
    fflush(stdin);
    for(x=0;x<5;x++){
        if(strcmp(string,strings[x]) == 0){
            printf("Palavra encontrada, vetor: %d", x);
            exibi = 0;
        }
    }
    if(exibi == 1){
        printf("Nao encontrada");
    }
    printf("\n\n");

system("pause");
}
