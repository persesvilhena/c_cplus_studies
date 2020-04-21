#include <stdio.h>
#include <stdlib.h>


main(){
       float dmaior,dmenor;
       printf("diagonal maior: \n");
       scanf("%f", &dmaior);
       printf("diagonal menor: \n");
       scanf("%f", &dmenor);
       printf("res: %.2f", (dmaior * dmenor) / 2);
       printf("\n\n");
       system("pause");
}
