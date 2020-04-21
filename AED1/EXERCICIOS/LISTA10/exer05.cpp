#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n){
    int x=0, res=1;
    for(x=1;x<=n;x++){
        res = res * x;
    }
    return res;
}

void soma(int n){
     float res=0, x=0;
     for(x=1;x<=n;x++){
         res = res + (1.0 / fat(x));
     }
     printf("\nResultado: %.2f\n", res);
}
main(){
    int num = 0, res = 0;
    printf("num: ");
    scanf("%d", &num);
    soma(num);
    system("pause");
}
    
