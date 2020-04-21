#include <stdio.h>
#include <stdlib.h>


main(){
       float valor;
       printf("valor : \n");
       scanf("%f", &valor);


       printf("\ndolar: %.2f", valor * 1.8);
       printf("\nmarco alemao: %.2f", valor * 2);
       printf("\nlibra esterlina: %.2f", valor * 1.57);



       printf("\n\n");
       system("pause");
}
