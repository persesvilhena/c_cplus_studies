#define T 2
#include <stdio.h>
#include <stdlib.h>
#define pausa system("pause;");

typedef struct btree{
        int folha;
        int keys[(2*T)-1];
        struct btree* filhos[2*T];
        int n;
}btree;

btree* btree_criar(){
       int i;
       btree* x=(btree*)malloc(sizeof(btree));
       x->folha = 1;
       x->n = 0;
       for (i=0; i<=2*T;i++)
           x->filhos[i] = NULL;
       return x;
}

void split(btree* x,int i,btree* y){
     int j;
     btree* z=btree_criar();
     z->folha = y->folha;
     z->n = T-1;
     for (j=1;j<=T-1;j++){
         z->keys[j] = y->keys[j+T];
     }
     if (y->folha == 0){
         for(j=1;j<=T;j++){
             z->filhos[j] = y->filhos[j+T];
         }
         y->n = T-1;
         for (j=x->n+1;j>=i+1;j--){
             x->filhos[j+1] = x->filhos[j];
         }
         x->filhos[i+1] = z;
         for (j=x->n;j>=i;j--){
             x->keys[j+1] = x->keys[j];
         }
     }
     x->keys[i] = x->keys[T];
     x->n = x->n+1;
}

void insercao_vazia(btree* x,int k){
     int i=x->n;
     if (x->folha == 1){
         while(i>=1 && k<x->keys[i]){
             x->keys[i+1] = x->keys[i];
             i=i-1;
         }
         x->keys[i+1] = k;
         x->n = x->n+1;
     }
     else{
          while(i>=1 && k<x->keys[i]){
             i=i-1;
          }
          i=i+1;
          if (x->filhos[i]->n == 2*T - 1){
             split(x,i,x->filhos[i]);
             if (k > x->keys[i]){
                   i=i+1;
             }
             insercao_vazia(x->filhos[i],k);
          }    
     }        
}

void insercao(btree** root,int k){
     btree* s=btree_criar();
     btree* r=*root;
     if (r->n == 2*T-1) {
          *root=s;
          s->folha = 0;
          s->n = 0;
          s->filhos[1] = r;
          split(s,1,r);
          insercao_vazia(s,k);
     }
     else{
          insercao_vazia(r,k);
     }
}

int main (int argc, char *argv[]){
    btree* b = btree_criar();
    insercao(&b, 8);
    insercao(&b, 10);
    insercao(&b, 15);
    insercao(&b, 25);
    insercao(&b, 9);
    insercao(&b, 7);
    insercao(&b, 5);
    insercao(&b, 22);
    insercao(&b, 20);
    printf("%d\n",b->keys[1]);
    pausa
}
