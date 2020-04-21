#include <stdlib.h>
#include <stdio.h>

main(){
    int x[20] = {0}, y[999] = {0}, i = 0, cp = 0, res = 0;
    for(i=0; i<20; i++){
        printf("valor de x: ");
        scanf("%d", &x[i]);    
    }
    system("cls");
    for(i=0; i<20; i++){
        printf("\nvalor de x: %d", x[i]);
        if((x[i] % 2) == 0){
            cp++;
        }
    }
    printf("\npares: %d\n", cp);
    system("pause");
}
