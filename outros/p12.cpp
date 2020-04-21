#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    
    printf("digite o nome: ");
    gets(nome);
    
    printf("\n\n\n");
    printf("o nome digitado foi: %s", nome);
    printf("\n\n");
    
    system("pause");
    
}
