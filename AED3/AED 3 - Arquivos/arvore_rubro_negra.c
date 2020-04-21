#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct noh{
    int numero_arvore;
    char cor;
    struct noh *pai;
    struct noh *esquerda;
    struct noh *direita;
};

typedef struct noh nohVP;

nohVP* criaNovoNoh();

void visitarEmOrdem(nohVP* Arvore_PV);
void mostraDadosNoh(nohVP* noh);
int menu();
int calcularAlturaPreta(nohVP *noh);
void rotacaoEsquerda(nohVP **Arvore_PV, nohVP *noh);
void rotacaoDireita(nohVP **Arvore_PV, nohVP *noh);
void inserirCorVP(nohVP **Arvore_PV, nohVP *noh);
void removerCorVP(nohVP **Arvore_PV, nohVP *noh);
void limpatela();

nohVP* inserir_Novo_Noh_PV(nohVP **Arvore_PV, nohVP *noh);
nohVP* sucessorVP(nohVP *noh);
nohVP* maximoVP(nohVP *noh);
nohVP* minimoVP(nohVP *noh);
nohVP* localizar_Noh_Arvore(nohVP* noh, int numero_arvore);
nohVP* rotacaoDireitaEsquerda(nohVP* arvore);
nohVP* rotacaoEsquerdaDireita(nohVP*arvore);
nohVP *removerVP(nohVP **Arvore_PV, nohVP *noh);
nohVP *vazio = NULL;
void limpatela(){
    system("cls");
}
int main(){
    nohVP *Arvore_PV = NULL;
    nohVP *aux;
    int valor, altura, opc;

    vazio = (nohVP*)malloc(sizeof(nohVP));
    vazio->pai = Arvore_PV;
    vazio->direita = vazio->esquerda = vazio;

    do{
        opc = menu();
        switch (opc){

                case 1:
                    inserir_Novo_Noh_PV(&Arvore_PV, criaNovoNoh());
                    break;
                case 2:
                    printf("Listagem dos nohs da Arvore \n\n");
                    if(Arvore_PV != NULL){
                        visitarEmOrdem(Arvore_PV);
                    }else{
                        printf("Sem Elementos na Arvore \n");
                    }
                    break;
                case 3:
                    if(Arvore_PV != NULL){
                        altura = calcularAlturaPreta(Arvore_PV);
                        printf("Altura preta da arvore: %d\n", altura);
                    }else{
                        printf("Sem Elementos na Arvore \n");
                    }
                    break;
                case 4:
                    if(Arvore_PV != NULL){
                        printf("Digite o numero da Arvore para Remover ?   \n");
                        scanf("%d", &valor);
                        aux = localizar_Noh_Arvore(Arvore_PV, valor);
                        if (aux->numero_arvore == valor){
                            mostraDadosNoh(aux);
                            removerVP(&Arvore_PV, aux);
                        }else{
                            printf("\nO numero %d nao encotrado!\n\n", valor);
                        }
                        if(Arvore_PV == vazio){
                            vazio = (nohVP*)malloc(sizeof(nohVP));
                            vazio->pai = Arvore_PV = NULL;
                            vazio->direita = vazio->esquerda = vazio;
                        }
                    }else{
                        printf("Sem Elementos na Arvore \n");
                    }
                    break;
                case 5:
                    if(Arvore_PV != NULL){
                        printf("Qual noh deseja alterar\n ");
                        scanf("%d", &valor);
                        aux = localizar_Noh_Arvore(Arvore_PV, valor);

                        if (aux->numero_arvore == valor){
                            mostraDadosNoh(aux);
                            inserir_Novo_Noh_PV(&(Arvore_PV),criaNovoNoh());
                            removerVP(&Arvore_PV, aux);
                        }else{
                            printf("O numero %d nao encontrada!\n\n", valor);
                        }
                    }else{
                        printf("Sem Elementos na Arvore \n");
                    }
                    break;
            }
    }while (opc != 0);
            return 0;
}

void rotacaoEsquerda(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *y;
    if(((*Arvore_PV)->pai == vazio) && (noh->direita != vazio)){
        y = noh->direita;
        noh->direita = y->esquerda;
        y->esquerda->pai = noh;
        y->pai = noh->pai;

        if(noh->pai == vazio){
            *Arvore_PV = y;
        }else{
            if(noh == noh->pai->esquerda){
                noh->pai->esquerda = y;
            }else{
                noh->pai->direita = y;
            }
       }
    }
    y->esquerda = noh;
    noh->pai = y;
    (*Arvore_PV)->pai = vazio;
}

void rotacaoDireita(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *y;

    if(((*Arvore_PV)->pai == vazio) && (noh->esquerda != vazio))
    {
        y = noh->esquerda;
        noh->esquerda = y->direita;
        y->direita->pai = noh;
        y->pai = noh->pai;

        if(noh->pai == vazio)
        {
            *Arvore_PV = y;
        }
        else if(noh == noh->pai->direita)
        {
            noh->pai->direita = y;
        }
        else
        {
            noh->pai->esquerda = y;
        }
    }
    y->direita = noh;
    noh->pai = y;
    (*Arvore_PV)->pai = vazio;
}

