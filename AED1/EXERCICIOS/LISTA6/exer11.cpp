#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 0, i = 0, c = 0, num[8] = {0}, maior, novo[8] = {0};
    for(x=0; x<8; x++){
        printf("Numero: ");
        scanf("%d", &num[x]);
    }
    for(x=0; x<8; x++){
        if(num[x] > maior){
            maior = num[x];
        }
    }
    for(x=0; x<=maior; x++){
        for(i=0; i<=8; i++){
            if(num[i] == x){
                novo[c] = num[i];
                c++;
            }
        }
    }
    for(x=0; x<8; x++){
        printf("\nNumero: %d", novo[x]);
    }
    printf("\n\n");
    system("pause");
}
