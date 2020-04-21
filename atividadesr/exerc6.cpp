#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reg[99], tot=0, c=0, c1=0, c2=0, sair=1, nota=0;
    while (sair == 1)
    {
          printf("Nota: ");
          scanf("%d", &nota);
          printf("Digite 1 para continuar");
          scanf("%d", &sair);
          tot = tot + nota;
          c = c + 1;
          reg[c] = nota;
          if (nota > 7)
          {
                   c1 = c1 + 1;
          }
          if (nota > 5)
          {
                   c2 = c2 + 1;
          }
    }
    printf("\n\nMedia das Notas: %d", tot / c);
    printf("\nQuantidade de alunos com nota acima de 7: %d", c1);
    if (c2 == 0)
    {
    printf("\nNao ha nenhum aluno com nota acima de 5.");
    }
    printf("\n\n\n");
    system("pause");
}
    
