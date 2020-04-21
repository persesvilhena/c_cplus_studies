#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, maior=0, menor=0, soma=0, num=0, nums[10], y=0;
    for (x=0;x<10;x++)
    {
        printf("Numero: ");
        scanf("%d", &nums[x]);
        soma = soma + nums[x];
    }
    menor = soma;
    for (y=0;y<10;y++)
    {
        if (nums[y] > maior)
        {
                maior = nums[y];
        }
        if (nums[y] < menor)
        {
                menor = nums[y];
        }
    }
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMedia dos valores: %d", soma / 10);
    system("pause");
}
