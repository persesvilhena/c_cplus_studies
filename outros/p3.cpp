#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, x;
    float preco, cod, total, total1, ttotal;
    for (x=0;x<2;x++)
    {
        printf("Codigo do produto: ");
        scanf("%f",&cod);
        printf("Quantidade do produto: ");
        scanf("%d",&qtd);
        printf("Preco do produto: ");
        scanf("%f",&preco);
        total = qtd * preco;
        if (total > 50)
        {
                  total1 = total * 0.90;
                  ttotal = total1 + ttotal;
        }
        else
        {
            ttotal = total + ttotal;
        }
    }
    printf("Total: %f", ttotal);
    system("pause");
}
