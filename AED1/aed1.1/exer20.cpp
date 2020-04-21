#include <stdio.h>
#include <stdlib.h>

main(){
       int pres[2], res[2], x;
       for (x=0;x<3;x++){
           printf("\nQUESTAO %d", x);
           printf(": ");
           scanf("%d", &pres[x]);
       }
       res[0] = 1;
       res[1] = 4;
       res[2] = 2;
       for (x=0;x<3;x++){
           printf("\n%d", pres[x]);
           if(res[x] == pres[x]){
                 printf("\na questao %d", x);
                 printf(" esta correta");
           }else{
                 printf("\na questao %d", x);
                 printf(" esta errada");
           }
       }

       printf("\n\n\n");
       system("pause");
       
}      
