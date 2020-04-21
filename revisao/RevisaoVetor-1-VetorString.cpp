#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nomep[30];
  int x,contac=0;

  printf("Digite a Frase: ");
  gets(nomep); // Entrada de Dados Vetor String

  contac=strlen(nomep);

  // Exibição da Soma dos Elementos do Vetor

  // printf("\n\n");

  printf("Nome: %s",nomep);
  printf("\n\n");
  printf("A Quantidade de Caracteres e: %d",contac);     
  printf("\n\n");
  system("pause");

}
