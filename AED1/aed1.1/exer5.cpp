#include <stdio.h>
#include <stdlib.h>

main(){
       int n1, r1, r2;
       printf("numero: \n");
       scanf("%d", &n1);
       r1 = n1 % 3;
       r2 = n1 % 7;
       if(r1 == 0 || r2 == 0){
             if(r1 == 0){
                   printf("divisivel por 3");
             }
             if(r2 == 0){
                   printf("divisivel por 7");
             }
       }else{
            printf("nao e divisivel");
       }
       printf("\n\n\n");
       system("pause");
       
}      
