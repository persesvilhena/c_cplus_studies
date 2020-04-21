#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char teste[50] = "ping ", teste2[50];
    while(strcmp(teste2, "sair") != 0){
        scanf("%50[^\n]s", teste2);
        fflush(stdin);
        if(strcmp(teste2, "sair") != 0){
            strcat(teste, teste2);
            system(teste);
            strcpy(teste, "ping ");
            system("pause");
        }
    }
}
