#include<stdio.h>
#include<stdlib.h>

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


		
main(){
	int n, t, vet[100], x, y, z;
	
	scanf("%d", &t);
	for(x=0; x<n; x++){
		scanf("%d", &n);
		for(y=0; y<n; y++){
			scanf("%d", &vet[y]);
		}
		
		MergeSort(vet, n);
		
		for(z=0; z<n; z++){
			printf("%d ",vet[z]);
		}
	}
	
}
