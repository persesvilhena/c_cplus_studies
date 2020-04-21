#include <stdio.h>
#include <stdlib.h>

main(){
    int n, i;
    float h = 0;
    printf("digite o valor de n: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++){
        h = h + (1.0 / (float)i);
    }
    printf("\nValor do H: %f\n", h);
    system("pause");
}
