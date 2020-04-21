#include <stdio.h>
#include <stdlib.h>

struct clientes{
    int cod;
    char email[50];
    float horas, total;
};
main(){
    struct clientes c[5];
    int x=0, q=3;
    for(x=0;x<q;x++){
         printf("cod: ");
         scanf("%d", &c[x].cod);
         fflush(stdin);
         printf("email: ");
         scanf("%50[^\n]s", c[x].email);
         fflush(stdin);
         printf("horas: ");
         scanf("%f", &c[x].horas);
         fflush(stdin);
         if(c[x].horas > 20){
             c[x].total = ((c[x].horas - 20) * 2.5) + 35.0;
         }else{
             c[x].total = 35.0;
         }
    }
    printf("\n----RELATORIO------\n");
    for(x=0;x<q;x++){
        printf("Cod do cliente: %d\nEmail: %s", c[x].cod, c[x].email);
        printf("\nNumero de horas: %.1f\nTotal a pagar: %.2f", c[x].horas, c[x].total);
        printf("\n-----------------\n");
    }
    system("pause");
}
     
    
