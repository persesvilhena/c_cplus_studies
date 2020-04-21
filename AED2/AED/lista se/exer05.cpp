#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define ps system("pause");
#define pf printf
#define sf scanf
#define lp system("cls");

int removerx(lista *q){
	struct no *aux, *atual, *anterior;

	if ('x' == (q->inicio)->dado){
		aux = q->inicio;
		q->inicio = (q->inicio)->prox;
		free(aux); 
		return(1);
	}else{
		return(0);
	}
}

main(){
    struct no *aux, *atual, *anterior;
    lista L;
	
	create(&L);
	insert(&L, 0);
	insert(&L, 1);
	insert(&L, 2);
	insert(&L, 3);
	insert(&L, 4);
	insert(&L, 1);
	while(aux->dado != NULL){
        pf("teste");
	}
	
	imprime(L);
	ps
}
