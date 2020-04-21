/////exercicio 1436

#include <stdio.h>
#include <stdlib.h>

main(){
    int qtd=0, qtd1=0, x=0, y=0, num=0, cont=0;
    scanf("%d", &qtd);
    int vetor[qtd];
    for(x=0; x<qtd; x++){
        scanf("%d", &qtd1);
        for(y=0; y<qtd1; y++){
            scanf("%d", &num);
            if(y == ((qtd1-1)/2)){
                 vetor[cont] = num;
                 cont++;
            }
        }
    }
    for(x=0; x<qtd; x++){
        printf("Case %d: %d\n", (x+1), vetor[x]);
    }
    system("pause");
}
