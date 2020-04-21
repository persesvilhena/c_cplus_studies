#include <stdio.h>
#include <stdlib.h>

void fun(int *x, int *y){
    int a=0, b=0;
    a = *x;
    b = *y;
    *x = a + b;
    *y = a - b;
}

main(){
    int *x, *y, a=0,b=0;
    x = &a;
    y = &b;
    printf("X: ");
    scanf("%d", &a);
    printf("y: ");
    scanf("%d", &b);
    fun(x, y);
    printf("\nX: %d\nY: %d\n\n", *x, *y);
    system("pause");
}
