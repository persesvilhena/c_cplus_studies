#include <stdio.h>
#include <stdlib.h>

float total = 0;
float par(float val, float juros, int ind){
    if(ind == 1){
        return (val * (juros / 100.0));
        total = (total + val * (juros / 100.0));
        printf("\nParcela %d: %.2f", ind, (val * (juros / 100.0)));
    }else{
        return ((juros / 100.0) * par(val, juros, ind - 1));
        total = (total + (juros / 100.0) * par(val, juros, ind - 1));
        printf("\nParcela %d: %.2f", ind, (juros / 100.0) * par(val, juros, ind - 1));
    }
}

         

main(){
    printf("\nResultado: %.2f", par(100, 10, 3));
    printf("\nTotal: %.2f", total);
    system("pause");
}
