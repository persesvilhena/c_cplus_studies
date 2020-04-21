#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "carro.h"
#define limpar() (system("CLS"))
#define texto_menu() printf("Deseja voltar ao Menu Inicial? s/n");


struct registro_carro carro;
FILE *arq_carro;


main(){
	int opcao;
	char opc_menu;
	
	system("COLOR F5");
	
	
	if((arq_carro=fopen("CAD_CARRO.dat", "rb+")) == NULL){
		arq_carro=fopen("CAD_CARRO.dat", "wb+");
		fwrite(&carro, sizeof(struct registro_carro),1, arq_carro);	
		printf("Arquivo Criado!!");
	}
	
	menu:

    center(2, "Programa de Cadastro de Carros");
    center(3, "Menu de Opcoes");
    gotoxy(26, 5);printf("Cadastrar...............[1]\n");
    gotoxy(26, 7);printf("Consultar/Editar........[2]\n");
    gotoxy(26, 9);printf("Excluir.................[3]\n");
    gotoxy(26, 11);printf("Relatorio...............[4]\n");
    gotoxy(26, 13);printf("Finalizar e salvar......[5]\n");
    gotoxy(26, 15);printf("Entre com a opcao:");
    scanf("%d", &opcao);
    
	
	switch (opcao){
		case 1:{
			limpar();
			center(2, "Cadastrar Carro");
			gotoxy(26, 4);printf("Entre com os dados: ");
			
			gotoxy(26, 5);printf("Codigo: ");
			gotoxy(34, 5);scanf("%d", &carro.codigo);
			
			gotoxy(26, 6);printf("Marca: ");
			gotoxy(33, 6);fflush(stdin);fgets(carro.marca, 20,stdin);
			
			gotoxy(26, 7);printf("Modelo: ");
			gotoxy(34, 7);fflush(stdin);fgets(carro.modelo, 50,stdin);
			
			gotoxy(26, 8);printf("Cor: ");
			gotoxy(30, 8);fflush(stdin);fgets(carro.cor, 15,stdin);
			
			gotoxy(26, 9);printf("Combustivel: ");
			gotoxy(39, 9);fflush(stdin);fgets(carro.combustivel,20,stdin);
			
			gotoxy(26, 10);printf("Valor: ");
			gotoxy(33, 10);scanf("%.2f", &carro.valor);
			
			
			texto_menu();
			scanf("%c", &opc_menu);
			
             //fseek(arq_carro, (long)sizeof(struct registro_carro), 2);        
             fwrite(&carro , sizeof(struct registro_carro), 1, arq_carro);
            
			
			if(opc_menu == 's'){
				limpar();
				goto menu;
			}			
			
			break;
		}
	}
     
     
     
  
	
	
}
