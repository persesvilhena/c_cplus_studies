#include <stdio.h>
#include <stdlib.h>

int main(void){
       int pres[3] = {0}, res[3] = {0}, x, cont = 0;
       for (x=0;x<3;x++){
           printf("\nQUESTAO %d", x);
           printf(": ");
           scanf("%d", &pres[x]);
       }
       res[0] = 1;
       res[1] = 4;
       res[2] = 2;
       for (x=0;x<3;x++){
           if(res[x] == pres[x]){
                 cont++;
           }
       }
       printf("Quantidade de repostas : %d", cont);
       
       printf("\n\n\n");
       system("pause");
       
}      
