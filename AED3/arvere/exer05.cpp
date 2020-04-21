#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"


void Pesquisa(Arvore t, char d){

	if(t != NULL){
		
		if(t->dado == d){
			printf("%p", t);
		}		
		
		Pesquisa(t->esq, d);
		Pesquisa(t->dir, d);
	}
}


main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	Pesquisa(A, 'B');
	
}
