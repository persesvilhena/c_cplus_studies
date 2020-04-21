#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(int n){
     float res=0, x=0;
     for(x=1;x<=n;x++){
         res = res + ((pow(x,2) + 1) / (x + 3));
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
    
