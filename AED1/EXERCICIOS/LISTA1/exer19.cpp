#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
       float area,latas,galoes,litros,ap_latas,ap_galoes;
       int resto, r;
       printf("area : \n");
       scanf("%f", &area);

       litros = area / 6;
       ap_latas = ceil(litros / 18);
       ap_galoes = ceil(litros / 3.6);
       latas = floor(litros / 18);
       r = ceil(litros);
       resto = r % 18;
       galoes = ceil(resto / 3.6);
       if(resto > 12){
                latas++;
                galoes = 0;
                
       }
       

       printf("\napenas latas: %.0f", ap_latas);
       printf("\napenas galoes: %.0f", ap_galoes);
       //printf("\nresto: %d", resto);
       printf("\nou %.0f", latas);
       printf(" latas e %.0f", galoes);
       printf(" galoes.");




       printf("\n\n");
       system("pause");
}
