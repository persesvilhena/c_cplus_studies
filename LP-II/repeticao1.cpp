#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x; // vari�vel para o la�o repeti��o - for
   int valor; // vari�vel para entrada de dados

   for (x=0;x<4;x++) // estrutura para repetir 4 vezes
   {
       printf("Digite o Valor: ");
       scanf("%d",&valor);    
   }
   system("pause");
}
