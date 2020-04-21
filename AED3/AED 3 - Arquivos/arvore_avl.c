#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <assert.h>

struct avl_no_s {
	struct avl_no_s *esq;
	struct avl_no_s *dir;
	int valor;
};
typedef struct avl_no_s avl_no_t;

struct avl_arvore_s {
	struct avl_no_s *raiz;
};
typedef struct avl_arvore_s avl_arvore_t;


avl_arvore_t *avl_criar() {
	avl_arvore_t *arvore = NULL;
	if( ( arvore = malloc( sizeof( avl_arvore_t ) ) ) == NULL ) {
		return NULL;
	}
	arvore->raiz = NULL;
	return arvore;
}


avl_no_t *avl_criar_no() {
	avl_no_t *no = NULL;
	if( ( no = malloc( sizeof( avl_no_t ) ) ) == NULL ) {
		return NULL;
	}
	no->esq = NULL;
	no->dir = NULL;
	no->valor = 0;
	return no;	
}


int avl_no_altura( avl_no_t *no ) {
	int altura_esq = 0;
	int altura_dir = 0;
	if( no->esq ) altura_esq = avl_no_altura( no->esq );
	if( no->dir ) altura_dir = avl_no_altura( no->dir );
	return altura_dir > altura_esq ? ++altura_dir : ++altura_esq;
}


int avl_balanceamento_fator( avl_no_t *no ) {
	int bf = 0;
	if( no->esq  ) bf += avl_no_altura( no->esq );
	if( no->dir ) bf -= avl_no_altura( no->dir );
	return bf ;
}


avl_no_t *avl_rotacao_esqesq( avl_no_t *no ) {
 	avl_no_t *a = no;
	avl_no_t *b = a->esq;
	a->esq = b->dir;
	b->dir = a;
	return( b );
}


avl_no_t *avl_rotacao_esqdir( avl_no_t *no ) {
	avl_no_t *a = no;
	avl_no_t *b = a->esq;
	avl_no_t *c = b->dir;
	a->esq = c->dir;
	b->dir = c->esq; 
	c->esq = b;
	c->dir = a;
	return( c );
}


avl_no_t *avl_rotacao_diresq( avl_no_t *no ) {
	avl_no_t *a = no;
	avl_no_t *b = a->dir;
	avl_no_t *c = b->esq;
	a->dir = c->esq;
	b->esq = c->dir; 
	c->dir = b;
	c->esq = a;
	return( c );
}


avl_no_t *avl_rotacao_dirdir( avl_no_t *no ) {
	avl_no_t *a = no;
	avl_no_t *b = a->dir;
	a->dir = b->esq;
	b->esq = a; 
	return( b );
}


avl_no_t *avl_balanceamento_no( avl_no_t *no ) {
	avl_no_t *novaraiz = NULL;
	if( no->esq )
		no->esq  = avl_balanceamento_no( no->esq  );
	if( no->dir ) 
		no->dir = avl_balanceamento_no( no->dir );
		int bf = avl_balanceamento_fator( no );
	if( bf >= 2 ) {
		if( avl_balanceamento_fator( no->esq ) <= -1 ) 
			novaraiz = avl_rotacao_esqdir( no );
		else 
			novaraiz = avl_rotacao_esqesq( no );
	} else if( bf <= -2 ) {
		if( avl_balanceamento_fator( no->dir ) >= 1 )
			novaraiz = avl_rotacao_diresq( no );
		else 
			novaraiz = avl_rotacao_dirdir( no );
	} else {
		novaraiz = no;
	}
	return( novaraiz );	
}


void avl_balanceamento( avl_arvore_t *arvore ) {
	avl_no_t *novaraiz = NULL;
	novaraiz = avl_balanceamento_no( arvore->raiz );
	if( novaraiz != arvore->raiz )  {
		arvore->raiz = novaraiz; 
	}
}


void avl_insert( avl_arvore_t *arvore, int valor ) {
	avl_no_t *no = NULL;
	avl_no_t *prox = NULL;
	avl_no_t *ultimo = NULL;
	if( arvore->raiz == NULL ) {
		no = avl_criar_no();
		no->valor = valor;
		arvore->raiz = no;
	} else {
		prox = arvore->raiz;
		while( prox != NULL ) {
			ultimo = prox;
			if( valor < prox->valor ) {
				prox = prox->esq;
			} else if( valor > prox->valor ) {
				prox = prox->dir;
			} else if( valor == prox->valor ) {
			}
		}
		no = avl_criar_no();
		no->valor = valor;
		if( valor < ultimo->valor ) ultimo->esq = no;
		if( valor > ultimo->valor ) ultimo->dir = no;
	}
	avl_balanceamento( arvore );
}


avl_no_t *avl_buscar( avl_arvore_t *arvore, int valor ) {
	avl_no_t *atual = arvore->raiz;
	while( atual && atual->valor != valor ) {
		if( valor > atual->valor )
			atual = atual->dir;
		else
			atual = atual->esq;
	}
	return atual;
}


void avl_profundidade_no_dfs( avl_no_t *no, int nivel ) {
	int i = 0;
	if( no->esq ) avl_profundidade_no_dfs( no->esq, nivel + 2 );
	for( i = 0; i < nivel; i++ ) putchar( ' ' );
	printf("%d: %d\n\n", no->valor, avl_balanceamento_fator( no ) );
	if( no->dir ) avl_profundidade_no_dfs( no->dir, nivel + 2 );
}

void avl_profundidade_dfs( avl_arvore_t *arvore ) {
	avl_profundidade_no_dfs( arvore->raiz, 0 );
}

int main( int argc, char **argv ) {
	avl_arvore_t *arvore = NULL;
	int i = 0; 
	int r = 0;
	arvore = avl_criar();
	srand( time( NULL ) );
	for( i = 0; i < 20; i++ ) {
		do {
			r = rand() % 20 + 1;
		} while( avl_buscar( arvore, r ) );
		avl_insert( arvore, r );
	}
	avl_profundidade_dfs( arvore );
	system("pause");
}
