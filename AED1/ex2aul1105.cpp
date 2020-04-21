#include <stdio.h>
#include <stdlib.h>

main(){
    char pnome[15], snome[15], unome[15];
    printf("Nome: ");
    scanf("%15[^\n]s", pnome);
    fflush(stdin);
    scanf("%15[^\n]s", snome);
    fflush(stdin);
    scanf("%15[^\n]s", unome);
    fflush(stdin);
    printf("Nome: %s %s %s", pnome, snome, unome);
    system("pause");
}