nohVP* inserir_Novo_Noh_PV(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *y = vazio;
    nohVP *x = *Arvore_PV;

    if((*Arvore_PV)== NULL){
        *Arvore_PV = noh;
        (*Arvore_PV)->pai = vazio;
printf("||            MENU            ||\n");        vazio->pai = *Arvore_PV;
        (*Arvore_PV)->cor = 'P';
        return;
    }

    if((*Arvore_PV)->numero_arvore == noh->numero_arvore)
    {
        printf(" Numero duplicado, Coloque outro numero !!\n\n");
        return;
    }

    while(x != vazio)
    {
        y = x;

        if(noh->numero_arvore < x->numero_arvore)
        {
            x = x->esquerda;
        }
        else
        {
            x = x->direita;
        }
    }

    noh->pai = y;

    if(noh->numero_arvore < y->numero_arvore)
    {
        y->esquerda = noh;
    }
    else if(noh->numero_arvore > y->numero_arvore)
    {
        y->direita = noh;
    }
    else if(noh->numero_arvore == y->numero_arvore)
    {
        printf("Numeros iguais, Tente outro numero !!\n\n");
    }

    noh->esquerda = vazio;
    noh->direita = vazio;
    noh->cor = 'V';

    inserirCorVP(&(*Arvore_PV), noh);
    return noh;
}

void inserirCorVP(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *y;

    while(noh->pai->cor == 'V')
    {
        if(noh->pai == noh->pai->pai->esquerda)
        {
            y = noh->pai->pai->direita;

            if(y->cor == 'V')
            {
                noh->pai->cor = 'P';
                y->cor = 'P';
                noh->pai->pai->cor = 'V';
                noh = noh->pai->pai;
            }
            else
            {
                if(noh == noh->pai->direita)
                {
                    noh = noh->pai;
                    rotacaoEsquerda(&(*Arvore_PV), noh);
                }

                noh->pai->cor = 'P';
                noh->pai->pai->cor = 'V';
                rotacaoDireita(&(*Arvore_PV), noh->pai->pai);
            }
        }
        else
        {
            y = noh->pai->pai->esquerda;

            if(y->cor == 'V')
            {
                noh->pai->cor = 'P';
                y->cor = 'P';
                noh->pai->pai->cor = 'V';
                noh = noh->pai->pai;
            }
            else
            {
                if(noh == noh->pai->esquerda)
                {
                    noh = noh->pai;
                    rotacaoDireita(&(*Arvore_PV), noh);
                }

                noh->pai->cor = 'P';
                noh->pai->pai->cor = 'V';
                rotacaoEsquerda(&(*Arvore_PV), noh->pai->pai);
            }
        }
    }

    (*Arvore_PV)->cor = 'P';
}

nohVP *removerVP(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *y, *x;

    if((noh->esquerda == vazio) || (noh->direita == vazio))
    {
        y = noh;
    }
    else
    {
        y = sucessorVP(noh);
    }

    if(y->esquerda != vazio)
    {
        x = y->esquerda;
    }
    else
    {
        x = y->direita;
    }

    x->pai = y->pai;


    if(y->pai == vazio)
    {
        *Arvore_PV = x;
    }
    else if(y == y->pai->esquerda)
    {
        y->pai->esquerda = x;
    }
    else
    {
        y->pai->direita = x;
    }

    if(y != noh)
    {
        noh->numero_arvore = y->numero_arvore;        //Aqui os dados são transferidos
    }

    if(y->cor == 'P')
    {


        if((*Arvore_PV)->direita == vazio && (*Arvore_PV)->esquerda->direita != vazio)
        {

            rotacaoEsquerda(&(*Arvore_PV), (*Arvore_PV)->esquerda);
            removerCorVP(&(*Arvore_PV), (*Arvore_PV)->esquerda);
            rotacaoDireita(&(*Arvore_PV), (*Arvore_PV));
        }
        else
        {

            if((*Arvore_PV)->esquerda == vazio && (*Arvore_PV)->direita->esquerda != vazio)
            {

                rotacaoDireita(&(*Arvore_PV), (*Arvore_PV)->direita);
                removerCorVP(&(*Arvore_PV), (*Arvore_PV)->direita);
                rotacaoEsquerda(&(*Arvore_PV), (*Arvore_PV));
            }
        }
        removerCorVP(&(*Arvore_PV), x);
    }
    return y;
    free(y);
    free(x);

}

