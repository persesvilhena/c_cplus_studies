#include <assert.h>
#include <stdlib.h>

enum rbtree_no_cor { VERMELHO, PRETO };

	typedef struct rbtree_no_t {
	void* chave;
	struct rbtree_no_t* esquerda;
	struct rbtree_no_t* direita;
	struct rbtree_no_t* pai;
	enum rbtree_no_cor cor;
	} *rbtree_no;

	typedef struct rbtree_t {
	rbtree_no raiz;
	} *rbtree;

	typedef int (*compara_func)(void* esquerda, void* direita);

	rbtree rbtree_criar();
	void* rbtree_procura(rbtree t, void* chave, compara_func compara);
	void rbtree_inserir(rbtree t, void* chave, compara_func compara);
	void rbtree_excluir(rbtree t, void* chave, compara_func compara);
	typedef rbtree_no no;
	typedef enum rbtree_no_cor cor;


	no vo(no n);
	no irmao(no n);
	no tio(no n);
	void verificar_propriedades(rbtree t);
	void propriedade_1(no raiz);
	void propriedade_2(no raiz);
	cor no_cor(no n);
	void propriedade_4(no raiz);
	void propriedade_5(no raiz);
	void propriedade_5_aux(no n, int contador_pretos, int* contador_pretos_path);

	no new_no(void* chave, cor no_cor, no esquerda, no direita);
	no procura_no(rbtree t, void* chave, compara_func compara);
	void rotacionar_esquerda(rbtree t, no n);
	void rotacionar_direita(rbtree t, no n);
	void substituir_no(rbtree t, no antigon, no novon);
	void inserir_caso1(rbtree t, no n);
	void inserir_caso2(rbtree t, no n);
	void inserir_caso3(rbtree t, no n);
	void inserir_caso4(rbtree t, no n);
	void inserir_caso5(rbtree t, no n);
	no maximo_no(no raiz);
	void excluir_caso1(rbtree t, no n);
	void excluir_caso2(rbtree t, no n);
	void excluir_caso3(rbtree t, no n);
	void excluir_caso4(rbtree t, no n);
	void excluir_caso5(rbtree t, no n);
	void excluir_caso6(rbtree t, no n);

no vo(no n) {
    assert (n != NULL);
    assert (n->pai != NULL);
    assert (n->pai->pai != NULL);
    return n->pai->pai;
}

no irmao(no n) {
    assert (n != NULL);
    assert (n->pai != NULL);
    if (n == n->pai->esquerda)
        return n->pai->direita;
    else
        return n->pai->esquerda;
}

no tio(no n) {
    assert (n != NULL);
    assert (n->pai != NULL);
    assert (n->pai->pai != NULL);
    return irmao(n->pai);
}

void verificar_propriedades(rbtree t) {
    propriedade_1(t->raiz);
    propriedade_2(t->raiz);
    propriedade_4(t->raiz);
    propriedade_5(t->raiz);
}

void propriedade_1(no n) {
    assert(no_cor(n) == VERMELHO || no_cor(n) == PRETO);
    if (n == NULL) return;
    propriedade_1(n->esquerda);
    propriedade_1(n->direita);
}

void propriedade_2(no raiz) {
    assert(no_cor(raiz) == PRETO);
}

cor no_cor(no n) {
    return n == NULL ? PRETO : n->cor;
}

void propriedade_4(no n) {
    if (no_cor(n) == VERMELHO) {
        assert (no_cor(n->esquerda)   == PRETO);
        assert (no_cor(n->direita)  == PRETO);
        assert (no_cor(n->pai) == PRETO);
    }
    if (n == NULL) return;
    propriedade_4(n->esquerda);
    propriedade_4(n->direita);
}

void propriedade_5(no raiz) {
    int contador_pretos_path = -1;
    propriedade_5_aux(raiz, 0, &contador_pretos_path);
}

void propriedade_5_aux(no n, int contador_pretos, int* path_contador_pretos) {
    if (no_cor(n) == PRETO) {
        contador_pretos++;
    }
    if (n == NULL) {
        if (*path_contador_pretos == -1) {
            *path_contador_pretos = contador_pretos;
        } else {
            assert (contador_pretos == *path_contador_pretos);
        }
        return;
    }
    propriedade_5_aux(n->esquerda,  contador_pretos, path_contador_pretos);
    propriedade_5_aux(n->direita, contador_pretos, path_contador_pretos);
}

