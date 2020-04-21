#define TRUE 1
#define FALSE 0

struct no{
	int dado;
	struct no *prox;
};

typedef struct{
	struct no *topo;
} pilha;

void create(pilha *s){
	s->topo=NULL;
}

int push(pilha *s, int d){
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux==NULL) return (FALSE);
	aux->dado = d;
	aux->prox = s->topo;
	s->topo=aux;
	return(TRUE);
}

int pop(pilha *s, int *d){
	struct no *aux;
	if(s->topo==NULL) return (FALSE);
	aux = s->topo;
	s->topo = (s->topo)->prox;
	*d = aux->dado;
	free(aux);
	return(TRUE);
}

int isEmpty(pilha s){
	if(s.topo == NULL){
		return (TRUE);
	}else{
		return (FALSE);
	}
}
