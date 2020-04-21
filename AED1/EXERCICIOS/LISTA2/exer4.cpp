#include <stdio.h>
#include <stdlib.h>

main(){
       int n1, r;
       printf("numero1: \n");
       scanf("%d", &n1);
       r = n1 % 2;
       if(r == 0){
            printf("par");
       }else{
            printf("impar");
       }
       printf("\n\n\n");
       system("pause");
       
}      
