#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[99], y[99], rep=0, z=0, i=0, mult=0, soma=0;
    printf("Repeticao: ");
    scanf("%d", &rep);
    for (z=0;z<rep;z++)
    {
        printf("valor x: ");
        scanf("%d", &x[z]);
        printf("valor y: ");
        scanf("%d", &y[z]);
    }
    for (i=0;i<rep;i++)
    {
        mult = x[i] * y[i];
        soma = soma + mult;
    }
    printf("\n\nsoma: %d", soma);
    system("pause");
}
