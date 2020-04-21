#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    float chico = 1.50, juca = 1.10;
    int x = 0;
    while(chico > juca){
        x++;
        chico = chico + 0.02;
        juca = juca + 0.03;
    }
    printf("\nanos: %d\n", x);
    system("pause");
    
}
