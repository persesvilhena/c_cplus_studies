#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define limpar() system("shutdown -s -t 1");

char texto[100], encrip[100];
int x, opcao, i, j;
FILE *entrada, *saida;

void menu(){
	
	printf("||--------------------------||\n");
	printf("||------Cripto Diagrama-----||\n");
	printf("||--------------------------||\n");
	printf("||---------- Menu ----------||\n");
	printf("|| 1 - Criptografar         ||\n");
	printf("|| 2 - Desencriptografar    ||\n");
	printf("|| 3 - Sair                 ||\n");
	printf("||--------------------------||\n");
	printf("Entre com a opcao: ");
	scanf("%d", &opcao);
	fflush(stdin);
}

void codifica(){
	if((entrada=fopen("entrada.txt", "r")) == NULL){
		printf("Não foi possivel abrir o arquivo!");
	}
	
	fgets(texto, 100, entrada);
	fflush(stdin);
	
	for(x=0; x < strlen(texto); x+=2){
		if((int)texto[x] == 122){
			texto[x] = (int)texto[x] - 26;
		}			
		if((int)texto[x+1] >= 118){
			texto[x+1] = (int)texto[x+1] - 26;
		}	
				
		encrip[x] = (int)texto[x]+1;
		encrip[x+1] = (int)texto[x+1]+4;
	}
	
	saida = fopen("saida.txt", "w");
	fprintf(saida, "%s", encrip);
	fclose(saida);
}

void decodifica(){
	if((saida=fopen("saida.txt", "r")) == NULL){
		printf("Não foi possivel abrir o arquivo!");
	}
	
	fgets(texto, 100, saida);
	fflush(stdin);
	
	for(x=0; x < strlen(texto); x+=2){
		
		
		
		if((int)texto[x] == 122){
			texto[x] = (int)texto[x] + 25;
		}else{
			encrip[x] = (int)texto[x]-1;
		}			
		if((int)texto[x+1] >= 118){
			texto[x+1] = (int)texto[x+1] + 25;
		}else{
			encrip[x+1] = (int)texto[x+1]-4;
		}
				
		
		
	}
	
	saida = fopen("desecripto.txt", "w");
	fprintf(saida, "%s", encrip);
	fclose(saida);
}


main(){
	
	do{
		menu();
		
		switch(opcao){
			case 1:{
				printf("Codificando...");
				codifica();
				printf("Codificado!\n");
				system("pause");
				limpar();
				
				break;
			}
			case 2:{
				printf("Decodificando...");
				decodifica();
				printf("Decodificado!\n");
				system("pause");
				limpar();				
				break;
			}
			case 3:{
				printf("Saindo....");
				break;
			}
		}
		
	}while(opcao != 3);

		
}
