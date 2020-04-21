#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

struct no{
    int dado;
    struct no *prox;
};

typedef struct{
    struct no *topo;
}pilha;
  
void create(pilha *s){
    s->topo=NULL;
}
  
int push(pilha *s, int d){
    struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));
    if(aux==NULL) return (FALSE);
    aux->dado = d;
    aux->prox = s->topo;
    s->topo = aux;
    return(TRUE);
}
  
int pop(pilha *s, int *d){
    struct no *aux;
    if(s->topo==NULL){
        return (FALSE);
    }
    aux = s->topo;
    s->topo = (s->topo)->prox;
    *d = aux->dado;
    free(aux);
    return(TRUE);   
}
 
int isEmpty(pilha s){
    if(s.topo == NULL){
        return (1);
    }else{
        return (0);
    }
}
  
main(){
    char string[1005];
    int i, x, y, n = 1, qtd=0, cont=0;
    pilha p1;
    scanf("%d", &qtd);
    getchar();
    
    for(y=0; y<qtd; y++){
    	cont = 0;
        gets(string);

        create(&p1);
        i = strlen(string);
        for(x=0; x<i; x++){  
            if(string[x] == '<' ){
                push(&p1, n);
                n++;
            }else{
                if(string[x] == '>' ){
                    if(!isEmpty(p1)){
                        pop(&p1, &n);
                        cont++;
                    }
                }           
            }
        }
        printf("%d\n", cont);
        if(!isEmpty(p1)){
			 while(!isEmpty(p1)){
			    pop(&p1, &n);
 			}
        }
    }       
}
