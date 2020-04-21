#include <stdio.h>
#include <stdlib.h>

main(){
       float v[2], maior = 0, inter, menor;
       int x;
       printf("a: \n");
       scanf("%f", &v[0]);
       printf("b: \n");
       scanf("%f", &v[1]);
       printf("c: \n");
       scanf("%f", &v[2]);
       menor = v[2];

       for (x = 0; x < 3; x++){
           if(v[x] > maior){
                   maior = v[x];
           }
           if(v[x] < menor){
                   menor = v[x];
           }

       } 
       for (x = 0; x < 3; x++){
           if(v[x] < maior && v[x] > menor){
                   inter = v[x];
           }
       }
       printf("\nmaior %.0f", maior);
       printf("\ninter %.0f", inter);
       printf("\nmenor %.0f", menor);
       printf("\n\n\n");
       system("pause");
       
}      
