#include <stdio.h>
#include <stdlib.h>


main(){
       float n1,n2,media;
       printf("nota 1: \n");
       scanf("%f", &n1);
       printf("nota 2: \n");
       scanf("%f", &n2);
       media = (n1 + n2) / 2;
       if(media >= 6){
             printf("aprovado");
       }else{
             printf("reprovado");
       }
       printf("\n\n");
       system("pause");
}

