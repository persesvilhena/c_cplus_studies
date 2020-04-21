#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"


void Pesquisa(Arvore t, char d){

	if(t != NULL){
		
		if(t->dado == d){
			printf("%c", t->dir->dado);
		}		
		
		Pesquisa(t->esq, d);
		Pesquisa(t->dir, d);
	}
}
void no(Arvore t){
	printf("%c", t->dir->dado);
}



main(){
	Arvore A = NULL;

	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	insertNode(&A, 'A');
	
	//Pesquisa(A, 'G');
	//no(&A->dir);
	
}
