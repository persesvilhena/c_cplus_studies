#include <stdio.h>
#include <stdlib.h>

main(){
       float valor, sal, pr;
       printf("salario bruto: \n");
       scanf("%f", &sal);
       printf("prestacao: \n");
       scanf("%f", &valor);
       pr = sal * 0.3;
       if(valor > pr){
            printf("nao pode ser concedido");
       }else{
            printf("pode ser concedido");
       }
       printf("\n\n\n");
       system("pause");
       
}      
