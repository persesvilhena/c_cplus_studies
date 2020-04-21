#include <stdio.h>
#include <stdlib.h>

struct livro{
    int cod, area;
    char doacao, obra[50], autor[50], editora[50];
};
main(){
    struct livro l[1500];
	int op=0, cont=0, cod=0, x=0;
	while(op != 3){
		system("cls");
		printf("********MENU*********");
		printf("\n1 - Cadastrar livro\n2 - Consultar livro\n3 - Sair");
		printf("\nOpcao: ");
		scanf("%d", &op);
		switch(op){
			case 1 :
				system("cls");
				printf("Codigo: ");
				scanf("%d", &l[cont].cod);
				fflush(stdin);
				printf("Doacao: ");
				scanf(" %c", &l[cont].doacao);
				fflush(stdin);
				printf("Nome da obra: ");
				scanf("%50[^\n]s", l[cont].obra);
				fflush(stdin);
				printf("Nome do autor: ");
				scanf("%50[^\n]s", l[cont].autor);
				fflush(stdin);
				printf("Editora: ");
				scanf("%50[^\n]s", l[cont].editora);
				fflush(stdin);
				printf("Area: \n1 - exatas\n2 - humanas\n3 - biologicas\n");
				scanf("%d", &l[cont].area);
				fflush(stdin);
				cont++;
				system("pause");
			break;
			case 2 :
				system("cls");
				printf("Codigo: ");
				scanf("%d", &cod);
				fflush(stdin);
				for(x=0;x<1500;x++){
					if(cod == l[x].cod){
						printf("\nNome da obra: %s", l[x].obra);
						printf("\nNome do autor: %s", l[x].autor);
						printf("\nEditora: %s", l[x].obra);
						printf("\nDoacao: %c", l[x].doacao);
						printf("\nArea: ");
						if(l[x].area == 1){
							printf("Exatas");
						}else{
							if(l[x].area == 2){
								printf("Humanas");
							}else{
								printf("Biologicas");
							}
						}
					}
				}
				system("pause");
			break;
			case 3 :
			break;
			default :
				printf("opcao invalida");
				system("pause");
		}
	}
}
     
