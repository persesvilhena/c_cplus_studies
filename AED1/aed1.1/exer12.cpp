#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float saldo, altura, imc;
       printf("saldo: \n");
       scanf("%f", &saldo);

       if(saldo > 0 && saldo <= 500){
              printf("\nnenhum credito");
       }
       if(saldo > 500 && saldo <= 1000){
              printf("\nvalor do credito %.2f", saldo * 0.3);
       }
       if(saldo > 1000 && saldo <= 3000){
              printf("\nvalor do credito %.2f", saldo * 0.4);
       }      
       if(saldo > 3000){
              printf("\nvalor do credito %.2f", saldo * 0.5);
       }
       printf("\n\n\n");
       system("pause");
       
}      
