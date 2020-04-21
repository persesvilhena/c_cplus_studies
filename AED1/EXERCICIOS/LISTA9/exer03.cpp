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
     float s_salario=0, maior=0, menor=0;
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
         s_salario = s_salario + a[x].salario;
     }
     menor = a[0].salario;
     for(x=0;x<10;x++){
         if(a[x].salario < menor){
             menor = a[x].salario;
         }
         if(a[x].salario > maior){
             maior = a[x].salario;
         }
     }
     printf("Media das salarios: %.2f", s_salario / 10.0);
     printf("\nMenor salario: %.2f\nMaior salario: %.2f\n", menor, maior);
     for(x=0;x<10;x++){
         printf("Nome: %s\n", a[x].nome);
         printf("Idade: %d\n", a[x].idade);
         printf("Salario: %.0f\n", a[x].salario);
     }
     system("pause");
}
