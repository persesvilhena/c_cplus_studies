#include <stdio.h>
#include <stdlib.h>

main(){
    int num, x = 0, cont = 0;
    printf("digite um numero: ");
    scanf("%d", &num);
    do{
        x++;
        if((num % x) == 0){
            cont++;
        }
    }while(x != num);
    if(cont <= 2){
        printf("e primo");
    }else{
        printf("nao e primo");
    }
    system("pause");
}
