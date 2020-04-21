#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"

int folhas=0;
void contafolhas(Arvore t){
	if(t != NULL){
		if(t->dir == NULL && t->esq == NULL){
			folhas++;
		}else{
			contafolhas(t->dir);
			contafolhas(t->esq);
		}
	}
	
}
main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	contafolhas(A);
	printf("\n%d\n", folhas);
		
}
