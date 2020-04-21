#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 1, prod = 1, soma = 0;
    while(x > 0){
        printf("digite um numero: ");
        scanf("%d", &x);
        if(x > 0){
            if((x % 2) == 0){
                soma = soma + x;
            }else{
                prod = prod * x;
            }
        }
    }
    printf("\nSoma par: %d", soma);
    printf("\nProduto impar: %d", prod);

    system("pause");
    
}
