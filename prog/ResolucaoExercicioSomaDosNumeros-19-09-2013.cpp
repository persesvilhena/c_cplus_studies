#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0, num=1;

    printf("Digite Um Numero: ");
    scanf("%d",&num);
    printf("\n");

      while (x < num)
      {
    
         x = x + 1; // (0+1=1) (1+1=2) (2+1=3) (3+1=4) (4+1=5)
         printf("%d\n",x);
         y = y + x; // (0+1=1) (1+2=3) (3+3=6) (6+4=10) (10+5=15) 
      }
      
      printf("\n\n");
      printf("Total: %d",y);
      printf("\n\n");
      system ("pause");

}
