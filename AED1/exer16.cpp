#include <stdio.h>
#include <stdlib.h>


main(){
       float hora,min;
       printf("hora : \n");
       scanf("%f", &hora);
       printf("minutos : \n");
       scanf("%f", &min);


       printf("\na: %.0f", hora * 60);
       printf("\nb: %.0f",(hora * 60) + min);
       printf("\nc: %.0f", ((hora * 60) + min) * 60);



       printf("\n\n");
       system("pause");
}
