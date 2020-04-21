#include <stdio.h>
#include <stdlib.h>


main(){
       float valorhr,hrtrab,sal,inss,imprenda,sind,desconto;
       printf("valor da hora : \n");
       scanf("%f", &valorhr);
       printf("total horas : \n");
       scanf("%f", &hrtrab);
       sal = valorhr * hrtrab;
       inss = sal * 0.08;
       imprenda = sal * 0.11;
       sind = sal * 0.05;
       desconto = inss + imprenda + sind;


       printf("\na: %.2f", sal);
       printf("\nb: %.2f",inss);
       printf("\nc: %.2f", sind);
       printf("\nd: %.2f", sal - desconto);
       printf("\ne: %.2f", desconto);



       printf("\n\n");
       system("pause");
}
