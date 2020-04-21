#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[5][5], soma=0;
    printf("MATRIZ:\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<5;x++){
        for(y=(x+1);y<5;y++){
            soma = soma + m1[x][y];
        }
    }
    printf("soma: %d", soma);
    printf("\n\n");
    system("pause");
}
