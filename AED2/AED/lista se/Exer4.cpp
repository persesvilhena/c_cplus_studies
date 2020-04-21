#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

void remover_inicio(lista *q){
    struct no *aux = (struct no *)malloc(sizeof(struct no));
    aux = q->inicio;
    q->inicio = (q->inicio)->prox;
    free(aux);
}


void imprime_rec(lista q){
	struct no *aux;
	aux = q.inicio;
	
	printf("%d ", aux->dado);
	aux = aux->prox;

	remover_inicio(&q);
	
	if (!isEmpty(q)){
	//	while (aux != NULL){
			imprime_rec(q);
			
	//	}	
	}else{
		return ;
	}
	
}

main(){
	lista L;
	
	create(&L);
	insert(&L, 0);
	insert(&L, 1);
	insert(&L, 2);
	insert(&L, 3);
	insert(&L, 4);
	insert(&L, 5);
	
	imprime_rec(L);
	
	
}
