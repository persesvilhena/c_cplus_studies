#include <stdio.h>
#include <stdlib.h>

void in(int des, int r){
    float ida, idav;
    if(des == 1){
           ida = 500;
           idav = 900;
    }
    if(des == 2){
           ida = 350;
           idav = 650;
    }
    if(des == 3){
           ida = 350;
           idav = 600;
    }
    if(des == 4){
           ida = 300;
           idav = 550;
    }
    if(r == 1){
         printf("valor: %.2f", idav);
    }else{
         printf("valor: %.2f", ida);
    }
}
main(){
       int des, r;
       printf("DESTINO: ");
       printf("\n1 - REGIAO NORTE ");
       printf("\n2 - REGIAO NORDESTE ");
       printf("\n3 - CENTRO-OESTE ");
       printf("\n4 - REGIAO SUL\n");
       scanf("%d", &des);
       printf("\n inclui retorno: 1 para sim, 0 para nao\n");
       scanf("%d", &r);
       switch(des){
           case 1:
                if(r == 1){
			         printf("valor: 900");
			    }else{
			         printf("valor: 500");
			    }
           break;
           case 2:
                in(des, r);
           break;
           case 3:
                in(des, r);
           break;
           case 4:
                in(des, r);
           break;
           default:
               printf("destino invalido.");
       }
       printf("\n\n\n");
       system("pause");
       
}      
