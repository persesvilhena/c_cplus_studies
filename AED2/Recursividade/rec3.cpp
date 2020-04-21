#include <stdio.h>
#include <stdlib.h>

int fatorial(int a){
    if (a==1){
        return(1);
    }else{
        return (a * fatorial(a-1));
    }
}
main(){
    int x=0;
    x = fatorial(5);
    printf("%d", x);
    system("pause");
}
