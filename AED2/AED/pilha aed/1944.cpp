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
  
int push(pilha *s, char d){
    struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));
    if(aux==NULL) return (FALSE);
    aux->dado = d;
    aux->prox = s->topo;
    s->topo = aux;
    return(TRUE);
}
  
int pop(pilha *s, char *d){
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
  
int verifica(pilha s){
	struct no *aux=s.topo;
	char s1[5], s2[5];
	int x;
	
	for(x=0; x<4; x++){
		s1[x] = aux->dado;
		aux = aux->prox;
	}
	s1[4] = '\0';
	
	for(x=3; x>=0; x--){
		s2[x] = aux->dado;
		aux = aux->prox;
	}
	s2[4] = '\0';

	
	if(strcmp(s1, s2) == 0){
		return TRUE;
	}else{
		return FALSE;
	}
	
}
main(){
	char letra1, letra2, letra3, letra4, a[4], b[4], p[8];
    int x, n, i, j, cont = 0;
    pilha p1;
    
    create(&p1);

    scanf("%d", &n);
    getchar();

    for(x=0; x<n; x++){
    	
    	
		if(isEmpty(p1)){
            push(&p1, 'F');
            push(&p1, 'A');
            push(&p1, 'C');
            push(&p1, 'E');
        }        
        
        gets(p);
 
    	push(&p1, p[0]);
		push(&p1, p[2]);
		push(&p1, p[4]);
    	push(&p1, p[6]);

    	
    	if(verifica(p1) == TRUE){
    		cont++;
    		for(i=0; i<8; i++){
    			pop(&p1, &letra1);
			}
		}
		
   }
   printf("%d\n", cont);
}
