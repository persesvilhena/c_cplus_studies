#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0, i=0, a1=1, a2=0;
    for(x=0;x<100;x++){
        i = a1 + a2;
        printf("\n%d", i);
        a2 = a1;
        a1 = i;
    }
    system("pause");
}
