#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[4][5], tot_mes[5] = {0}, tot_sem[4] = {0}, tot=0;
    printf("MATRIZ:\n");
    for(x=0;x<4;x++){
        for(y=0;y<5;y++){
            printf("Semana %d, Vendedor %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<4;x++){
        for(y=0;y<5;y++){
            tot_mes[y] = tot_mes[y] + m1[x][y];
            tot_sem[x] = tot_sem[x] + m1[x][y];
            tot = tot + m1[x][y];
        }
    }
    for(x=0;x<5;x++){
        printf("\nTotal do vendedor %d: %d", x, tot_mes[x]);
    }
    for(x=0;x<4;x++){
        printf("\nTotal da semana %d: %d", x, tot_sem[x]);
    }
    printf("\n\nTotal: %d\n", tot);
    printf("\n\n");
    system("pause");
}
