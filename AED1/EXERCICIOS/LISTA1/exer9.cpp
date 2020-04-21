#include <stdio.h>
#include <stdlib.h>


main(){
       float valor;
       int x;
       printf("valor: \n");
       scanf("%f", &valor);
       
       for (x=0; x<11; x++){
           printf("\n %d x %.f : %.f", x, valor, valor*x);
       }
       printf("\n\n");
       system("pause");
}
