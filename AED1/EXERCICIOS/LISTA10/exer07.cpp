#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int b[10] = {0}, x=0;

int fat(int n){
    int x=0, res=1;
    for(x=1;x<=n;x++){
        res = res * x;
    }
    return res;
}

void s(int num){
     int a[10];
     a[x] = num;
     b[x] = fat(num);
     x++;
}
main(){
    int num = 0, i = 0;
    for(i=0;i<10;i++){
        printf("num: ");
        scanf("%d", &num);
        s(num);
    }
    for(i=0;i<10;i++){
        printf("%d\n", b[i]);
    }
    system("pause");
}
    
