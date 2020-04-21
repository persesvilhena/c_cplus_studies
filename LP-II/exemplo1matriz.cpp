#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nota[3][3], x, y; // Linha, Coluna
   
   // Laço de Repetição Para Entrada de Dados Na Matriz
   
   for(x=0; x<3; x++)
   {
      for(y=0; y<3; y++)
      {
          printf("Digite a Nota: ");
          scanf("%d", &nota[x][y]);
      }
   }

   // Laço de Repetição Para Exibir os Dados Da Matriz

   for(x=0; x<3; x++)
   {
      for(y=0; y<3; y++)
      {
          printf("A Nota e : %d", nota[x][y]);
          printf("\n");
      }
   }


    system("pause");

}
