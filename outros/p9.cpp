#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota=0, totnota=0, cod=1, countmaior6=0, totnotam6=0, count=0;
    while (cod > 0)
    {
          printf("Codigo do aluno: ");
          scanf("%d", &cod);
          printf("Nota do aluno: ");
          scanf("%d", &nota);
          if(nota > 6)
          {
                  totnotam6 = totnotam6 + nota;
                  countmaior6 = countmaior6 + 1;
          }
          count = count + 1;
          totnota = totnota + nota;
    }
    printf("\nMedia das notas: %d", totnota / count);
    if (countmaior6 > 0)
    {
    printf("\nMedia das notas acima de 6: %d", totnotam6 / countmaior6);
}
else
{
    printf("\nNao ha nenhum aluno com nota acima de 6");
}
system("pause");
}
