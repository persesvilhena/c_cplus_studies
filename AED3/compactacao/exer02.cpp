#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define limpa system("cls;");
#define pausa system("pause;");

main(){
	FILE *fl, *fl1;
	char texto[100], aux[800], novo[100];
	int x=0, y=0, z=0, w=0, val=0, op=0;
	do{
		limpa
		printf("****************************");
		printf("\n1 - compactar\n2 - descompactar\n3 - sair");
		printf("\n***************************");
		printf("\nOpcao: ");
		scanf("%d", &op);
		fflush(stdin);
		switch(op){
			case 1:
				limpa
				if((fl=fopen("entrada.txt", "r")) == NULL){
					fl=fopen("entrada.txt", "w");
				}
				fgets(texto, 100, fl);
				fflush(stdin);
				strcpy(aux, "");
				strcpy(novo, "");
				for(x=0; x<strlen(texto); x++){
					if(texto[x] == 'a'){
						strcat(aux, "000");
					}
					if(texto[x] == 'b'){
						strcat(aux, "001");
					}
					if(texto[x] == 'c'){
						strcat(aux, "010");
					}
					if(texto[x] == 'd'){
						strcat(aux, "011");
					}
					if(texto[x] == 'e'){
						strcat(aux, "100");
					}
					if(texto[x] == 'f'){
						strcat(aux, "101");
					}
					if(texto[x] == 'g'){
						strcat(aux, "110");
					}
					if(texto[x] == 'h'){
						strcat(aux, "111");
					}
				}
				for(x=0; x<strlen(aux); x+=8){
					val = 0;
					for(y=128; y>=1; y/=2){
						if(aux[z] == '1'){
							val = val + y;
						}
						z++;
					}
					novo[w] = (int)val;
					w++;
				}
				novo[w] = '\0';
				fl1=fopen("saida.txt", "w");
				fprintf(fl1, "%s", novo);
				fclose(fl1);
				pausa
			break;
			case 2:
				limpa
				if((fl=fopen("saida.txt", "r")) == NULL){
					fl=fopen("saida.txt", "w");
				}
				fgets(texto, 100, fl);
				fflush(stdin);
				strcpy(aux, "");
				strcpy(novo, "");
				for(x=0; x<strlen(texto); x++){
					val = (int)texto[x];
					if(val < 0){
						val = val + 256;
					}
					for(y=128; y>=1; y/=2){
						if(val >= y){
							val = val - y;
							aux[w] = '1';
						}else{
							aux[w] = '0';
						}
						w++;
					}
				}
				aux[w] = '\0';
				for(x=0; x<strlen(aux); x+=3){
					if(aux[x] == '0' && aux[x+1] == '0' && aux[x+2] == '0'){
						strcat(novo, "a");
					}
					if(aux[x] == '0' && aux[x+1] == '0' && aux[x+2] == '1'){
						strcat(novo, "b");
					}
					if(aux[x] == '0' && aux[x+1] == '1' && aux[x+2] == '0'){
						strcat(novo, "c");
					}
					if(aux[x] == '0' && aux[x+1] == '1' && aux[x+2] == '1'){
						strcat(novo, "d");
					}
					if(aux[x] == '1' && aux[x+1] == '0' && aux[x+2] == '0'){
						strcat(novo, "e");
					}
					if(aux[x] == '1' && aux[x+1] == '0' && aux[x+2] == '1'){
						strcat(novo, "f");
					}
					if(aux[x] == '1' && aux[x+1] == '1' && aux[x+2] == '0'){
						strcat(novo, "g");
					}
					if(aux[x] == '1' && aux[x+1] == '1' && aux[x+2] == '1'){
						strcat(novo, "h");
					}
				}
				fl1=fopen("desc.txt", "w");
				fprintf(fl1, "%s", novo);
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
