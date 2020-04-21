#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"


void Pesquisa(Arvore t, char d){
	if(t != NULL){
		
		if(t->dado == d){
			if(t->esq != NULL){
				preOrder(t->esq);
			}
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
	
	Pesquisa(A, 'G');
	
}