rbtree rbtree_criar() {
    rbtree t = malloc(sizeof(struct rbtree_t));
    t->raiz = NULL;
    verificar_propriedades(t);
    return t;
}

no new_no(void* chave , cor no_cor, no esquerda, no direita) {
    no resultado = malloc(sizeof(struct rbtree_no_t));
    resultado->chave = chave;
    resultado->cor = no_cor;
    resultado->esquerda = esquerda;
    resultado->direita = direita;
    if (esquerda  != NULL)  esquerda->pai = resultado;
    if (direita != NULL) direita->pai = resultado;
    resultado->pai = NULL;
    return resultado;
}

no procura_no(rbtree t, void* chave, compara_func compara) {
    no n = t->raiz;
    while (n != NULL) {
        int comp_resultado = compara(chave, n->chave);
        if (comp_resultado == 0) {
            return n;
        } else if (comp_resultado < 0) {
            n = n->esquerda;
        } else {
            assert(comp_resultado > 0);
            n = n->direita;
        }
    }
    return n;
}

void* rbtree_procura(rbtree t, void* chave, compara_func compara) {
    no n = procura_no(t, chave, compara);
    return n == NULL ? NULL : n->chave;
}

void rotacionar_esquerda(rbtree t, no n) {
    no r = n->direita;
    substituir_no(t, n, r);
    n->direita = r->esquerda;
    if (r->esquerda != NULL) {
        r->esquerda->pai = n;
    }
    r->esquerda = n;
    n->pai = r;
}

void rotacionar_direita(rbtree t, no n) {
    no L = n->esquerda;
    substituir_no(t, n, L);
    n->esquerda = L->direita;
    if (L->direita != NULL) {
        L->direita->pai = n;
    }
    L->direita = n;
    n->pai = L;
}

void substituir_no(rbtree t, no antigon, no novon) {
    if (antigon->pai == NULL) {
        t->raiz = novon;
    } else {
        if (antigon == antigon->pai->esquerda)
            antigon->pai->esquerda = novon;
        else
            antigon->pai->direita = novon;
    }
    if (novon != NULL) {
        novon->pai = antigon->pai;
    }
}

void rbtree_inserir(rbtree t, void* chave, compara_func compara) {
    no inserido_no = new_no(chave, VERMELHO, NULL, NULL);
    if (t->raiz == NULL) {
        t->raiz = inserido_no;
    } else {
        no n = t->raiz;
        while (1) {
            int comp_resultado = compara(chave, n->chave);
            if (comp_resultado == 0) {
                free (inserido_no);
                return;
            } else if (comp_resultado < 0) {
                if (n->esquerda == NULL) {
                    n->esquerda = inserido_no;
                    break;
                } else {
                    n = n->esquerda;
                }
            } else {
                assert (comp_resultado > 0);
                if (n->direita == NULL) {
                    n->direita = inserido_no;
                    break;
                } else {
                    n = n->direita;
                }
            }
        }
        inserido_no->pai = n;
    }
    inserir_caso1(t, inserido_no);
    verificar_propriedades(t);
}

void inserir_caso1(rbtree t, no n) {
    if (n->pai == NULL)
        n->cor = PRETO;
    else
        inserir_caso2(t, n);
}

void inserir_caso2(rbtree t, no n) {
    if (no_cor(n->pai) == PRETO)
        return;
    else
        inserir_caso3(t, n);
}

void inserir_caso3(rbtree t, no n) {
    if (no_cor(tio(n)) == VERMELHO) {
        n->pai->cor = PRETO;
        tio(n)->cor = PRETO;
        vo(n)->cor = VERMELHO;
        inserir_caso1(t, vo(n));
    } else {
        inserir_caso4(t, n);
    }
}

void inserir_caso4(rbtree t, no n) {
    if (n == n->pai->direita && n->pai == vo(n)->esquerda) {
        rotacionar_esquerda(t, n->pai);
        n = n->esquerda;
    } else if (n == n->pai->esquerda && n->pai == vo(n)->direita) {
        rotacionar_direita(t, n->pai);
        n = n->direita;
    }
    inserir_caso5(t, n);
}

