#include <stdio.h>
#include <stdlib.h>

main(){
    int x, soma = 0;
    for(x=1;x<101;x++){
        printf("%d\n", x);
        if(x<= 50){
            soma = soma + x;
        }
    }
    printf("\nSoma da metade dos numeros: %d\n", soma);
    system("pause");
}
