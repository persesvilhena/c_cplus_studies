#include <stdio.h>
#include <stdlib.h>

main(){
    int vi, vs, cont = 0, x;
    printf("digite o valor inferior: ");
    scanf("%d", &vi);
    printf("digite o valor superior: ");
    scanf("%d", &vs);
    vi = vi + 1;
    for(x=vi; x < vs; x++){
        if((x % 2) == 0){
            printf("%d\n", x);
            cont = cont + x;
        }

    }
    printf("\nSoma: %d\n", cont);
    system("pause");
}
