#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       double raio, area;
       scanf("%lf", &raio);
       area = (raio * raio) * 3.14159;
       printf("A=%.4lf\n", area);
       system("pause");
}
