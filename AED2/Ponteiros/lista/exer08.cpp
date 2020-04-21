#include <stdio.h>
#include <stdlib.h>

void fun(int *x, int *y, int *z){
    int a=0, b=0, c=0, i=0, j=0;
    a = *x;
    b = *y;
    c = *z;
    if(a >= b >= c){
         *z = a;
         *y = b;
         *x = c;
    }
    if(a >= c >= b){
         *z = a;
         *y = c;
         *x = b;
    }
    if(b >= a >= c){
         *z = b;
         *y = a;
         *x = c;
    }
    if(b >= c >= a){
         *z = b;
         *y = c;
         *x = a;
    }
    if(c >= b >= a){
         *z = c;
         *y = b;
         *x = a;
    }
    if(c >= a >= b){
         *z = c;
         *y = a;
         *x = b;
    }
}

main(){
    int *x, *y, *z, a=0,b=0,c=0;
    x = &a;
    y = &b;
    z = &c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    fun(x, y);
    printf("\na: %d\nb: %d\nc: %d\n\n", *x, *y, *z);
    system("pause");
}
