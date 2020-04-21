#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int idade;
    char nome[50];
    float salario;
};
main(){
     struct pessoa a[10];
     int x=0;
     for(x=0;x<10;x++){
         printf("nome: ");
         scanf("%50[^\n]s", a[x].nome);
         fflush(stdin);
         printf("idade:");
         scanf("%d", &a[x].idade);
         fflush(stdin);
         printf("salario:");
         scanf("%f", &a[x].salario);
         fflush(stdin);
     }
     for(x=0;x<10;x++){
         printf("Nome: %s\n", a[x].nome);
         printf("Idade: %d\n", a[x].idade);
         printf("Salario: %.0f\n", a[x].salario);
     }
     system("pause");
}
