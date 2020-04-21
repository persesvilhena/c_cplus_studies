#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int idade;
    char nome[50];
    float salario;
};
main(){
     struct pessoa a[10];
     int x=0, s_idade=0, maior=0, menor=0;
     for(x=0;x<10;x++){
         printf("nome: ");
         scanf("%50[^\n]s", a[x].nome);
         fflush(stdin);
         printf("idade:");
         scanf("%d", &a[x].idade);
         fflush(stdin);
         s_idade = s_idade + a[x].idade;
         printf("salario:");
         scanf("%f", &a[x].salario);
         fflush(stdin);
     }
     menor = a[0].idade;
     for(x=0;x<10;x++){
         if(a[x].idade < menor){
             menor = a[x].idade;
         }
         if(a[x].idade > maior){
             maior = a[x].idade;
         }
     }
     printf("Media das idades: %d", s_idade / 10);
     printf("\nMenor idade: %d\nMaior idade: %d\n", menor, maior);
     for(x=0;x<10;x++){
         printf("Nome: %s\n", a[x].nome);
         printf("Idade: %d\n", a[x].idade);
         printf("Salario: %.0f\n", a[x].salario);
     }
     system("pause");
}
