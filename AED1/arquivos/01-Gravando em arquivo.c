/*
Programa que efetua leitura do teclado e grava em arquivo.
O arquivo já deve estar criado.
*/

#include<stdio.h>

main(){
    FILE *p;
    char carac;
    p=fopen("c:\\exemplo\\caract.dat","a");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        printf("\nDigite um caractere: ");
        scanf(" %c",&carac);
        while(carac!='f'){
            fputc(carac,p);
            putc('\n',p);
            if(ferror(p))
                printf("\nErro na gravacao do caractere");
            else
                printf("\nGravacao realizada com sucesso");

            printf("\nDigite outro caractere: ");
            scanf(" %c",&carac);
        }
    }
    getch();
    fclose(p);
}
