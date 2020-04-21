#include <stdio.h>
#include <stdlib.h>
#define TM 20

void QuickSort(int vet[ ], int esq, int dir)
{
int i=esq, j=dir; int x,y;
x = vet[(esq+dir)/2];
do
{
while ((vet[i] < x) && (i < dir))
i++;
while ((x < vet[j]) && (j > esq))
j--;
if ( i <= j )
{
y = vet[i]; vet[i] = vet[j]; vet[j] = y;
i++; j--;
}
} while ( i <=j );
if ( esq < j )
QuickSort(vet, esq, j);
if ( i < dir )
QuickSort(vet, i, dir);
}

main(){
    int vetor[TM];
    int x;
    for(x=0;x<TM;x++){
        scanf("%d", &vetor[x]);
    }
    QuickSort(vetor, 0, TM-1);
    for(x=0;x<TM;x++){
        printf("\n%d", vetor[x]);
    }
    printf("\n");
    system("pause");
}
