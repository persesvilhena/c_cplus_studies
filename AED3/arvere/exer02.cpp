#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"
int conta = 0;

void funcao(Arvore t){
	if((t->dir != NULL) && (t->esq != NULL)){
		conta++;
		funcao(t->dir);
		funcao(t->esq);
	}
}

main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	insertNode(&A, 'K');
	insertNode(&A, 'L');
	insertNode(&A, 'M');
	insertNode(&A, 'H');
	funcao(A);
	printf("\n%d\n", conta);
		
}
