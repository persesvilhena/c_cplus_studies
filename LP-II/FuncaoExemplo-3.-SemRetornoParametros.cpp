#include <stdio.h>
#include <stdlib.h>

void mensagem() // Declara��o da Fun��o mensagem
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
