#include <stdio.h>
#include <stdlib.h>

main(){
       int valor;
       int tip;
       printf("valor: \n");
       scanf("%d", &valor);
       printf("MENU: \n");
       printf("1 - Verificar se é par ou ímpar. \n");
       printf("2 - Verificar se é positivo, negativo ou zero. \n");
       printf("3 - Verificar se é divisível por 6. \n");
       scanf("%d", &tip);
       if(tip == 1 || tip == 2 || tip == 3){
             if(tip == 1){
                   if((valor % 2) == 0){
                             printf("par");
                   }else{
                             printf("impar");
                   }
             }
             if(tip == 2){
                   if(valor == 0){
                            printf("igual a 0");
                   }else{
                            if(valor > 0){
                                     printf("positivo");
                            }else{
                                     printf("negativo");
                            }
                   }
             }
             if(tip == 3){
                    if((valor % 6) == 0){
                             printf("divisivel por 6");
                   }else{
                             printf("nao divisivel por 6");
                   }
             }
       }else{
            printf("tipo errado");
       }
       printf("\n\n\n");
       system("pause");
       
}      
