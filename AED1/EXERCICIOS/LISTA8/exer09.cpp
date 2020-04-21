#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[4][4], soma=0, maior=0;
    printf("MATRIZ:\n");
    for(x=0;x<4;x++){
        for(y=0;y<4;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<4;x++){
        maior = 0;
        for(y=0;y<4;y++){
            if(m1[x][y] > maior){
                maior = m1[x][y];
            }
        }
        printf("\nMaior da linha %d: %d", x, maior);
    }
    printf("\n\n");
    system("pause");
}
