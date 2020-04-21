#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int a = 0, b = 0, x = 0;
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    while(a > b){
        x++;
        a = a - b;
    }
    printf("res: %d", x);
    system("pause");
    
}
