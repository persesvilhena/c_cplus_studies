#include <stdio.h>
#include <stdlib.h>

main(){
       float reg, ida, idav;
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
                reg = 1;
                #include <F:\aed1.1\perseslib2>
           break;
           case 2:
                reg = 2;
                #include <F:\aed1.1\perseslib2>
           break;
           case 3:
                reg = 3;
                #include <F:\aed1.1\perseslib2>
           break;
           case 4:
                reg = 4;
                #include <F:\aed1.1\perseslib2>
           break;
           default:
               printf("destino invalido.");
       }
       printf("\n\n\n");
       system("pause");
       
}      
