#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pesquisaBinaria(char vet[],char dado, int inic, int fim)
{
int meio = (inic + fim)/2;
if( vet[meio] == dado )
return(meio);
if (inic >= fim)
return(-1);
if (dado < vet[meio])
pesquisaBinaria(vet,dado,inic,meio-1);
else
pesquisaBinaria(vet,dado,meio+1,fim);
}

main(){
	char vetor[6]="12345", dado='4';
	int x;
	//printf("vetor: ");
	//scanf("%s", vetor);
//	fflush(stdin);
//	printf("\ndado: ");
//	scanf("\n%c", &dado);
//	fflush(stdin);
x = pesquisaBinaria(vetor, dado, 0, strlen(vetor)-1);
	printf("%s %c Posicao: %d", vetor, dado, x);
}

