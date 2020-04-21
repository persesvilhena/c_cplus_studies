#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd[5], x=0, y=0;
    
    for (x=0;x<5;x++)
    {
        printf("\nNumero: ");
        scanf("%d", &qtd[x]);
    }
    for (y=0;y<5;y++)
    {
        printf("\nExibir Numero");
        printf("%d", qtd[y]);
    }
    system("pause");
}
