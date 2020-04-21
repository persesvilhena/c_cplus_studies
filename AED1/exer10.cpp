#include <stdio.h>
#include <stdlib.h>


main(){
       float ano,anoatual;
       printf("ano nasc: \n");
       scanf("%f", &ano);
       printf("ano atual: \n");
       scanf("%f", &anoatual);
       printf("\na: %.0f", anoatual - ano);
       printf("\nb: %.0f", (anoatual - ano) * 12);
       printf("\nc: %.2f", (anoatual - ano) * 365.25);
       printf("\nd: %.2f", ((anoatual - ano) * 365.25) / 7);
       printf("\n\n");
       system("pause");
}
