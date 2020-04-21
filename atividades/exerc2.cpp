#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, maior=0, menor=99999, soma=0, num=0;
    for (x=0;x<10;x++)
    {
        printf("Numero: ");
        scanf("%d", &num);
        if (num > maior)
        {
                maior = num;
        }
        if (num < menor)
        {
                menor = num;
        }
        soma = soma + num;
    }
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMedia dos valores: %d", soma / 10);
    system("pause");
}
