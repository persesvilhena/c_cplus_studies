#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[4][4];
    printf("MATRIZ 1\n");
    for(x=0;x<4;x++){
        for(y=0;y<4;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<4;x++){
        printf("\nLinha %d, Coluna %d : %d", x, y, m1[x][x]);
    }
    printf("\n\n");
    system("pause");
}
