#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float a, b, c;
       printf("a: ");
       scanf("%f", &a);
       printf("b: ");
       scanf("%f", &b);
       printf("c: ");
       scanf("%f", &c);
       if(a == b || b == c || a == c){
           if(a == b == c){
                printf("equilatero");
           }else{
                 printf("isoceles");
           }
       }else{
            printf("escaleno");
       }
       printf("\n\n\n");
       system("pause");
       
}      
