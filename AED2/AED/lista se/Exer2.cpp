#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

int insert_fim(lista *q, int d){
	struct no *aux, *atual, *proximo;
	aux = (struct no *)malloc(sizeof(struct no));
	
	aux->dado =d;
	atual = q->inicio;
	
	while(atual->prox != NULL){
		atual = atual->prox;
	}
	aux->prox = NULL;
	atual->prox = aux;
	
}

int concatenar(lista *q, lista x){
	struct no *aux, *atual, *prox;
	aux = (struct no *)malloc(sizeof(struct no));
	
	atual = x.inicio;
	insert_fim(q, atual->dado);
	
	while(atual->prox != NULL){
		atual = atual->prox;
		insert_fim(q, atual->dado);
		
	}
}

main(){
	lista X;
	lista Y;
	int num, i;
	
	create(&X);
	create(&Y);
	
	printf("Lista 1\n");
	for(i=0; i<5; i++){
		printf("Num %d: ", i);
		scanf("%d", &num);
		
		insert(&X, num);
	}
	imprime(X);
	
	printf("\nLista 2\n");
	for(i=0; i<5; i++){
		printf("Num %d: ", i);
		scanf("%d", &num);
		
		insert(&Y, num);
	}
	imprime(Y);
	
	
	printf("\n\nListas Concatenadas: ");
	concatenar(&X, Y);
	imprime(X);
}
