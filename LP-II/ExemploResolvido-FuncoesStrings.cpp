#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char nome1[50], nome2[50], novo1[50],novo2[50];
   int contnome1,contnome2;
   
   
   printf("Digite Primeiro Nome: ");
   gets(nome1);
   printf("Digite Segundo Nome: ");
   gets(nome2);
   
   strcpy(novo1,nome1);
   strcpy(novo2,nome2);
   printf("\n\nO Novo Vetor novo1 e: %s",novo1);
   printf("\n\nO Novo Vetor novo2 e: %s",novo2);

   contnome1 = strlen(nome1);
   contnome2 = strlen(nome2);
   printf("\n\nA Quantidade de Caracteres do Nome 1 e: %d",contnome1);
   printf("\n\nA Quantidade de Caracteres do Nome 1 e: %d",contnome2);
   printf("\n\nA Quantidade de Caracteres do Nome 1 e: %d",contnome1+contnome2);
   printf("\n\n");
   
   if(strcmp(nome1,nome2)) // Comparar Se as Strings São Iguais ou Diferentes
      printf("As Strings Sao Diferentes");
   else
      printf("As Strings Sao Iguais");

   printf("\n\n");
   system("pause");
}
