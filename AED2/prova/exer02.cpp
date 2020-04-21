#include <stdio.h>
#include <stdlib.h>

int rec(int x){
    if(x == 1){
        return (1);
    }else{
        return (x + rec(x - 1));
    }
}

main(){
    int x;
    scanf("%d", &x);
    printf("\n%d\n", rec(x));
    system("pause");
}
