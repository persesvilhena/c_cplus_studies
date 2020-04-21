#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[5][5], vx=0, v=0;
    printf("MATRIZ:\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("Valor de x: ");
    scanf("%d", &vx);
    printf("\n\nResultado:\n\n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            if(m1[x][y] == vx){
                printf("\nNumero encontrado: linha: %d coluna: %d\n", x, y);
                v=1;
            }
        }
    }
    if(v==0){
        printf("Numero nao encontrado");
    }
    printf("\n\n");
    system("pause");
}
