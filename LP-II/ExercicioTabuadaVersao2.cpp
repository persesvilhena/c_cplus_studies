#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,x; //Somente Com Duas Variáveis
   
   printf("Digite Um Numero: ");
   scanf("%d",&num);
   
   printf("\nResultado da Tabuada de %d \n", num);
   printf("\n");
    
    for(x=1;x<11;x++)
    {
       printf("%d * %d = %d", num, x, num * x);
       printf("\n");
    }
    
    printf("\n");
    printf("\n");
    system("pause");
}
