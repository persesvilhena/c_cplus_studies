#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int num = 0, b = 0, x = 0;
    printf("num:");
    scanf("%d", &num);
    while(x < num){
        x++;
        if((num % x) == 0){
            printf("\n%d", x);
        }
    }
    system("pause");
    
}
