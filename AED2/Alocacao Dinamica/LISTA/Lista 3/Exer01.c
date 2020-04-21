#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    int *vetor;
    int i,rest;
     vetor = (float *) malloc(20 * sizeof(float));
     for (i=0;i<20;i++){
      printf("Posicao %d.: ",i+1);
      scanf("%i",&vetor[i]);
    }
   printf("Valores Par do vetor \n");

       for (i=0;i<20;i++){
           rest=vetor[i]%2;
            if(rest == 0){
           printf("%i\n",vetor[i]);
       }
    }
   free(vetor);
   getch();
   return 0;
}
