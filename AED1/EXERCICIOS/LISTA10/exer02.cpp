#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void volume(float r){
     float res=0;
     res = (4.0 / 3.0) * pow(r,3);
     printf("\nResultado: %.2f\n", res);
}
main(){
    float raio = 0;
    printf("raio: ");
    scanf("%f", &raio);
    volume(raio);
    system("pause");
}
    
