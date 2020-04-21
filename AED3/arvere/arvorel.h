struct no{
	struct no *esq;
	struct no *dir;
	struct no *pai; 
	int dado; //Chave == dado
	int fb; //fator de balanceamento
};

typedef struct no *ArvoreL;

void inserir(ArvoreL *t, int d){
	if (*t == NULL)	{
		*t = (struct no*) malloc(sizeof(struct no));
		if ( *t != NULL )	{
			(*t)->esq = NULL;
			(*t)->dir = NULL;
			(*t)->dado = d;
			(*t)->pai = NULL;
			(*t)->fb = 0;
		}else
			printf("Memoria insuficiente");
		}
	else
		if (d < (*t)->dado)
			inserir(&(*t)->esq, d);
		else
			if (d > (*t)->dado)
				inserir(&(*t)->dir, d);
			else
				printf("Duplicacao de no");
}

int Altura(ArvoreL t){ //Funcionando!!!
    
	int esq, dir;
	
    if (t == NULL){
    	return -1;
	}    
       
    esq = Altura(t->esq);
    dir = Altura(t->dir);
    
	if (esq > dir){
    	return esq+1;	
	}else {
		return dir+1;
	}
}

void rot_Esquerda(ArvoreL *t){
	ArvoreL *q;
	
	q = t->dir;
	
	t->dir = q ->esq;
	if(q->esq != NULL){
		q->esq->pai = t;		
	}
	q->esq = t;
	q->pai = t->pai; 
	if(t->pai != NULL){
		t->pai->esq = q;
	}else{
		t->pai->dir = q;
	}
	t->pai = q;
	
	q->fb = Altura(q->dir) - Altura(q->esq);
	t->fb = Altura(q->dir) - Altura(t->esq);
	
	return q;	
}

void rot_Direita(ArvoreL *t){
	ArvoreL *q;
	
	q = t->esq;
	//Realiza a rotação
	t->esq = q->dir;
	
	if(q->dir != NULL){
		q->dir->pai = t;
	}
	q->dir = t;
	q->pai = t->pai;
	
	if(t->pai != NULL){
		if(t->pai->esq == t){
			t->pai->esq = q;
		}
		
	}else{
		t->pai->dir = q;
	}
	t->pai= q;
	
	//Balancamento
	q->fb = Altura(q->dir) - Altura(q->esq);
	t->fb = Altura(q->dir) - Altura(t->esq);
	
	return q;
	
}


