#include <stdlib.h>
#include <stdio.h>

main(){
    int pos[8] = {0}, neg[8] = {0}, num = 0, cp = 0, cn = 0, i = 0;
    for(i=0; i<8; i++){
        printf("valor: ");
        scanf("%d", &num);
        if(num >= 0){
            pos[cp] = num;
            cp++;
        }else{
            neg[cn] = num;
            cn++;
        }
    }
    printf("valores positivos: ");
    for(i=0; i<cp; i++){
        printf("\n%d", pos[i]);
    }
    printf("\nvalores negativos: ");
    for(i=0; i<cn; i++){
        printf("\n%d", neg[i]);
    }
    system("pause");

        

}
