#include <stdio.h>
#include <stdlib.h>

main(){
       char name;
       double sal, vendas;
       scanf("%c ", &name);
       scanf("%lf", &sal);
       scanf("%lf", &vendas);
       printf("TOTAL = R$ %.2lf\n", sal + (vendas * 0.15));
       system("pause");
}
