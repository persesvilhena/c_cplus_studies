#include <stdio.h>
#include <stdlib.h>


main(){
       float idad;
       printf("idade: \n");
       scanf("%f", &idad);
       printf("res: %.0f", idad * 365.25 * 86400);
       printf("\n\n");
       system("pause");
}
