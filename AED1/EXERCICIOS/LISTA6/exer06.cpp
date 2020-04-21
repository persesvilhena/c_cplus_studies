#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0, temp[20] = {0}, melhortemp = 0, voltamelhor = 0, qtdac = 0;
    float mediatemp = 0;
    for(x = 0; x < 20; x++){
        printf("tempo da volta %d: ", x);
        scanf("%d", &temp[x]);
        mediatemp = mediatemp + temp[x];
    }
    mediatemp = mediatemp / 20;
    melhortemp = temp[0];
    voltamelhor = 0;
    for(x=0; x<20; x++){
        if(temp[x] < melhortemp){
            melhortemp = temp[x];
            voltamelhor = x;
        }
        if(temp[x] > mediatemp){
            qtdac++;
        }
    }
    printf("\nMelhor tempo: %d", melhortemp);
    printf("\nVolta do melhor tempo: %d", voltamelhor);
    printf("\nTempo medio das voltas: %.3f", mediatemp);
    printf("\nQuantidade de voltas que ficaram acima da media: %d\n", qtdac);
    system("pause");   


        

}
