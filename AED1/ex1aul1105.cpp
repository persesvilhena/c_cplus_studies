#include <stdio.h>
#include <stdlib.h>

main(){
    char nome[20] = "Perses";
    printf("%c\n", nome[0]);
    printf("%c\n", nome[5]);
    nome[0] = 's';
    nome[5] = 'P';
    printf("%s", nome);
    system("pause");
}
