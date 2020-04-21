#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 0;
    float s = 1, v3 = 3;
    do{
        x++;
        s = s + (1 / pow(v3,3));
        v3 = v3 + 2;
    }while(x != 51);
    s = s + 32;
    printf("res, %lf", pow(s,(1.0/3.0)));

    system("pause");
}
