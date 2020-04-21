#include <stdio.h>
#include <stdlib.h>


float rec(int num){
    if(num == 1){
        return (1);
    }else{
        return ((1.0 / num) + rec(num - 1));
    }
}
main(){
    int num=0;
    printf("Numero: ");
    scanf("%d", &num);
    printf("\nRes: %.2f", rec(num));
    system("pause");
}
