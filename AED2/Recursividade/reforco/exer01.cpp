#include <stdio.h>
#include <stdlib.h>

int rec(int x, int y){
    if(x % y == 0){
        return (y);
    }else{
        return rec(x, x%y);
    }
}

main(){
    int x=20, y=15;
    printf("%d", rec(x,y));
    system("pause");
}
