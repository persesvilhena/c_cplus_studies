#include <stdio.h>
#include <stdlib.h>

int fatorial(int a){
    if (a==1){
        return(1);
    }else{
        return (a * fatorial(a-1));
    }
}
float rec(int num){
    
    if(num == 0){
        return (1);
    }else{
        return ((1.0 / fatorial(num)) + rec(num - 1));
    }
}
main(){
    int num=0;
    printf("Numero: ");
    scanf("%d", &num);
    printf("\nRes: %.2f", rec(num));
    system("pause");
}