void inserir_caso5(rbtree t, no n) {
    n->pai->cor = PRETO;
    vo(n)->cor = VERMELHO;
    if (n == n->pai->esquerda && n->pai == vo(n)->esquerda) {
        rotacionar_direita(t, vo(n));
    } else {
        assert (n == n->pai->direita && n->pai == vo(n)->direita);
        rotacionar_esquerda(t, vo(n));
    }
}

void rbtree_excluir(rbtree t, void* chave, compara_func compara) {
    no filho;
    no n = procura_no(t, chave, compara);
    if (n == NULL) return;
    if (n->esquerda != NULL && n->direita != NULL) {
        no pred = maximo_no(n->esquerda);
        n->chave   = pred->chave;
        n = pred;
    }

    assert(n->esquerda == NULL || n->direita == NULL);
    filho = n->direita == NULL ? n->esquerda  : n->direita;
    if (no_cor(n) == PRETO) {
        n->cor = no_cor(filho);
        excluir_caso1(t, n);
    }
    substituir_no(t, n, filho);
    if (n->pai == NULL && filho != NULL)
        filho->cor = PRETO;
    free(n);

    verificar_propriedades(t);
}

 no maximo_no(no n) {
    assert (n != NULL);
    while (n->direita != NULL) {
        n = n->direita;
    }
    return n;
}

void excluir_caso1(rbtree t, no n) {
    if (n->pai == NULL)
        return;
    else
        excluir_caso2(t, n);
}

void excluir_caso2(rbtree t, no n) {
    if (no_cor(irmao(n)) == VERMELHO) {
        n->pai->cor = VERMELHO;
        irmao(n)->cor = PRETO;
        if (n == n->pai->esquerda)
            rotacionar_esquerda(t, n->pai);
        else
            rotacionar_direita(t, n->pai);
    }
    excluir_caso3(t, n);
}

void excluir_caso3(rbtree t, no n) {
    if (no_cor(n->pai) == PRETO &&
        no_cor(irmao(n)) == PRETO &&
        no_cor(irmao(n)->esquerda) == PRETO &&
        no_cor(irmao(n)->direita) == PRETO)
    {
        irmao(n)->cor = VERMELHO;
        excluir_caso1(t, n->pai);
    }
    else
        excluir_caso4(t, n);
}

void excluir_caso4(rbtree t, no n) {
    if (no_cor(n->pai) == VERMELHO &&
        no_cor(irmao(n)) == PRETO &&
        no_cor(irmao(n)->esquerda) == PRETO &&
        no_cor(irmao(n)->direita) == PRETO)
    {
        irmao(n)->cor = VERMELHO;
        n->pai->cor = PRETO;
    }
    else
        excluir_caso5(t, n);
}

void excluir_caso5(rbtree t, no n) {
    if (n == n->pai->esquerda &&
        no_cor(irmao(n)) == PRETO &&
        no_cor(irmao(n)->esquerda) == VERMELHO &&
        no_cor(irmao(n)->direita) == PRETO)
    {
        irmao(n)->cor = VERMELHO;
        irmao(n)->esquerda->cor = PRETO;
        rotacionar_direita(t, irmao(n));
    }
    else if (n == n->pai->direita &&
             no_cor(irmao(n)) == PRETO &&
             no_cor(irmao(n)->direita) == VERMELHO &&
             no_cor(irmao(n)->esquerda) == PRETO)
    {
        irmao(n)->cor = VERMELHO;
        irmao(n)->direita->cor = PRETO;
        rotacionar_esquerda(t, irmao(n));
    }
    excluir_caso6(t, n);
}

void excluir_caso6(rbtree t, no n) {
    irmao(n)->cor = no_cor(n->pai);
    n->pai->cor = PRETO;
    if (n == n->pai->esquerda) {
        assert (no_cor(irmao(n)->direita) == VERMELHO);
        irmao(n)->direita->cor = PRETO;
        rotacionar_esquerda(t, n->pai);
    }
    else
    {
        assert (no_cor(irmao(n)->esquerda) == VERMELHO);
        irmao(n)->esquerda->cor = PRETO;
        rotacionar_direita(t, n->pai);
    }
}

int main () {
}


