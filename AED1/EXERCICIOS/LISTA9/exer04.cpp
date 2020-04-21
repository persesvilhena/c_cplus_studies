#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota1, nota2, notaf;
};
main(){
     struct aluno a[25];
     int x=0, q=3;
     for(x=0;x<q;x++){
         printf("matricula:");
         scanf("%d", &a[x].matricula);
         fflush(stdin);
         printf("nome: ");
         scanf("%50[^\n]s", a[x].nome);
         fflush(stdin);
         printf("nota 1:");
         scanf("%f", &a[x].nota1);
         fflush(stdin);
         printf("nota 2:");
         scanf("%f", &a[x].nota2);
         fflush(stdin);
         a[x].notaf = (a[x].nota1 + a[x].nota2) / 2.0;
     }
     printf("----------------------");
     for(x=0;x<q;x++){
         printf("\nMatricula: %d\nNome: %s\nNota 1: %.1f\nNota 2: %.1f", a[x].matricula, a[x].nome, a[x].nota1, a[x].nota2);
         printf("\nNota Final: %.1f", a[x].notaf);
         if(a[x].notaf > 6.0){
             printf("\nSituacao: Aprovado");
         }else{
             printf("\nSituacao: Reprovado");
         }
         printf("\n-----------------------------");
     }
     system("pause");
}
