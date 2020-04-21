#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[5][5], sl[5] = {0}, sc[5] = {0};
    printf("MATRIZ\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
            sl[x] = sl[x] + m1[x][y];
        }
    }

    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            sc[x] = sc[x] + m1[y][x];
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<5;x++){
        printf("\nsoma linha %d: %d", x, sl[x]);
        printf("\nsoma coluna %d: %d", x, sc[x]);
    }
    printf("\n\n");
    system("pause");
}
