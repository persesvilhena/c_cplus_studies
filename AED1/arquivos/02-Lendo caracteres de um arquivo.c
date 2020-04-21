/*
Programa que efetua leitura do arquivo criado e mostra na tela.
*/

#include<stdio.h>

main(){
    FILE *p;
    char carac,x;
    p=fopen("c:\\exemplo\\caract.dat","r");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        while(!feof(p)){
            carac=fgetc(p);
            x=fgetc(p);
            if(ferror(p))
                printf("\nErro na leitura do caractere");
            else{
                printf("\nLeitura realizada com sucesso");
                printf("\nCaracter lido %c",carac);
            }
        }
    }
    getch();
    fclose(p);
}
