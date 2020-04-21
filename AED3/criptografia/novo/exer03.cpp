#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pausa system("pause;");
#define limpa system("cls;");

FILE *fl, *fl1;
main(){
	char texto[100], cript[100];
	int x=0, op=0;
	do{
		limpa
		printf("**************MENU**************\n");
		printf("* 1 - criptografar *************\n");
		printf("* 2 - descriptografar **********\n");
		printf("* 3 - sair *********************\n");
		printf("********************************\n");
		printf("Opcao: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				limpa
				if((fl=fopen("entrada.txt", "r")) == NULL){
					fl=fopen("entrada.txt", "w");
				}
				fgets(texto, 100, fl);
				fflush(stdin);
				for(x=0; x < strlen(texto); x+=2){
					if(texto[x] == 122){
						texto[x] = (int)texto[x] - 26;
					}
					if(texto[x+1] >= 118){
						texto[x+1] = (int)texto[x+1] - 26;
					}
					cript[x] = (int)texto[x] + 1;
					cript[x+1] = (int)texto[x+1] + 4;
				}
				cript[x] = '\0';
				printf("texto cript: %s", cript);
				fl1=fopen("saida.txt", "w");
				fprintf(fl1, "%s", cript);
				fclose(fl1);
				pausa
			break;
			case 2:
				limpa
				if((fl=fopen("entrada.txt", "r")) == NULL){
					fl=fopen("entrada.txt", "w");
				}
				fgets(texto, 100, fl);
				fflush(stdin);
				for(x=0; x < strlen(texto); x+=2){
					if(texto[x] == 97){
						texto[x] = (int)texto[x] + 26;
					}
					if(texto[x+1] <= 100){
						texto[x+1] = (int)texto[x+1] + 26;
					}
					cript[x] = (int)texto[x] - 1;
					cript[x+1] = (int)texto[x+1] - 4;
				}
				cript[x] = '\0';
				printf("texto desccript: %s", cript);
				fl1=fopen("saida.txt", "w");
				fprintf(fl1, "%s", cript);
				fclose(fl1);
				pausa
			break;
			case 3:
			break;
			default:
				printf("opcao invalida");
		}
	}while(op != 3);
}
