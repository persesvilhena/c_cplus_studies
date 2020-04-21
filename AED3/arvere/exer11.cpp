#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"

void posOrderInt(Arvore t){
	if(t != NULL){
		posOrderInt(t->esq);		
		posOrderInt(t->dir);
		printf("%d\n", t->dado);
	}
}

main(){
	Arvore A = NULL;

	
	insertNode(&A, 17);
	insertNode(&A, 11);
	insertNode(&A, 15);
	insertNode(&A, 5);
	insertNode(&A, 10);
	
	posOrderInt(A);
	
}
