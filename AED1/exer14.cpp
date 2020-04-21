#include <stdio.h>
#include <stdlib.h>


main(){
       float hrtrab, exthrtrab, sal, valhrext, valhr, salbrut, salext;
       printf("horas trabalhadas : \n");
       scanf("%f", &hrtrab);
       printf("horas trabalhadas extras : \n");
       scanf("%f", &exthrtrab);
       printf("salario min : \n");
       scanf("%f", &sal);

       valhrext = 0.25 * sal;
       valhr = 0.125 * sal;
       salbrut = hrtrab * valhr;
       salext = valhrext * exthrtrab;
       printf("\nsalario final: %.2f", salext + salbrut);


       printf("\n\n");
       system("pause");
}
