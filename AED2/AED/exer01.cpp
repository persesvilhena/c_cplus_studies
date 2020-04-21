#include <stdio.h>
#include <stdlib.h>
#define TM 2

void merge(int vet[], int tam)
{
int mid;
int i, j, k;
int tmp[tam];
mid = tam / 2;
i = 0;
j = mid;
k = 0;
while (i < mid && j < tam)
{
if (vet[i] <= vet[j])
{
tmp[k] = vet[i++];
}
else
{
tmp[k] = vet[j++];
}
++k;
}
if (i == mid)
{
while (j < tam)
{
tmp[k++] = vet[j++];
}
}
else
{
while (i < mid)
{
tmp[k++] = vet[i++];
}
}
for (i = 0; i < tam; ++i)
{
vet[i] = tmp[i];
}
}

void MergeSort(int vet[], int tam)
{
int mid;
if (tam > 1)
{
mid = tam / 2;
MergeSort(vet, mid);
MergeSort(vet + mid, tam - mid);
merge(vet, tam);
}
}

void ShellSort2(char vet[], int tam)
{
int i , j;
char value;
int gap = 1;
while(gap < tam)
{
gap = 3*gap+1;
}
while ( gap > 1)
{
gap /= 3;
for(i = gap; i < tam; i++)
{
value = vet[i];
j = i - gap;
while (j >= 0 && value < vet[j])
{
vet [j + gap] = vet[j];
j -= gap;
}
vet [j + gap] = value;
}
}
}

void ShellSort(int vet[], int tam){
    int i , j;
    int value;
    int gap = 1;
    while(gap < tam){
        gap = 3*gap+1;
    }
    while ( gap > 1){
        gap /= 3;
        for(i = gap; i < tam; i++){
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}

typedef struct{
    int codigo;
    char nome[50];
    int tempo;
}competidor;

main(){
    int x, y, z, i, seg, min, vetor_cod[TM], vetor_gambiarra[TM], vetor_cod2[TM], vetor_gambiarra2[TM], vetor_gambiarra3[TM];
    char vetor_cod3[TM], cop[TM];
    competidor c[TM];
    for(x=0; x<TM; x++){
        printf("Codigo: ");
        scanf("%d", &c[x].codigo);
        fflush(stdin);
        vetor_cod[x] = c[x].codigo;
        printf("Nome: ");
        scanf("%50[^\n]s", c[x].nome);
        fflush(stdin);
        vetor_cod3[x] = c[x].nome[0];
        cop[x] = c[x].nome[0];
        printf("Tempo em minutos: ");
        scanf("%d", &min);
        fflush(stdin);
        printf("Segundos: ");
        scanf("%d", &seg);
        fflush(stdin);
        c[x].tempo = (min * 60) + seg;
        vetor_cod2[x] = c[x].tempo;
    }
    ShellSort(vetor_cod, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_cod[x] == c[y].codigo){
                vetor_gambiarra[x] = y;
            }
        }
    }
    MergeSort(vetor_cod2, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_cod2[x] == c[y].tempo){
                vetor_gambiarra2[x] = y;
            }
        }
    }
    ShellSort2(vetor_cod3, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_cod3[x] == cop[y]){
                vetor_gambiarra3[x] = y;
            }
        }
    }
    printf("\n\n\n::::::::::::::Ordenado por codigo:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gambiarra[x];
        printf("\nCodigo: %d", c[i].codigo);
        printf("\nNome: %s", c[i].nome);
        printf("\nTempo em segs: %d", c[i].tempo);
    }
    printf("\n\n\n::::::::::::::Ordenado por tempo:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gambiarra2[x];
        printf("\nCodigo: %d", c[i].codigo);
        printf("\nNome: %s", c[i].nome);
        printf("\nTempo em segs: %d", c[i].tempo);
    }
    printf("\n\n\n::::::::::::::Ordenado por nome:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gambiarra3[x];
        printf("\nCodigo: %d", c[i].codigo);
        printf("\nNome: %s", c[i].nome);
        printf("\nTempo em segs: %d", c[i].tempo);
    }
    system("pause");
}
