#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 0, i = 0, qtd = 0, menor = 999999;
    printf("qtd:");
    scanf("%d", &qtd);
    while(x < qtd){
        x++;
        printf("valor: ");
        scanf("%d", &i);
        if(i < menor){
            menor = i;
        }
    }
    printf("menor: %d", menor);
    system("pause");
    
}
