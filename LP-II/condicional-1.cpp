#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    
    printf("Digite a Idade: ");
    scanf("%d",&idade);
    
    if (idade >= 18)
    {
         printf("\n\n E de Maior \n\n\n");
    }

    if (idade < 18)
    {
         printf("\n\n E de Menor de Idade \n\n\n");
    }
    
    system("pause");
}
