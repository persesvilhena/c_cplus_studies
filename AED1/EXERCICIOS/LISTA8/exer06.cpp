#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[7][7], soma=0;
    printf("MATRIZ:\n");
    for(x=0;x<7;x++){
        for(y=0;y<7;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<7;x++){
        soma = soma + m1[x][6 - x];
    }
    printf("soma: %d", soma);
    printf("\n\n");
    system("pause");
}
