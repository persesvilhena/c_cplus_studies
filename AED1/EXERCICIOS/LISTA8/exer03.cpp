#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[4][4], m2[4][4];
    printf("MATRIZ 1\n");
    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            m2[x][y] = m1[x][y] * 3;
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            printf("\nLinha %d, Coluna %d : %d", x, y, m2[x][y]);
        }
    }
    printf("\n\n");
    system("pause");
}
