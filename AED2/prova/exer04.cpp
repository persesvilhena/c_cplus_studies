#include <stdio.h>
#include <stdlib.h>

main(){
    double *vetor;
    vetor = (double *)malloc(50 * sizeof(double));
    int x, cont=0;
    double maior=0;
    for(x=0;x<50;x++){
        scanf("%lf", &vetor[x]);
    }
    for(x=0;x<50;x++){
        if(vetor[x] > maior){
            maior = vetor[x];
        }
    }
    for(x=0;x<50;x++){
        if(vetor[x] == maior){
            cont++;
        }
    }
    printf("O maior valor e %lf e aparece %d vezes\n", maior, cont);
    system("pause");
    free(vetor);
}
