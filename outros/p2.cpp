#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, nota, x, conta, contr, qtd;
    conta = 0;
    contr = 0;
    printf("Quantidade de alunos: ");
    scanf("%d",&qtd);
    for (x=0;x<qtd;x++)
    {
        printf("Digite o Código do aluno: ");
        scanf("%d",&cod);
        printf("Digite a nota do aluno: ");
        scanf("%d",&nota);
    
    if (nota>=6)
    {
        conta++;
        printf("Aprovado\n");
    }
    else
    {
        contr++;
        printf("Reprovado\n");
}
}
printf("\n\naprovados: %d", conta);
printf("\nreprovado: %d", contr);
printf("\n\n\n\n");
system("pause");
}
        
