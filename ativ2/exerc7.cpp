#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, x=0, min=0, seg=0, segtot=0, sair=1, tempo=0, melhortempo=0, melhorvolta=0, regtempo[99];
    while (sair == 1)
    {
          printf("\nVolta %d", x);
          printf("\nMinutos: ");
          scanf("%d", &min);
          printf("Segundos: ");
          scanf("%d", &seg);
          tempo = (min * 60) + seg;
          regtempo[x] = tempo;
          x = x + 1;
          segtot = segtot + tempo;
          printf("Digite 1 para continuar");
          scanf("%d", &sair);
    }
    melhortempo = segtot;
    for (a=0;a<x;a++)
    {
        if (regtempo[a] < melhortempo)
        {
           melhortempo = regtempo[a];
           melhorvolta = a;
        }
        
    }
    printf("\n\n\nMelhor tempo: %d", melhortempo);
    printf("\nVolta em que o melhor tempo ocorreu: %d", melhorvolta);
    printf("\nTempo medio das voltas em segundos: %d", segtot / x);
    printf("\n\n\n");
    system("pause");
}
