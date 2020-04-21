#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    char acao;
    int cac = 0, vac = 0, l200 = 0, l1000 = 0, lucro = 0, lucrotot = 0;
    while (acao != 'F'){
        printf("acao:");
        scanf("%c", &acao);
        fflush(stdin);
        printf("preco de compra:");
        scanf("%d", &cac);
        fflush(stdin);
        printf("preco de venda:");
        scanf("%d", &vac);
        fflush(stdin);
        if(acao != 'F'){
            lucro = vac - cac;
            lucrotot = lucrotot + lucro;
            if(lucro > 1000){
                l1000++;
            }else{
                if(lucro < 200){
                    l200++;
                }
            }
            printf("lucro da acao: %d\n", lucro);
        }
    }
    printf("\nAcoes com lucro superior a R$1000: %d", l1000);
    printf("\nAcoes com lucro inferior a R$200: %d", l200);
    printf("\nLucro total da empresa: %d", lucrotot);
    system("pause");
}
