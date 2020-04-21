#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char texto[50], saida[50], entrada[50], vetComp[20], Num[1], dec[10], binario[10], seq[4], letra[2];
int x, soma = 0, bin, y,a = -1, opc, i;
FILE *ent, *compactado;


main(){
	printf("||====================================||\n");
	printf("||               Menu                 ||\n");
	printf("||====================================||\n");
	printf("||====================================||\n");
	printf("|| 1 - Compactar                      ||\n");
	printf("|| 2 - Descompactar                   ||\n");
	printf("||====================================||\n");
	
	printf("Entre com a opcao: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:{
				
			if((ent=fopen("entrada.txt", "r")) == NULL){
				printf("Não encontro o arquivo!!!");
			}

				fgets(texto, 100, ent);
				fflush(stdin);
				
					for(x=0; x < strlen(texto); x++){
					
						if(texto[x] == 'a'){
							strcat(saida, "000");			
						}
						
						if(texto[x] == 'b'){
							strcat(saida, "001");			
						}
								
						if(texto[x] == 'c'){
							strcat(saida, "010");			
						}
						
						if(texto[x] == 'd'){
							strcat(saida, "011");			
						}
						
						if(texto[x] == 'e'){
							strcat(saida, "100");			
						}
						
						if(texto[x] == 'f'){
							strcat(saida, "101");			
						}
						
						if(texto[x] == 'g'){
							strcat(saida, "110");			
						}
						
						if(texto[x] == 'h'){
							strcat(saida, "111");			
						}
						
					}	


				printf("%s\n\n", saida);
				
				for(x=0; x < strlen(saida); x+=8){
					bin = 128; a++;	soma = 0;	
					for(y=x; y < x+8; y++){
						
						Num[0] = saida[y];			
						soma+= bin*atoi(Num);
						bin/= 2;		
						
						dec[a] = soma;
						printf("%d\n", soma);
					}
				}

				a++;	
				dec[a] = '\0';
				
				compactado = fopen("saida.txt", "w");
				
				for(x=0; x< strlen(dec); x++){
					fprintf(compactado,"%c", dec[x]);		
				}
			break;
		}
		
		case 2:{
		
		if((compactado = fopen("saida.txt", "r")) == NULL){
			printf("Não foi possivel abrir o arquivo!!!");
		}	
		
		fgets(texto, 100, compactado);
		
		for(x=0; x<strlen(texto); x++){
			printf("%d ", texto[x]);
			
			itoa(texto[x], binario, 2);			
			
			if(strlen(binario) < 8){
				for(i=0; i<(8 - strlen(binario)); i++){
					strcat(saida, "0");
				}					
			}
			
			strcat(saida, binario);
		}
		
		ent = fopen("descompactado.txt", "w");
		
		for(x=0; x < strlen(saida); x+=3){
			for(y=x; y<x+3; y++){
				letra[0] = saida[y];
				strcat(seq, letra);
			}
			strcat(entrada, seq);
		}
		
		
		printf("\n%s\n\n",entrada);
		
		
			break;
		}
	}


}
