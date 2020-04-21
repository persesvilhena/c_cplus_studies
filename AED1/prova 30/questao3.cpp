#include <stdio.h>
#include <stdlib.h>

int vetor[7], vetor_aux[7];

void fun(int n){
    int x, cont=0;
    for(x=0;x<7;x++){
        if(vetor[x] != n){
            vetor_aux[cont] = vetor[x];
            cont++;
        }
    }
    vetor_aux[cont] = '\0';
    for(x=0;x<7;x++){
        vetor[x] = vetor_aux[x];
    }
}
main(){
    int x, num;
    for(x=0;x<7;x++){
        printf("valor: ");
        scanf("%d", &vetor[x]);
        fflush(stdin);
    }
    printf("Valor a ser retirado do vetor: ");
    scanf("%d", &num);
    fun(num);
    x=0;
    while(vetor[x] != '\0'){
        printf("%d\n", vetor[x]);
        x++;
    }
    system("pause");
}
