#include <stdio.h>
#include <stdlib.h>

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
    int x=1, y;
    while(x != 0){
        scanf("%d", &x);
        int vetor[x], vetor2[x];
        if(x != 0){
            for(y=0;y<x;y++){
                scanf("%d", &vetor[y]);
                vetor2[y] = vetor[y];
            }
            ordena(vetor, x);
            for(y=0;y<x;y++){
                if(vetor[x-2] == vetor2[y]){
                    printf("%d\n", y+1);
                }
            }
        }
    }
    system("pause");
}
