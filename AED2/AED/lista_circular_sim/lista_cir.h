#define TRUE 1
#define FALSE 0

struct no{
int dado;
struct no *prox;
};

typedef struct{
struct no *inicio;
struct no *fim;
} listaC;

void create(listaC *q){
	q->inicio=NULL;
}

int isEmpty(listaC q){
	if (q.inicio==NULL)
	return (TRUE);
	else
	return (FALSE);
}

int insert(listaC *q, int d){
	struct no *aux;
	
	if (q->inicio == NULL){
		aux= (struct no *) malloc(sizeof(struct no));
		aux->dado = d;
		q->inicio = aux;
		q->fim = aux;
		aux->prox = q->inicio;
		return(TRUE);
	}
	
	aux= (struct no *) malloc(sizeof(struct no));
	aux->dado = d;
	aux->prox = q->inicio;
	q->fim->prox = aux;
	q->fim = aux;
	return(TRUE);
}

void imprime(listaC q){
	struct no *aux;
	
	if (!isEmpty(q)){
		aux = q.inicio;
		if (aux != q.fim){
			do{
				printf("%d->%d ", aux->dado, aux->prox->dado);
				aux = aux->prox;
			} while (aux != q.inicio);
		}
	else
		printf("%d->NULL ", aux->dado);
	}
}

int remover(listaC *q, int d){
	
	struct no *aux, *atual, *anterior;
	if (d == (q->inicio)->dado){
		aux = q->inicio;
	
		if (q->inicio == q->fim)
			q->inicio = NULL;
		else{
		
			q->inicio = q->inicio->prox;
			q->fim->prox = q->inicio;
		}
		
		free(aux); return(TRUE);
		}else{
		
			anterior = q->inicio;
			atual = (q->inicio)->prox;
		
		while (atual != q->inicio && atual->dado != d){
			anterior = atual; atual = atual->prox;
		}
		if (atual != q->inicio){
			aux = atual;
			anterior->prox = atual->prox;
			free(aux); return(TRUE);
		}
	}
	return(FALSE);
}




