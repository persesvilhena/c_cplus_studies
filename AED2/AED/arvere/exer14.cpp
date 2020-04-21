#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"


void Pesquisa(Arvore t, char d, char s){

	if(t != NULL){
		
		if(t->dado == d){
			t->dado = s;
		}		
		
		Pesquisa(t->esq, d, s);
		Pesquisa(t->dir, d, s);
	}
}


main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	Pesquisa(A, 'B', 'F');
	preOrder(A);
	system("pause");
	
}
