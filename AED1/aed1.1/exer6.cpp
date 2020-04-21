#include <stdio.h>
#include <stdlib.h>

main(){
       float valor;
       int tip;
       printf("tipo: \n");
       scanf("%d", &tip);
       printf("valor: \n");
       scanf("%f", &valor);
       if(tip == 1 || tip == 2){
             if(tip == 1){
                   printf("valor: %.2f", valor * 1.006);
             }
             if(tip == 2){
                   printf("valor: %.2f", valor * 1.009);
             }
       }else{
            printf("tipo errado");
       }
       printf("\n\n\n");
       system("pause");
       
}      
