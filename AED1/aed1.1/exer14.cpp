#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float n1, n2, media;
       printf("Nota 1: ");
       scanf("%f", &n1);
       printf("Nota 2: ");
       scanf("%f", &n2);
       media = (n1 + n2)/2;
       if(media >=
        7){
                printf("aprovado");
       }else{
             if(media < 3){
                      printf("reprovado");
             }
             if(media >= 3){
                      printf("exame");
             }
       }
       printf("\n\n\n");
       system("pause");
       
}      
