#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int ca = 1, cont = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, br = 0, nulo = 0;
    while (ca > 0){
        printf("candidato:");
        scanf("%d", &ca);
        if(ca > 0){
            cont++;
            if(ca == 1){
                c1++;
            }
            if(ca == 2){
                c2++;
            }
            if(ca == 3){
                c3++;
            }
            if(ca == 4){
                c4++;
            }
            if(ca == 5){
                br++;
            }
        }
    }
    nulo = cont - (c1 + c2 + c3 + c4 + br);
    printf("\nCandidato 1: %d votos", c1);
    printf("\nCandidato 2: %d votos", c2);
    printf("\nCandidato 3: %d votos", c3);
    printf("\nCandidato 4: %d votos", c4);
    printf("\nTotal de votos nulos: %d votos", nulo);
    printf("\nTotal de votos brancos: %d votos", br);
    printf("\nPorcentagem de votos nulos: %.0f%%", ((float)nulo / cont) * 100.0);
    printf("\nPorcentagem de votos brancos: %.0f%%", ((float)br / cont) * 100.0);
    system("pause");
}
