#include <stdio.h>
#include <stdlib.h>
int *vetor;
main(){
    vetor = (int *)malloc(20*sizeof(int));
    int x, cont=0;
    for (x=0;x<20;x++){
        printf("Numero: ");
        scanf("%d", &vetor[x]);
    }
    for (x=0;x<20;x++){
        if((vetor[x] % 2) == 0){
            cont++;
        }
    }
    printf("Quantidade de valores par: %d", cont);
    free(vetor);
    system("pause");
}
