#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[50], nome2[50], novo1[50];
    int contnome1=0, contnome2=0;
    printf("Digite o Pimeiro Nome: ");
    gets(nome1);
    printf("Digite o Segundo Nome: ");
    gets(nome2);
    
    strcpy(novo1,nome1);
    strcpy(novo2,nome2);
    printf("\n\nO novo vetor novo1 e: %s", novo1);
    printf("\n\nO novo vetor novo2 e: %s", novo2);
    
    contnome1 = strlen(nome1);
    contnome2 = strlen(nome2);
    printf("\n\nQuantidade de caracteres do Nome1: %d", contnome1);
    printf("\n\nQuantidade de caracteres do Nome2: %d", contnome2);    
    printf("\n\nQuantidade de caracteres do Nome1: %d", contnome1 + contnome2);
