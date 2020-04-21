#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x; // variável para o laço repetição - for
   int valor; // variável para entrada de dados

   for (x=0;x<4;x++) // estrutura para repetir 4 vezes
   {
       printf("Digite o Valor: ");
       scanf("%d",&valor);    
   }
   system("pause");
}
