#include <stdio.h>
#include <stdlib.h>

main(){
    int matriz[5][5], x, y, maior =0, menor, linha, coluna;
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("Valor x=%d y=%d: ", x, y);
            scanf("%d", &matriz[x][y]);
            fflush(stdin);
        }
    }
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            if(matriz[x][y] > maior){
                maior = matriz[x][y];
                linha = x;
                menor = maior;
            }
        }
    }
    for(x=0;x<5;x++){
        if(matriz[linha][x] < menor){
            menor = matriz[linha][x];
            coluna = x;
        }
    }
    printf("\nMinimax: %d", menor);
    printf("\nPosicao linha = %d , coluna = %d \n\n", linha, coluna);
    system("pause");
}
