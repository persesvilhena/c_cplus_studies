#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
       float area,qtdlatas,latas,galoes,litros,l,ap_latas,ap_galoes;
       int resto, parar, r;
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
                latas = latas + 1;
                galoes = 0;
                
       }
       
      /* while(parar = 0){
                   if(litros > 18){
                             
                        
                   }
               
       }*/
       //galoes = litros / 3.6;
       //qtdlatas = ceil(calc);

       printf("\napenas latas: %.0f", ap_latas);
       printf("\napenas galoes: %.0f", ap_galoes);
       //printf("\nresto: %d", resto);
       printf("\nou %.0f", latas);
       printf(" latas e %.0f", galoes);
       printf(" galoes.");
       //printf("\ntotal valor: %.2f", qtdlatas * 80);




       printf("\n\n");
       system("pause");
}
