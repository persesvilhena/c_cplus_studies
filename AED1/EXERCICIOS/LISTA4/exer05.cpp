#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 1, cont = 0;
    while(x != 0){
        if(x > 100 && x < 200){
             cont++;
        }
        printf("digite um numero: ");
        scanf("%d", &x);
    }
    printf("res: %d", cont);
    system("pause");
    
}
