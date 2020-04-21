#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[99], aux[99], y=0, x=0, z=0, cont=0, cont1=0, inverso=0, w=0;
    printf("Repeticao: ");
    scanf("%d", &y);
    for (x=0;x<y;x++)
    {
        printf("Numero: ");
        scanf("%d", &num[x]);
        cont = cont + 1;
    }
    cont1 = cont;
    cont1 = cont1 - 1;
    for (z=0;z<cont;z++)
    {
        aux[cont1] = num[z];
        cont1 = cont1 - 1;
    }
    for (w=0;w<cont;w++)
    {
        printf("\nNumero: %d", aux[w]);
    }
    system("pause");
}
