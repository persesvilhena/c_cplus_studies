#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, min=0, seg=0, segtot=0, sair=1, tempo=0, melhortempo=999999999, melhorvolta=0;
    while (sair == 1)
    {
          printf("\nMinutos: ");
          scanf("%d", &min);
          printf("Segundos: ");
          scanf("%d", &seg);
          tempo = (min * 60) + seg;
          x = x + 1;
          if (tempo < melhortempo)
          {
                    melhortempo = tempo;
                    melhorvolta = x;
          }
          segtot = segtot + tempo;
          printf("Digite 1 para continuar");
          scanf("%d", &sair);
    }
    printf("\n\n\nMelhor tempo: %d", melhortempo);
    printf("\nVolta em que o melhor tempo ocorreu: %d", melhorvolta);
    printf("\nTempo medio das voltas em segundos: %d", segtot / x);
    printf("\n\n\n");
    system("pause");
}
