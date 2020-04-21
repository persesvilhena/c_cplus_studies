#include <stdio.h>
#include <stdlib.h>


main(){
       float sal,comissao,vendas;
       printf("salario: \n");
       scanf("%f", &sal);
       printf("vendas: \n");
       scanf("%f", &vendas);
       comissao = vendas*(4/100.0);
       printf("comissao: %.2f", comissao);
       printf("salario final: %.2f", comissao + sal);
       printf("\n\n");
       system("pause");
}
