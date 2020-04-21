#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
       int op, qtd;
       printf("LANCHONETE: \n");
       printf("100 - Cachorro quente \n");
       printf("101 - Bauru simples \n");
       printf("102 - Bauru com ovo \n");
       printf("103 - Cheeseburger \n");
       printf("Opcao: ");
       scanf("%d", &op);
       switch (op){
              case 100:
                   printf("quantidade:");
                   scanf("%d", &qtd);
                   printf("\n valor a pagar: %.2f", qtd * 1.1);
              break;
              case 101:
                   printf("quantidade:");
                   scanf("%d", &qtd);
                   printf("\n valor a pagar: %.2f", qtd * 1.3);
              break;
              case 102:
                   printf("quantidade:");
                   scanf("%d", &qtd);
                   printf("\n valor a pagar: %.2f", qtd * 1.5);
              break;
              case 103:
                   printf("quantidade:");
                   scanf("%d", &qtd);
                   printf("\n valor a pagar: %.2f", qtd * 1.3);
              break;
              default:
                   printf("opcao errada");
       }
       printf("\n\n\n");
       system("pause");
       
}      
