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


void merge2(char vet[], int tam)
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

void MergeSort2(char vet[], int tam)
{
int mid;
if (tam > 1)
{
mid = tam / 2;
MergeSort2(vet, mid);
MergeSort2(vet + mid, tam - mid);
merge2(vet, tam);
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
    int placa, ano, qtd;
    char marca[50];
}carro;

main(){
    int x, y, z, i, seg, min, vetor_placa[TM], vetor_gamb_placa[TM], vetor_ano[TM], vetor_gamb_ano[TM], vetor_qtd[TM], vetor_gamb_qtd[TM], vetor_gamb_marca[TM];
    char vetor_marca[TM], cop[TM];
    carro c[TM];
    for(x=0; x<TM; x++){
        printf("Placa: ");
        scanf("%d", &c[x].placa);
        fflush(stdin);
        vetor_placa[x] = c[x].placa;
        printf("Marca: ");
        scanf("%50[^\n]s", c[x].marca);
        fflush(stdin);
        vetor_marca[x] = c[x].marca[0];
        cop[x] = c[x].marca[0];
        printf("Ano: ");
        scanf("%d", &c[x].ano);
        fflush(stdin);
        vetor_ano[x] = c[x].ano;
        printf("Quantidade em estoque: ");
        scanf("%d", &c[x].qtd);
        fflush(stdin);
        vetor_qtd[x] = c[x].qtd;
    }
    ShellSort(vetor_placa, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_placa[x] == c[y].placa){
                vetor_gamb_placa[x] = y;
            }
        }
    }
    ShellSort(vetor_ano, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_ano[x] == c[y].ano){
                vetor_gamb_ano[x] = y;
            }
        }
    }
    MergeSort(vetor_qtd, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_qtd[x] == c[y].qtd){
                vetor_gamb_qtd[x] = y;
            }
        }
    }
    MergeSort2(vetor_marca, TM);
    for(x=0; x<TM; x++){
        for(y=0; y<TM; y++){
            if(vetor_marca[x] == cop[y]){
                vetor_gamb_marca[x] = y;
            }
        }
    }
    printf("\n\n\n::::::::::::::Ordenado por placa:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gamb_placa[x];
        printf("\n\nPlaca: %d", c[i].placa);
        printf("\nMarca: %s", c[i].marca);
        printf("\nAno: %d", c[i].ano);
        printf("\nEstoque: %d", c[i].qtd);
    }
    printf("\n\n\n::::::::::::::Ordenado por ano:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gamb_ano[x];
        printf("\n\nPlaca: %d", c[i].placa);
        printf("\nMarca: %s", c[i].marca);
        printf("\nAno: %d", c[i].ano);
        printf("\nEstoque: %d", c[i].qtd);
    }
    printf("\n\n\n::::::::::::::Ordenado por estoque:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gamb_qtd[x];
        printf("\n\nPlaca: %d", c[i].placa);
        printf("\nMarca: %s", c[i].marca);
        printf("\nAno: %d", c[i].ano);
        printf("\nEstoque: %d", c[i].qtd);
    }
    printf("\n\n\n::::::::::::::Ordenado por marca:::::::::\n");
    for(x=0; x<TM; x++){
        i = vetor_gamb_marca[x];
        printf("\n\nPlaca: %d", c[i].placa);
        printf("\nMarca: %s", c[i].marca);
        printf("\nAno: %d", c[i].ano);
        printf("\nEstoque: %d", c[i].qtd);
    }
    printf("\n\n");
    system("pause");
}
