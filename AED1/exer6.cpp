#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
       float a,b,c,delta;
       printf("a: \n");
       scanf("%f", &a);
       printf("b: \n");
       scanf("%f", &b);
       printf("b: \n");
       scanf("%f", &c);
       delta = pow(b,2) - 4 * a * c;
       printf("res: %.2f", delta);
       printf("\n\n");
       system("pause");
}
