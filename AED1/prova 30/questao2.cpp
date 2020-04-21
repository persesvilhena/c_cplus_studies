#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct veiculos{
    int placa, ano;
    char modelo[50], proprietario[50];
};
main(){
    struct veiculos v[500];
    int x, c=0, qtd_vei=0, op=0;
    while(op != 5){
        system("cls");
        printf("******MENU*****");
        printf("\n1 - Inserir");
        printf("\n2 - Verificar quantidade de veiculos");
        printf("\n3 - Relatorio");
        printf("\n4 - Exibir todos");
        printf("\n5 - Sair");
        printf("\nOpcao:");
        scanf("%d", &op);
        fflush(stdin);
        switch(op){
            case 1 :
                system("cls");
                printf("INSERIR:\n");
                
                printf("Modelo: ");
                scanf("%50[^\n]s", v[c].modelo);
                fflush(stdin);
                
                printf("Ano: ");
                scanf("%d", &v[c].ano);
                fflush(stdin);
                
                printf("Proprietario: ");
                scanf("%50[^\n]s", v[c].proprietario);
                fflush(stdin);
                
                printf("Placa: ");
                scanf("%d", &v[c].placa);
                if((v[c].placa % 10) == 0){
                    qtd_vei++;
                }
                fflush(stdin);
                
                c++;
                system("pause");
            break;
            case 2 :
                system("cls");
                /*for(x=0;x<c;x++){
                    if((v[x].placa % 10) == 0){
                        qtd_vei++;
                    }
                }*/
                printf("Quantidade de veiculos com placa final 0: %d\n", qtd_vei);
                system("pause");
            break;
            case 3 :
                system("cls");
                printf("Relatorio com os dados dos carros anterios a 2010: \n");
                for(x=0;x<c;x++){
                    if(v[x].ano < 2010){
                        printf("\nModelo: %s", v[x].modelo);
                        printf("\nAno: %d", v[x].ano);
                        printf("\nProprietario: %s", v[x].proprietario);
                        printf("\nPlaca: %d\n", v[x].placa);
                    }
                }
                system("pause");
            break;
            case 4 :
                system("cls");
                for(x=0;x<c;x++){
                    printf("\nModelo: %s", v[x].modelo);
                    printf("\nAno: %d", v[x].ano);
                    printf("\nProprietario: %s", v[x].proprietario);
                    printf("\nPlaca: %d\n", v[x].placa);
                }
                system("pause");
            break;
            case 5 :
            break;
            default:
                system("cls");
                printf("Opcao invalida");
                system("pause");
        }
    }
}

    
