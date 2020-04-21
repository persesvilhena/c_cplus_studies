#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,total;
    int qtde;

    printf("Digite o Preco: "); // Saída de Dados
    scanf("%f",&preco); // Entrada de Dados
    printf("Digite a Quantidade: "); // Saída de Dados
    scanf("%d",&qtde); // Entrada de Dados
    total = preco * qtde;
    printf("\n\n O Total e: %.2f \n\n", total); // Saída de Dados
    system("pause");
    
}
