#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"



void menor(Arvore t){
	 if(t->esq == NULL){
	 	printf("Menor: %c\n", t->dado);
	 }else{
	 	menor(t->esq);
	 }
}


main(){
	Arvore A = NULL;

	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	insertNode(&A, 'A');
	
	menor(A);
	
}
