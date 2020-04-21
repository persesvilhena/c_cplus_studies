#include <stdio.h>
#include <stdlib.h>

struct lojas{
    char nome[50];
    int tel;
    float preco;
};
main(){
    struct lojas c[15];
    int x=0, y=0, q=15;
    float media=0;
    for(x=0;x<q;x++){
         printf("nome da loja: ");
         scanf("%50[^\n]s", c[x].nome);
         fflush(stdin);
         printf("Telefone:");
         scanf("%d", &c[x].tel);
         fflush(stdin);
         printf("Preco:");
         scanf("%f", &c[x].preco);
         fflush(stdin);
         media = media + c[x].preco;
    }
    media = media / q;
    printf("\nMedia dos precos: %.2f\n", media);
    for(x=0;x<q;x++){
        if(c[x].preco < media){
            printf("\nNome da loja: %s", c[x].nome);
            printf("\nTelefone da loja: %d\n", c[x].tel);
        }
    }
    system("pause");
}
     
