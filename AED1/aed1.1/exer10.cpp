#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       float v[1], maior = 0, menor;
       int x;
       printf("a: \n");
       scanf("%f", &v[0]);
       printf("b: \n");
       scanf("%f", &v[1]);
       menor = v[1];

       for (x = 0; x < 2; x++){
           if(v[x] > maior){
                   maior = v[x];
           }
           if(v[x] < menor){
                   menor = v[x];
           }
       } 
       printf("\nraiz da maior %.0f", sqrt(maior));
       printf("\npotencia do menor %.0f", pow(menor,2));
       printf("\n\n\n");
       system("pause");
       
}      
