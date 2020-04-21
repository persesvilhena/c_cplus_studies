#include <stdio.h>
#include <stdlib.h>

main(){
       float n1, n2, s;
       printf("numero1: \n");
       scanf("%f", &n1);
       printf("numero2: \n");
       scanf("%f", &n2);
       s = n1 - n2; 
       if(s > 10){
            printf("maior que 10");
       }else{
            printf("menor que 10");
       }
       printf("\n\n\n");
       system("pause");
       
}      
