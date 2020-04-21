#include <stdio.h>
#include <stdlib.h>

main(){
    int num, x, cont = 0;
    printf("digite um numero: ");
    scanf("%d", &num);
    for(x=1;x<=num;x++){
        if((num % x) == 0){
            cont++;
        }
    }
    if(cont <= 2){
        printf("e primo");
    }else{
        printf("nao e primo");
    }
    system("pause");
}
