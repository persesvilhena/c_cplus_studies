#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int valor;
    int y;
    printf("Quantas vezes: ");
    scanf("%d",&y);
    
    
    for (x=0;x<y;x++)
    {
        printf("Digite um valor: ");
        scanf("%d",&valor);
    }
    system("pause");
}
