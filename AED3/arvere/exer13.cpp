#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"

void maiorMenor(Arvore t, int a, int b){
	if(t!= NULL){
		if(t->dado > a && t->dado < b){
			printf("%d ", t->dado);			
		}	
		maiorMenor(t->dir, a, b);
		maiorMenor(t->esq, a, b);
	}
}



main(){
	Arvore A = NULL;

	
	insertNode(&A, 9);
	insertNode(&A, 4);
	insertNode(&A, 12);
	insertNode(&A, 2);
	insertNode(&A, 6);
	insertNode(&A, 10);
	insertNode(&A, 16);
	insertNode(&A, 7);
	insertNode(&A, 11);
	insertNode(&A, 13);
	insertNode(&A, 18);
	insertNode(&A, 8);
	insertNode(&A, 14);
	
	maiorMenor(A, 2, 6);
	system("pause");
	
}
