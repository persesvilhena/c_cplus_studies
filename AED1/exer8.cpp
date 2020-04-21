#include <stdio.h>
#include <stdlib.h>


main(){
       float sal,salmin;
       printf("salario funcionario: \n");
       scanf("%f", &sal);
       printf("salario minimo: \n");
       scanf("%f", &salmin);
       printf("res: %.2f", sal / salmin);
       printf("\n\n");
       system("pause");
}
