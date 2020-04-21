
#include<stdio.h>
#include<string.h>

main(){
    FILE *p;
    char cadeia[30];
    p=fopen("c:\\exemplo\\cadeias.txt","r");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        while(!feof(p)){
            fgets(cadeia,30,p);
            if(ferror(p))
                printf("\nErro na leitura da cadeia");
            else{
                printf("\nLeitura realizada com sucesso");
                printf("\nCadeia lida %s",cadeia);
            }
        }
    }
    getch();
    fclose(p);
}
