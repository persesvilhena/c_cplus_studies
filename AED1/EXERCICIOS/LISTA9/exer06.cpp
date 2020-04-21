#include <stdio.h>
#include <stdlib.h>

struct pessoas{
    char nome[50];
    int dia, mes;
};
main(){
    struct pessoas c[40];
    int x=0, y=0, q=40;
    for(x=0;x<q;x++){
         printf("nome: ");
         scanf("%50[^\n]s", c[x].nome);
         fflush(stdin);
         printf("Dia do aniversario:");
         scanf("%d", &c[x].dia);
         fflush(stdin);
         printf("Mes do aniversario:");
         scanf("%d", &c[x].mes);
         fflush(stdin);
    }
    printf("\n----RELATORIO------\n");
    for(x=1;x<=12;x++){
        printf("\n\nMes %d\n", x);
        for(y=0;y<q;y++){
            if(c[y].mes == x){
                printf("\nNome: %s\nDia do aniversario: %d\n", c[y].nome, c[y].dia);
            }     
        }
    }
    system("pause");
}
     
