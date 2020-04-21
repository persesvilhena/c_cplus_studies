#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
#define lp system("cls");
#define ps pf("\n");system("pause");
#define menu pf("::::::::MENU:::::::::\n");pf("1 - Inserir no inicio\n");pf("2 - Inserir no meio\n");pf("3 - Inserir no fim\n");pf("4 - Retirar do inicio\n");pf("5 - Retirar do meio\n");pf("6 - Retirar do fim\n");pf("7 - Busca\n");pf("8 - Imprime\n");pf("9 - Sair\n");
#define TRUE 1
#define FALSE 0

struct no{
	int dado;
	struct no *prox;
};

typedef struct{
	struct no *inicio;
}lista;

void create(lista *q){
	q->inicio=NULL;
}

int isEmpty(lista q){
	if (q.inicio==NULL)
		return TRUE;
	else
		return FALSE;
}

int insert(lista *q, int d){
	struct no *aux, *atual, *anterior;
	aux = (struct no *) malloc(sizeof(struct no));
	
	if (aux!=NULL){
		aux->dado=d; aux->prox=NULL;
		anterior = NULL; atual = q->inicio;
		while (atual != NULL && d > atual->dado){
			anterior = atual;
			atual = atual->prox;
		}
		if (anterior == NULL){
			aux->prox = q->inicio;
			q->inicio = aux;
		}
		else{
			anterior->prox=aux;
			aux->prox = atual;
		}
	}	
}

int insert_fim(lista *q, int d){
	struct no *aux, *atual, *anterior;
	aux = (struct no *) malloc(sizeof(struct no));
	
	aux->dado = d;
	atual = q->inicio;
	
	while(atual->prox != NULL){
		atual = atual->prox;
	}	
	aux->prox = NULL;
	atual->prox = aux;
}

int insert_inicio(lista *q, int d){
	struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));
    aux->dado = d;
    aux->prox = q->inicio;
    q->inicio = aux;
}

void insert_meio(lista *q, int pos, int d){
    int cont=0;
    struct no *aux, *atual, *anterior;
    aux = (struct no *)malloc(sizeof(struct no));
    aux->dado = d;
    aux->prox = NULL;
    anterior = NULL;
    atual = q->inicio;
    while(atual != NULL && cont < pos)
    {
        anterior = atual;
        atual = atual->prox;
        cont++;
    }
    if(anterior == NULL)
    {
        aux->prox = q->inicio;
        q->inicio = aux;
    }
    else
    {
        anterior->prox = aux;
        aux->prox = atual;
    }
}

void imprime(lista q){
	struct no *aux;
	aux = q.inicio;
	
	if (!isEmpty(q)){
		while (aux != NULL){
			printf("%d ", aux->dado);
			aux = aux->prox;
		}	
	}
}

int remover(lista *q, int d){
	struct no *aux, *atual, *anterior;

	if (d == (q->inicio)->dado){
		aux = q->inicio;
		q->inicio = (q->inicio)->prox;
		free(aux); return(TRUE);
	}else{
		anterior = q->inicio;
		atual = (q->inicio)->prox;
		while (atual != NULL && atual->dado != d){
			anterior = atual;
			atual = atual->prox;
		}
	if (atual != NULL){
		aux = atual;
		anterior->prox = atual->prox;
		free(aux);
		return(TRUE);
	}
	}
}

void remover_inicio(lista *q){
    struct no *aux = (struct no *)malloc(sizeof(struct no));
    aux = q->inicio;
    q->inicio = (q->inicio)->prox;
    free(aux);
}

void remover_meio(lista *q, int pos){
    int cont=0;
    struct no *aux, *atual, *anterior;
    anterior = q->inicio;
    atual = (q->inicio)->prox;
    while(atual != NULL && cont < pos)
    {
        anterior = atual;
        atual = atual->prox;
        cont++;
    }
    if(atual != NULL)
    {
        aux = atual;
        anterior->prox = atual->prox;
        free(aux);
    }
}

void remover_fim(lista *q){
    struct no *aux, *atual, *anterior;
    if(q->inicio->prox == NULL)
    {
        q->inicio = NULL;
        free(q->inicio);
    }
    else
    {
        anterior = q->inicio;
        atual = (q->inicio)->prox;
        while(atual->prox != NULL)
        {
            anterior = atual;
            atual = atual->prox;
        }
        if(atual != NULL)
        {
            aux = atual;
            anterior->prox = atual->prox;
            free(aux);
        }
    }
}

int busca(lista q, int d){
    int cont=0;
    struct no *aux = q.inicio;
    while(aux != NULL)
    {
        if(aux->dado == d)
            return (cont);
        cont++;
        aux = aux->prox;
    }
    return (-1);
}

main(){
	lista L;
	int opc, valor, pos;
	
	create(&L);
	while(opc != 9){
		lp
		menu
		
		pf("Opcao: ");
		sf("%d", &opc);
		switch(opc){
			case 1:{
				lp
				pf("Numero a ser inserido: ");
				sf("%d", &valor);
				insert_inicio(&L, valor);
				ps
				break;
			}
			case 2:{
				lp
				pf("Numero a ser inserido: ");
				sf("%d", &valor);
				pf("Posicao na lista: ");
				sf("%d", &pos);
				insert_meio(&L, pos, valor);
				ps
				break;
			}
			case 3:{
				lp
				pf("Numero a ser inserido: ");
				sf("%d", &valor);
				insert_fim(&L, valor);
				ps
				break;
			}
			case 4:{
				lp
				remover_inicio(&L);
				pf("Removido com sucesso!");
				ps
				break;
			}
			case 5:{
				lp
				pf("Posicao na lista a ser removida: ");
				sf("%d", &pos);
				remover_meio(&L, pos);
				pf("Removido com sucesso!");
				ps
				break;
			}
			case 6:{
				lp
				remover_fim(&L);
				pf("Removido com sucesso!");
				ps
				break;
			}
			case 7:{
				lp
				pf("Valor a ser buscado: ");
				sf("%d", &valor);
				pf("Posicao na lista: %d", 1 + busca(L, valor));
				ps
				break;
			}
			case 8:{
				lp
				imprime(L);
				ps
				break;
			}
			case 9:{
				break;
			}
			default:{
				lp
				pf("Opcao Invalida!");
				ps
				break;
			}

		}
	}
}
