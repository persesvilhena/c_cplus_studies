#include <stdio.h>
#include <stdlib.h>

void verificar_acrescimo(float s1, float s2){
     float ac=0, val=0;
     val = s2 - s1;
     ac = (val / s1) * 100;
     printf("\nResultado: %.0f%%\n", ac);
}
main(){
    float sal1 = 0, sal2 = 0;
    printf("salario 2013");
    scanf("%f", &sal1);
    printf("salario 2014");
    scanf("%f", &sal2);
    verificar_acrescimo(sal1, sal2);
    system("pause");
}
    
