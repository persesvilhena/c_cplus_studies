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
    char *string;
    int i, x, n = 1;
    pilha p1;
    string = (char *)malloc(1005*sizeof(char));  
    while(gets(string) != NULL ){
        fflush(stdin);
        create(&p1);
        i = strlen(string);
        for(x=0; x<i; x++){  
            if(string[x]== '(' ){
                push(&p1, n);
                n++;
            }else{
                if(string[x] == ')' ){
                    if(!isEmpty(p1)){
                        pop(&p1, &n);
                    }else{
                        push(&p1, n);
                        goto sai;
                    }
                }           
            }
        }
        sai:
	        if(isEmpty(p1)){
	            printf("correct\n");
	        }else{
	            printf("incorrect\n");
	        }   
	        if(!isEmpty(p1)){
	            while(!isEmpty(p1)){
	                pop(&p1, &n);
	            }
	        } 
    }       
}
