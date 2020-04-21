#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0, op = 0, ok = 0, lotado = 0, cpf[5], tel[5], cpf_dig = 0;
    char nome[5][50], end[5][50], nom[50];
    while(op != 3){
        printf("********MENU********");
        printf("\n1. Cadastramento das informacoes");
        printf("\n2. Pesquisar");
        printf("\n3. Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        system("cls");
        if(op == 1){
            if(lotado <= 5){
                printf("CPF: ");
                scanf("%d", &cpf[lotado]);
                fflush(stdin);
                printf("Nome: ");
                gets(nome[lotado]);
                fflush(stdin);
                printf("Endereco: ");
                gets(end[lotado]);
                fflush(stdin);
                printf("Telefone: ");
                scanf("%d", &tel[lotado]);
                fflush(stdin);
                lotado++;
                printf("Contato cadastrado!\n");
                system("pause;");
            }else{
                printf("agenda lotada!\n");
                system("pause");
            }
        }
        if(op == 2){
            printf("Cpf: ");
            scanf("%d", &cpf_dig);
            fflush(stdin);
            for(x=0; x<5; x++){
                if(cpf_dig == cpf[x]){
                    printf("CPF: %d", cpf[x]);
                    printf("\nNome: ");
                    puts(nome[x]);
                    printf("Endereco: ");
                    puts(end[x]);
                    printf("Telefone: %d\n", tel[x]);
                    system("pause");
                    ok = 1;
                }
            }
            if(ok == 0){
                printf("Contato nao encontrado");
                system("pause");
            }
                    
        }
        system("cls");
    }
}
