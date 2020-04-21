#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,x;
   
   printf("Digite Um Numero: ");
   scanf("%d",&num);    
    
    for(x=1;x<10;x++)
    {
       printf("A Tabuada de %d", num, " e ", num * x);
       printf("\n");
    }
    
    printf("\n");
    printf("\n");
    system("pause");
}
