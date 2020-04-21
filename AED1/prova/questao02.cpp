#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0, vetor[10] = {0}, menor;
    for(x=0;x<10;x++){
        printf("Valor: ");
        scanf("%d", &vetor[x]);
    }
    menor = vetor[1];
    for(x=0;x<10;x++){
        if(vetor[x] < menor){
            menor = vetor[x];
        }
    }
    for(x=0;x<10;x++){
        vetor[x] = vetor[x] / menor;
    }
    for(x=0;x<10;x++){
        printf("\n%d", vetor[x]);
    }
    system("pause");
}
