#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 0, y = 0;
    do{
		y=0;
        do{
            printf("%d x %d: %d\n", x, y, x*y);
            y++;
        }while(y <= 10);
        x++;
    }while(x <= 10);

    system("pause");
}
