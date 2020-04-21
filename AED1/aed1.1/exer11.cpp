#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float peso, altura, imc;
       printf("peso: \n");
       scanf("%f", &peso);
       printf("altura: \n");
       scanf("%f", &altura);
       imc = peso / (pow(altura,2));


       printf("\nvalor imc %.2f", imc);
       
       if(imc < 20){
              printf("\nSITUACAO: abaixo do peso");
       }
       if(imc >= 20 && imc < 25){
              printf("\nSITUACAO: peso normal");
       }
       if(imc >= 25 && imc < 30){
              printf("\nSITUACAO: sobre peso");
       }      
       if(imc >= 30 && imc < 40){
              printf("\nSITUACAO: obeso");
       }
       if(imc > 40){
              printf("\nSITUACAO: obeso mórbido");
       }
       printf("\n\n\n");
       system("pause");
       
}      
