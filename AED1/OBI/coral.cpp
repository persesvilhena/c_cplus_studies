#include <stdio.h>
#include <stdlib.h>

main(){
    int seq = 0, c=0, c1=0, c2=0;
    scanf("%d", &seq);
    c = seq % 10;
    c1 = seq % 1000;
    c2 = seq - c1;
    if((c2 / c) == 1000){
        printf("\nF\n");
    }else{
        printf("\nV\n");
    }
    system("pause");
}
