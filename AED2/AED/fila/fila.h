#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct no{
	int dado;
	struct no *prox;
};

typedef struct{
	struct no *inicio;
	struct no *fim;
} fila;

void create(fila *q){
	q->inicio=NULL;
	q->fim=NULL;
}

int insert(fila *q, int d){
	struct no *aux;
	aux = (struct no *)malloc(sizeof(struct no));
	if(aux==NULL)
	return(FALSE);
	aux->dado=d;
	aux->prox=NULL;
	if(q->inicio==NULL)
	q->inicio=aux;
	if(q->fim!=NULL)
	q->fim->prox=aux;
	q->fim=aux;
	return(TRUE);
}

int remove(fila *q, int *d){
	struct no *aux;
	if(q->inicio==NULL)
	return(FALSE);
	aux=q->inicio;
	q->inicio=aux->prox;
	*d=aux->dado;
	if(q->inicio==NULL)
	q->fim=NULL;
	free(aux);
	return(TRUE);
}

int isEmpty(fila q){
    if(q.inicio == NULL && q.fim == NULL){
        return (1);
    }else{
        return (0);
    }
}
