/////exercicio 1548


#include <stdio.h>
#include <stdlib.h>

void ordena(int vetor[], int n){
    int aux, x, y;
    for(x=0; x<n-1; x++){
        for(y=n-1; y>x; y--){
            if(vetor[y] > vetor[y-1]){
                aux = vetor[y];
                vetor[y] = vetor[y-1];
                vetor[y-1] = aux;
            }
        }
    }
}

main(){
    int x=0, y=0, a=0, i=0, cont=0;
    scanf("%d", &y);
    int res[y];
    for(x=0;x<y;x++){
        cont = 0;
        scanf("%d", &a);
        int vetor[a], vetor1[a];
        for(i=0;i<a;i++){
            scanf("%d", &vetor[i]);
            vetor1[i] = vetor[i];
        }
        ordena(vetor1, a);
        res[x] = 0;
        for(i=0;i<a;i++){
            if(vetor1[i] == vetor[i]){
                cont++;
            }
        }
        res[x] = cont;
    }
    for(x=0;x<y;x++){
        printf("%d\n", res[x]);
    }
    system("pause");
}
