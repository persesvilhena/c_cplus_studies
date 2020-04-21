#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nome[50], cidade[50], curso[50], nova[150];
    printf("Nome: ");
    scanf("%50[^\n]s", nome);
    fflush(stdin); 
    printf("Cidade: ");
    scanf("%50[^\n]s", cidade);
    fflush(stdin);   
    printf("Curso: ");
    scanf("%50[^\n]s", curso);
    fflush(stdin);
    strcpy(nova,"");    
    strcat(nova,nome);
    strcat(nova,", ");
    strcat(nova,cidade);
    strcat(nova,", ");
    strcat(nova,curso);
    printf("string: %s", nova);
    system("pause");
}
