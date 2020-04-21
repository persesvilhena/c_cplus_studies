#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[10], x, y, vtot=0;
    
    for (x=0;x<10;x++)
    {
        printf("Valor: ");
        scanf("%d", &numero[x]);
        vtot = vtot + numero[x];
    }
    for (y=0;y<10;y++)
    {
       printf("Valor: ");
       printf("%d", numero[y]);
    }
    printf("\nSoma: %d", vtot);
    printf("\nMedia: %d", vtot / 10);
    system("pause");
}
