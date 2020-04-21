#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"
int conta=0, conta1=0, conta2=0;

void processa(Arvore t, int d){
	conta++;
	if(conta == d){
		printf("%d\nconta: %d\n\n", t->dado, conta);
		conta = 0;
	}
}

void processa1(Arvore t, int d){
	conta1++;
	if(conta1 == d){
		printf("%d\nconta: %d\n\n", t->dado, conta1);
		conta1 = 0;
	}
}

void processa2(Arvore t, int d){
	conta2++;
	if(conta2 == d){
		printf("%d\nconta: %d\n\n", t->dado, conta2);
		conta2 = 0;
	}
}

void preOrderInt(Arvore t, int d){
	if(t != NULL){
		processa(t, d);
		preOrderInt(t->esq, d);
		preOrderInt(t->dir, d);
	}
}

void inOrderInt(Arvore t, int d){
	if(t != NULL){
		inOrderInt(t->esq, d);
		processa1(t, d);
		inOrderInt(t->dir, d);
	}
}

void posOrderInt(Arvore t, int d){
	if(t != NULL){
		posOrderInt(t->esq, d);		
		posOrderInt(t->dir, d);
		processa2(t, d);
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
	
	preOrderInt(A, 8);
	inOrderInt(A, 7);
	posOrderInt(A, 9);
	
}
