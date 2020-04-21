#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0;
    float valcar = 0, valpar = 0, valfinal = 0, i = 0;
    printf("Valor do carro:");
    scanf("%f", &valcar);
    system("cls");
    printf("Parcela :   Valor parcela   :   Valor final");
    for (x=6; x<=60; x+=6){
        i = x;
        valfinal = valcar * ((i/2) / 100);
        valpar = valfinal / i;
        printf("\n%d :     %d :    %.2f     : %.2f", x, valpar, valfinal);
    }
    system("pause");
}
