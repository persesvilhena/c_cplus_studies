#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nome[100], nome2[100];
    int x = 0;
    printf("Nome: ");
    scanf("%100[^\n]s", nome);
    fflush(stdin);
    printf("Nome 2: ");
    scanf("%100[^\n]s", nome2);
    fflush(stdin);
    x = strcmp(nome, nome2);
    
    if(x == 0){
        printf("iguais");
    }else{
        printf("nao sao iguais");
    }
    system("pause");
}
    
