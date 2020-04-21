#include <stdio.h>
#include <stdlib.h>

int v[6] = {0};
int so(int num){
    if(num == 0){
        return (v[num]);
    }else{
        return (v[num] + so(num - 1));
    }
}
int rec(int num){
    int b=num, n=0, val=0;
    if(b == 0){
        val = so(5);
        return (val);
    }else{
        printf("Numero: \n");
        scanf("%d", &v[num-1]);
        return (0 + rec(b-1));
    }
}

         

main(){
    printf("\nSoma: %d", rec(6));
    system("pause");
}
