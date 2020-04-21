#include <stdio.h>
#include <stdlib.h>

struct alunos{
    int num;
    char nome[50];
    float media;
};
main(){
    struct alunos c[10];
    int x=0, y=0, q=5, s=0;
    float media=0;
    for(x=0;x<q;x++){
         printf("Numero da matricula: ");
         scanf("%d", &c[x].num);
         fflush(stdin);
         printf("Nome do aluno: ");
         scanf("%50[^\n]s", c[x].nome);
         fflush(stdin);
         printf("Media Final:");
         scanf("%f", &c[x].media);
         fflush(stdin);
         media = media + c[x].media;
         if(c[x].nome[0] == 'L'){
             s++;
         }
    }
    media = media / q;
    printf("\nMedia dos das notas: %.2f", media);
    printf("\nPorcentagem de alunos cujos nomes comecem pela letra L: %.0f%%\n\nAlunos com media maior que 7:\n\n", ((float)s / q) * 100.0);
    for(x=0;x<q;x++){
        if(c[x].media > 7){
            printf("\nNome do aluno: %s", c[x].nome);
            printf("\nNumero da matricula: %d", c[x].num);
            printf("\nMedia do aluno: %.1f\n", c[x].media);
        }
    }
    system("pause");
}
     
