/*
Grava cadeia de caracteres em um arquivo e finaliza com a palavra fim
*/

#include<stdio.h>
#include<string.h>

main(){
    FILE *p;
    char cadeia[30];
    p=fopen("c:\\exemplo\\cadeias.txt","a");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        printf("\nDigite uma cadeia de caracteres: ");
        gets(cadeia);
        while(strcmp(cadeia,"fim")!=0){
            fputs(cadeia,p);
            if(ferror(p))
                printf("\nErro na gravacao da cadeia");
            else
                printf("\nGravacaoo realizada com sucesso");

            printf("\nDigite outra cadeia: ");
            gets(cadeia);
        }
    }
    getch();
    fclose(p);
}
