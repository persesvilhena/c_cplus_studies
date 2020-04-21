#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
       float area,litros,qtdlatas,calc;
       printf("area : \n");
       scanf("%f", &area);

       litros = area / 3;
       calc = litros / 18;
       qtdlatas = ceil(calc);



       printf("\nqtd latas: %.2f", qtdlatas);
       printf("\ntotal valor: %.2f", qtdlatas * 80);




       printf("\n\n");
       system("pause");
}
