#include <stdio.h>
#include <stdlib.h>

main(){
       int num, hrtrab;
       double valhr;
       scanf("%d", &num);
       scanf("%d", &hrtrab);
       scanf("%lf", &valhr);
       printf("NUMBER = %d\n", num);
       printf("SALARY = U$ %.2lf\n", hrtrab * valhr);
       system("pause");
}
