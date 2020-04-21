#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    printf("Digite o valor da nota 1: ");
    scanf("%f",&nota1);
    printf("Digite o valor da nota 2: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2) / 2;
    printf("a media e: %f", media);
    printf("\n\n");
    if (media >= 6)
    {
              printf("Aprovado\n\n");
    }
    else
    {
        printf("Reprovado\n\n");
    }
    system("pause");
}
