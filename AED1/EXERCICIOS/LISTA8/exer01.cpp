#include <stdio.h>
#include <stdlib.h>

main(){
    int l=0,c=0,x=0,y=0;
    printf("Qtd de linhas: ");
    scanf("%d", &l);
    printf("Qtd de colunas: ");
    scanf("%d", &c);
    int m1[l][c], m2[l][c], m3[l][c];
    printf("MATRIZ 1\n");
    for(x=0;x<l;x++){
        for(y=0;y<c;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\nMATRIZ 2\n");
    for(x=0;x<l;x++){
        for(y=0;y<c;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m2[x][y]);
        }
    }
    for(x=0;x<l;x++){
        for(y=0;y<c;y++){
            m3[x][y] = m1[x][y] + m2[x][y];
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<l;x++){
        for(y=0;y<c;y++){
            printf("\nLinha %d, Coluna %d : %d", x, y, m3[x][y]);
        }
    }
    printf("\n\n");
    system("pause");
}
