#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"

main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	printf("Numero de Nos: %d\n", ContaNos(A));
	printf("Numero de Folhas: %d\n", ContaFolhas(A));
	printf("Numero de Filhos a Direita: %d\n ", contaDireita(A));
		
}
