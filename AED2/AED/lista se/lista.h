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












