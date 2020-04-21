#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n){
     int res=0, x=0;
     for(x=2;x<n;x++){
         res = res + x;
     }
     return res;
}
main(){
    int num = 0, res = 0;
    printf("num: ");
    scanf("%d", &num);
    res = soma(num);
    printf("\nResultado: %.d\n", res);
    system("pause");
}
    
