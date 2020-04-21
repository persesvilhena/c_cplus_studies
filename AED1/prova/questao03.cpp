#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char palavra[50], novapalavra[200];
    int x=0, rep=0, y=0;
    printf("Palavra: ");
    scanf("%50[^\n]s", palavra);
    fflush(stdin);
    printf("Repeticoes: ");
    scanf("%d", &rep);
    fflush(stdin);
    novapalavra[0] = '\0';
    while(palavra[x] != '\0'){
        x++;
    }
    for(y=0;y<rep;y++){
        strcat(novapalavra, palavra);
    }
    printf("\nQuantidade de letras: %d", x);
    printf("\nNova palavra: %s\n", novapalavra);
    system("pause");
}
