#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y; // vari�vel para o la�o repeti��o - for
   int valor; // vari�vel para entrada de dados

   printf("Quantas Vezes? ");
   scanf("%d",&y);
   
   for (x=0;x<y;x++) // estrutura para repetir 4 vezes
   {
       printf("Digite o Valor: ");
       scanf("%d",&valor);    
   }
   system("pause");
}
