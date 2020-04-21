#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float peso, excesso, multa;
       printf("Peso: ");
       scanf("%f", &peso);

       if(peso > 50){
                excesso = peso - 50;
                multa = excesso * 4;
       }
       printf("\nExcesso: %.0f", excesso);
       printf("\nMulta: %.0f", multa);
       printf("\n\n\n");
       system("pause");
       
}      
