#include <stdio.h>
#include <stdlib.h>

int vetor[10] = {0};
void ordena(int vetor[], int n){
    int aux, x, y;
    for(x=0; x<n-1; x++){
        for(y=n-1; y>x; y--){
            if(vetor[y] < vetor[y-1]){
                aux = vetor[y];
                vetor[y] = vetor[y-1];
                vetor[y-1] = aux;
            }
        }
    }
}


main(){
    int x, menor, smenor=0, cont=0;
    for(x=0; x<10; x++){
        scanf("%d", &vetor[x]);
    }
    ordena(vetor, 10);
    menor = vetor[0];
    for(x=0; x<10; x++){
        if(menor != vetor[x]){
            smenor = vetor[x];
            break;
        }
    }
    for(x=0; x<10; x++){
        if(smenor == vetor[x]){
            cont++;
        }
    }
    if(smenor == 0){
        printf("Nao existe segundo menor");
    }else{
        printf("segundo menor: %d\n vezes: %d\n", smenor, cont);
    }
    system("pause");    
}
