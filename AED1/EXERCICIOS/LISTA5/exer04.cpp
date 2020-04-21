#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///erro
main(){
    int c = 0;
    double x=0;
	printf("Numero: ");
	scanf("%f", &x);
	//x=(x*3.1415926536)/180.0;
	x = cos(x);
    printf("\nres, %lf", x);

    system("pause");
}
