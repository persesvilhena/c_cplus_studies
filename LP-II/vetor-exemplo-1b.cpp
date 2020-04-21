#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num[10], x, y;

   for(x=0;x<10;x++)
   {
      printf("Digite o Numero: ");
      scanf("%d",&num[x]);
   }
   
   for(y=0;y<10;y++)
   {
      printf("\n O valor e: %d",num[y]);
   }
   printf("\n\n\n");
   system("pause");
}
