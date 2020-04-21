#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 0, i = 0;
    while(x < 10){
        x++;
        i = pow(x, 3);
        printf("%d :    %d\n", x, i * 2);
    }
    system("pause");
    
}
