#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadeia[30];
    int i;
    fgets(cadeia, 30, stdin);
    for (i=0; i<strlen(cadeia); i++){
        if (cadeia[i] != ' '){
        //putchar(cadeia[i]);
        printf("%c", cadeia[i]);
        }
    }
    putchar('\n');
    system("pause");
} 
