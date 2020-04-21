#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y; // variável para o laço repetição - for
   int valor; // variável para entrada de dados

   printf("Quantas Vezes? ");
   scanf("%d",&y);
   
   for (x=0;x<y;x++) // estrutura para repetir 4 vezes
   {
       printf("Digite o Valor: ");
       scanf("%d",&valor);    
   }
   system("pause");
}
