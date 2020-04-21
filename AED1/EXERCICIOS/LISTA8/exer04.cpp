#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    float m1[5][5], val;
    printf("MATRIZ 1\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%f", &m1[x][y]);
        }
    }
    for(x=0;x<5;x++){
        val = m1[x][x];
        for(y=0;y<5;y++){
            m1[x][y] = m1[x][y] * val;
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("\nLinha %d, Coluna %d : %.2f", x, y, m1[x][y]);
        }
    }
    printf("\n\n");
    system("pause");
}
