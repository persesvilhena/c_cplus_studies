#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,x,resp;
   
   printf("Digite Um Numero: ");
   scanf("%d",&num);    
    
    for(x=1;x<11;x++)
    {
       resp = x * num;
       printf("%d * %d = %d", num, x, resp);
       printf("\n");
    }
    
    printf("\n");
    printf("\n");
    system("pause");
}
