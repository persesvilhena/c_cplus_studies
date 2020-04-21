#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,total;
    int qtde;
    printf("Digite o Preco: ");
    scanf("%f",&preco);
    printf("Digite a Quantidade: ");
    scanf("%d",&qtde);
    total = preco * qtde;
    
    printf("Valor: %f", total);
    printf("\n\n\n\n");
    
    system("pause");
}
