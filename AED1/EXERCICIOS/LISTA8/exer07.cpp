#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0,y=0;
    int m1[6][5], soma=0;
    printf("MATRIZ:\n");
    for(x=0;x<6;x++){
        for(y=0;y<5;y++){
            printf("Linha %d, Coluna %d :", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(x=0;x<6;x+=2){
        soma=0;
        for(y=0;y<5;y++){
            soma = soma + m1[x][y];
        }
        printf("\nsoma da linha %d: %d", x, soma);
    }
    printf("\n\n");
    system("pause");
}
