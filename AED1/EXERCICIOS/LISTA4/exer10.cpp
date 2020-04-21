#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int sal = 0, fil = 0, saltot = 0, cont = 0, filtot = 0, maior = 0, m150 = 0;
    while (sal >= 0){
        printf("salario:");
        scanf("%d", &sal);
        printf("filhos:");
        scanf("%d", &fil);
        if(sal >= 0){
            cont++;
            saltot = saltot + sal;
            filtot = filtot + fil;
            if(sal > maior){
                maior = sal;
            }
            if(sal < 150){
                m150++;
            }
        }
    }
    printf("\nMedia do salario da populacao: %.2f", (float)saltot / cont);
    printf("\nMedia do numero de filhos: %.2f", (float)filtot / cont);
    printf("\nMaior salario: %d", maior);
    printf("\nPorcentagem de pessoas com salarios ate 150: %.0f%%\n", ((float)m150 / cont) * 100.0);
    system("pause");
}
