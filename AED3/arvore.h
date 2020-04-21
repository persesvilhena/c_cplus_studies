#include<stdlib.h>
struct no{
	struct no *esq;
	struct no *dir;
	struct no *pai;
	int fb;
	char dado;
};

typedef struct no *Arvore;

void calcular_fb(Arvore *t){
	if((*t) != NULL){
        calcular_fb((&&t)->esq);
		calcular_fb(t->dir);
		calcula(t);
	}
}

void insertNode(Arvore *t, char d, Arvore *r){
	if (*t == NULL)	{
		*t = (struct no*) malloc(sizeof(struct no));
		if ( *t != NULL )	{
			(*t)->esq = NULL;
			(*t)->dir = NULL;
			(*t)->pai = r;
			(*t)->dado = d;
			(*t)->fb = 0;
			calcular_fb(t);
		}else
			printf("Memoria insuficiente");
		}
	else
		if (d < (*t)->dado)
			insertNode(&(*t)->esq, d, &t);
		else
			if (d > (*t)->dado)
				insertNode(&(*t)->dir, d, &t);
			else
				printf("Duplicação de no");
}



calcula(Arvore *t){
	(*t)->fb = (Altura(t->dir) - Altura(t->esq));
}

void imprimir(Arvore t){
	if(t != NULL){
		printf("%c (%c)", t->dado, t->pai->dado);
		preOrder(t->esq);
		preOrder(t->dir);
	}
}








void preOrder(Arvore t){
	if(t != NULL){
		printf("%c", t->dado);
		preOrder(t->esq);
		preOrder(t->dir);
	}
}

void inOrder(Arvore t){
	if(t != NULL){
		inOrder(t->esq);
		printf("%c", t->dado);
		inOrder(t->dir);
	}
}

void posOrder(Arvore t){
	if(t != NULL){
		posOrder(t->esq);		
		posOrder(t->dir);
		printf("%c", t->dado);
	}
}

int ContaNos(Arvore t){
    if (t == NULL) 
       return 0;
    return ContaNos(t->esq) + ContaNos(t->dir) + 1;
}

int Altura(Arvore t){
    int u, v;
    if (t == NULL) 
       return -1;
    u = Altura(t->esq);
    v = Altura(t->dir);
    if (u > v) 
       return u+1;
    else 
        return v+1;
}

int ContaFolhas(Arvore t){
	if(t==NULL)
	   return 0;
    if (t->esq == NULL && t->dir == NULL ) 
       return 1;
    else
        return  ContaFolhas(t->esq) + ContaFolhas(t->dir);
}

int contaDireita(Arvore t){
	if(t == NULL){
		return 0;
	}
	if(t->dir == NULL){
		return 1;
	}else{
		return contaDireita(t->dir);
	}	
}

void possuemSub(Arvore t){
	if(t != NULL){
		if(t->dir != NULL){
			printf("%c", t->dir);
			possuemSub(t->dir);
		}
		
		if(t ->esq != NULL){
			printf("%c", t->esq);
			possuemSub(t->esq);
		}
	}
	
}
