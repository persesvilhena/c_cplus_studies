#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char texto[100], encrip[100];
int x, chave = 3, opcao;
FILE *entrada, *saida;


void menu(){
	system("cls");
	printf("||--------------------------||\n");
	printf("||----Criptografia Cesar----||\n");
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
	if((entrada=fopen("entrada.txt", "r")) == NULL){ // Abre o arquivo com permissão de leitura
				printf("Não encontrado o arquivo!!!");
	}
		
	fgets(texto, 100, entrada);	
		
	for(x=0; x<strlen(texto); x++){
		encrip[x] = (int)texto[x]+chave;
	}
			
		strcat(encrip, "\0");
	
		printf("Criptografando...\n");
		
		
		saida = fopen("saida.txt", "w");
		fprintf(saida,"%s", encrip);
		fclose(saida);
		
		printf("Criptografado!!\n");
	
}

void decodifica(){
	
	if((entrada=fopen("saida.txt", "r")) == NULL){
		printf("Não encontrado o arquivo!!!");
	}
			
	fgets(texto, 100, entrada);	
			
	for(x=0; x<strlen(texto); x++){
		encrip[x] = (int)texto[x]-chave;
	}
	
	strcat(encrip, "\0");
	printf("Desencriptografando...\n");
		
		
	saida = fopen("desen.txt", "w");
	fprintf(saida,"%s", encrip);		
	fclose(saida);
	
	printf("Desencriptografado!!\n");
}

main(){
	do{
		menu();
	
		switch(opcao){
		case 1:{
			codifica();	
			system("pause")	;
			break;	
		}
		case 2: {
			decodifica();
			system("pause")	;		
			break;
		}
		
		case 3:{
			printf("Saindo....");
			break;
		}
		
		default:{
			printf("Opcao Invalida");
			break;
		}
	}
	
		
	}while(opcao !=3);
	
	
	

		
}
