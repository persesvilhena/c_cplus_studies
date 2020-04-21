#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
       float raio;
       printf("raio: \n");
       scanf("%f", &raio);
       
       printf("\na: %.2f", raio * 3.14);
       printf("\nb: %.2f", pow(raio,2) * 3.14);
       printf("\nc: %.2f", (4 * 3.14 * pow(raio,3)) / 3);

       printf("\n\n");
       system("pause");
}
