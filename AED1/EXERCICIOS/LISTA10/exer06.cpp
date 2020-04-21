#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mm(void){
     int x=0;
     float v[5] = {0}, maior = 0, menor = 9999;
     for(x=0;x<5;x++){
         printf("valor: ");
         scanf("%f", &v[x]);
     }
     for(x=0;x<5;x++){
         if(v[x] > maior){
             maior = v[x];
         }
         if(v[x] < menor){
             menor = v[x];
         }
     }
     printf("\nMaior: %.2f\nMenor: %.2f\n", maior, menor);
}
main(){
    mm();
    system("pause");
}
    
