#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0, y=0, m[4][4] = {0};
    for(x=0;x<4,x++){
        for(y=0; y<4; y++){
            printf("linha %d, col %d: ", x, y);
            scanf("%d", m[x][y]);
        }
    }
