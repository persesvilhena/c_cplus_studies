#include <stdio.h>
#include <stdlib.h>

main(){
    int valor[10] = {0}, maior = 0, smaior = 0, c = 0;
    do{
        printf("Digite um valor:");
        scanf("%d", &valor[c]);
        
        c++;
    }while(c != 10);
    c = 0;
    do{
        if(valor[c] > maior){
            maior = valor[c];
        }
        c++;
    }while(c != 10);
    c = 0;
    do{
        if(valor[c] > smaior && valor[c] < maior){
            smaior = valor[c];
        }
        c++;
    }while(c != 10);
    printf("\no maior e: %d", maior);
    printf("\no segundo maior e: %d", smaior);
    system("pause");
}
