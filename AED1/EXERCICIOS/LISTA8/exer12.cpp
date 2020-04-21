#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0, m[20][5], maior = 0, vy = 0;
    printf("MATRIZ:\n");
    for(x=0;x<20;x++){
        for(y=0;y<5;y++){
            printf("Produto %d, Loja %d :", x, y);
            scanf("%d", &m[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<20;x++){
        maior = 0;
        vy = 0;
        for(y=0;y<5;y++){
            if(m[x][y] > maior){
                maior = m[x][y];
                vy = y;
            }
        }
        printf("\nProduto: %d, Loja do maior preco: %d", x, vy);
    }
    printf("\n\n");
    system("pause");
}
