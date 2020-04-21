#include <stdio.h>
#include <stdlib.h>

main(){
    int x, v[10], maior = 0, menor = 999999;
    for(x=0;x<10;x++){
        scanf("%d", &v[x]);
        if(v[x] > maior){
            maior = v[x];
        }
        if(v[x] < menor){
            menor = v[x];
        }
    }
    printf("maior: %d\nmenor: %d\n", maior, menor);
    system("pause");
}
