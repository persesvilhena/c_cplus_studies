#include <stdio.h>
#include <stdlib.h>

void mensagem() // Declaração da Função mensagem
{
    printf("Ola! Seja Bem Vindo");
    printf("\n\n");
}

int main()
{
   char nomep[20];
   printf("Digite Seu Nome: ");
   gets(nomep);

   mensagem();


   system("pause");
}
