//! Fa�a um algoritmo que leia um vetor din�mico (A) de 20 posi��es. Em seguida,
//!compacte o vetor, retirando os valores nulos e negativos. Coloque o resultado no vetor B.

#include <stdio.h>
#include<stdlib.h>

main(void){
    int *vetorA,*vetorB,i;
  vetorA = (int *) malloc(20 * sizeof(int));
  vetorB = (int *) malloc(20 * sizeof(int));
     for (i=0;i<5;i++){
      printf("Posicao %d.: ",i+1);
      scanf("%i",&vetorA[i]);
     }
    for(i=0;i<5;i++){
        if (vetorA[i]>0 ){
        vetorB[i]=vetorA[i];
        printf("\nVetor B: %i",vetorB[i]);
        }
    }
    free(vetorA);
    free(vetorB);
}
