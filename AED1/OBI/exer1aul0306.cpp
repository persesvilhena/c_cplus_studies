#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int cpf;
    char nome[50], endereco[50];
};
main(){
     struct aluno a;
     printf("cpf:");
     scanf("%d", &a.cpf);
     fflush(stdin);
     printf("nome: ");
     scanf("%50[^\n]s", a.nome);
     fflush(stdin);
     printf("endereco: ");
     scanf("%50[^\n]s", a.endereco);
     fflush(stdin);
     printf("CPF: %d\n", a.cpf);
     printf("Nome: %s\n", a.nome);
     printf("Endereco: %s\n", a.endereco);
     system("pause");
}