void removerCorVP(nohVP **Arvore_PV, nohVP *noh){
    system("cls");
    nohVP *aux;

    while(((*Arvore_PV) != noh) && (noh->cor == 'P'))
    {
        if(noh == noh->pai->esquerda)
        {
            aux = noh->pai->direita;

            if(aux->cor == 'V')
            {
                aux->cor = 'P';
                noh->pai->cor = 'V';
                rotacaoEsquerda(&(*Arvore_PV), noh->pai);
                aux = noh->pai->direita;
            }

            if((aux->esquerda->cor == 'P') && (aux->direita->cor == 'P'))
            {
                aux->cor = 'V';
                noh = noh->pai;
            }
            else if(aux->direita->cor == 'P')
            {
                aux->esquerda->cor = 'P';
                aux->cor = 'V';
                rotacaoDireita(&(*Arvore_PV), aux);
                aux = noh->pai->direita;
                aux->cor = noh->pai->cor;
                noh->pai->cor = 'P';
                aux->direita->cor = 'P';
                rotacaoEsquerda(&(*Arvore_PV), noh->pai);
                noh = *Arvore_PV;
            }
        }
        else
        {
            aux = noh->pai->esquerda;

            if(aux->cor == 'V')
            {
                aux->cor = 'P';
                noh->pai->cor = 'V';
                rotacaoDireita(&(*Arvore_PV), noh->pai);
                aux = noh->pai->esquerda;
            }

            if((aux->esquerda->cor == 'P') && (aux->direita->cor == 'P'))
            {
                aux->cor = 'V';
                noh = noh->pai;
            }
            else if(aux->esquerda->cor == 'P')
            {
                aux->direita->cor = 'P';
                aux->cor = 'V';
                rotacaoEsquerda(&(*Arvore_PV), aux);
                aux = noh->pai->esquerda;
                aux->cor = noh->pai->cor;
                noh->pai->cor = 'P';
                aux->esquerda->cor = 'P';
                rotacaoDireita(&(*Arvore_PV), noh->pai);
                noh = *Arvore_PV;
            }
        }
    }
    noh->cor = 'P';
}

nohVP* sucessorVP(nohVP *noh){
    nohVP *aux;

    if(noh->direita != vazio)
    {
        return minimoVP(noh->direita);
    }

    aux = noh->pai;

    while((aux != vazio) && (noh == aux->direita))
    {
        noh = aux;
        aux = aux->pai;
    }

    return aux;
}

nohVP* maximoVP(nohVP *noh){
    while(noh->direita != vazio)
    {
        noh = noh->direita;
    }
    return noh;
}

nohVP* minimoVP(nohVP *noh){
    while(noh->esquerda != vazio)
    {
        noh = noh->esquerda;
    }
    return noh;
}

nohVP* criaNovoNoh(){
    nohVP *novo;
    novo = (nohVP*)malloc(sizeof(nohVP));
    printf("Informe um numero para a Arvore...: ");
    scanf("%d", &novo->numero_arvore);
    if(novo->numero_arvore < 0){
        printf("Numero Invalido! Tente Novamente !!!\n");
        return criaNovoNoh();
    }
    novo->cor = 'V';
    novo->pai = vazio;
    novo->direita = vazio;
    novo->esquerda = vazio;

    return novo;
}

void visitarEmOrdem(nohVP* Arvore_PV){
    if (Arvore_PV != vazio)
    {
        mostraDadosNoh(Arvore_PV);
        visitarEmOrdem(Arvore_PV->esquerda);
        visitarEmOrdem(Arvore_PV->direita);
    }
}

void mostraDadosNoh(nohVP* noh){
    printf("Valor do no.......................: %d\n", noh->numero_arvore);
    printf("Cor do no.........................: %c\n", noh->cor);
    printf("\n\n");

}

int menu(){

    int opcao;

    printf("||----------------------------||\n");
    printf("||            MENU            ||\n");
    printf("||----------------------------||\n");
    printf("|| 1.Inserir noh na arvore...:||\n");
    printf("|| 2.Mostrar arvore (RED)....:||\n");
    printf("|| 3.Calcular altura preta...:||\n");
    printf("|| 4.Remover noh da arvore...:||\n");
    printf("|| 5.Alterar noh da arvore...:||\n");
    printf("|| 6.Limpar tela ............:||\n");
    printf("|| 0.Sair do programa........:||\n");
    printf("||----------------------------||\n\t");
    printf("Opcao: ");

    scanf("%d", &opcao);
    system("cls");

    return opcao;

}

int calcularAlturaPreta(nohVP *noh){
    int alt_esquerda = 0, alt_direita = 0;
    if(!noh){
        return 0;
    }
    if (noh == vazio){
        return 1;
    }
    if (noh->cor == 'P'){
        alt_esquerda += calcularAlturaPreta(noh->esquerda);
        alt_direita +=  calcularAlturaPreta(noh->direita);
      }else{
        calcularAlturaPreta(noh->esquerda);
        calcularAlturaPreta(noh->direita);
    }

    if (alt_esquerda > alt_direita){
        return alt_esquerda + 1;
    }else{
        return alt_direita + 1;
    }
}

nohVP* localizar_Noh_Arvore(nohVP* noh, int numero_arvore){
    if ((noh == vazio) || (noh->numero_arvore == numero_arvore)){
        return noh;
    }

    if (numero_arvore < noh->numero_arvore){
        return localizar_Noh_Arvore(noh->esquerda, numero_arvore);
    }else{
        return localizar_Noh_Arvore(noh->direita, numero_arvore);
    }
}
