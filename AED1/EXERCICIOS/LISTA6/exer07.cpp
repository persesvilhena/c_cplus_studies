#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0, vetor_a[20], vetor_b[20], cont = 0;
    for(x=0; x<20; x++){
        printf("valor: ");
        scanf("%d", &vetor_a[x]);
    }
    for(x=0; x<20; x++){
        if(vetor_a[x] >= 0){
            vetor_b[cont] = vetor_a[x];
            cont++;
        }
    }
    for(x=0; x<cont; x++){
        printf("\nvalor %d: %d", x, vetor_b[x]);
    }
    system("pause");
}
