#include <stdio.h>
#include <stdlib.h>

int main()
{
   int infoprod[5][6], x, y, totc, totv; // Linha, Coluna
   
   // La�o de Repeti��o Para Entrada de Dados Na Matriz
   
   for(x=0; x<5; x++)
   {
      for(y=0; y<4; y++)
      {
          printf("Digite a Informacao: ");
          scanf("%d", &infoprod[x][y]);
      }
          infoprod[x][4]=infoprod[x][1] * infoprod[x][2];
          infoprod[x][5]=infoprod[x][1] * infoprod[x][3] ;         
      
   }

   // La�o de Repeti��o Para Exibir os Dados Da Matriz

   for(x=0; x<5; x++)
   {
      for(y=0; y<6; y++)
      {
          printf("O Resultado : %d", infoprod[x][y]);
          printf("\n");
      }
   }


    system("pause");

}
