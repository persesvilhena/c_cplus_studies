#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, maior=0, menor=0, soma=0, num=0, nums[10], y=0, z=1, c=-1;
    for (x=0;x<z;x++)
    {
        printf("Numero: ");
        scanf("%d", &nums[x]);
        soma = soma + nums[x];
        if (nums[x]!=0)
        {
        z = z + 1;
        }
    }
    menor = soma;
    for (y=0;y<z;y++)
    {
        if (nums[y] > maior)
        {
                maior = nums[y];
        }
        if (nums[y]!=0)
        {
        if (nums[y] < menor)
        {
                menor = nums[y];
        }
        }
        c = c + 1;
    }
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMedia dos valores: %d", soma / c);
    system("pause");
}
