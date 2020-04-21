#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define limpa system("cls;");
#define pausa system("pause;");

main(){
	int op=0, key=13, x=0;
	char cript[50], frase[50];
	FILE *fl, *fl1;
	
	do{
		limpa
		printf("*************MENU***************");
		printf("\n1 - criptografar\n2 - descriptografar\n3 - sair");
		printf("\n******************************");
		printf("\nop: ");
		scanf("%d", &op);
		fflush(stdin);
		switch(op){
			case 1:
				limpa
				if((fl=fopen("entrada.txt", "r")) == NULL){
					fl=fopen("entrada.txt", "w");
				}
				fgets(frase, 100, fl);
				fflush(stdin);
				for(x=0; x < strlen(frase); x++){
					cript[x] = (int)frase[x]+key;
				}
				cript[x] = '\0';
				fl1 = fopen("saida.txt", "w");
				fprintf(fl1, "%s", cript);
				fclose(fl1);
				pausa
			break;
			case 2:
				limpa
				if((fl=fopen("entrada.txt", "r")) == NULL){
					fl=fopen("entrada.txt", "w");
				}
				fgets(frase, 100, fl);
				fflush(stdin);
				for(x=0; x < strlen(frase); x++){
					cript[x] = (int)frase[x]-key;
				}
				cript[x] = '\0';
				fl1 = fopen("saida.txt", "w");
				fprintf(fl1, "%s", cript);
				fclose(fl1);
				pausa
			break;
			case 3:
			break;
			default:
				printf("opcao invalida");
				pausa
		}
	}while(op != 3);
}
