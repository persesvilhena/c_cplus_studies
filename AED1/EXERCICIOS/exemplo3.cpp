#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 0, y = 0, c = 0;
    printf("valor x:");
    scanf("%d", &x);
    y = x;
    do{
        y = y + x;
        c++;
    }while(c != 4);
    printf("o valor de y e: %d", y);
    system("pause");
}
