#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pausa printf("\n");system("pause;");
#define limpa system("cls;");
#define TRUE 1
#define FALSE 0

struct registro_cd{
	int codigo;
	char artista[20];
	char nome[50];
	int ano;
	int faixas;
	float valor;
};

struct registro_cdx{
	int codigo;
	char artista[20];
	char nome[50];
	int ano;
	int faixas;
	float valor;
};

struct registro_cd cd;
struct registro_cdx cdx;
FILE *arq_cd;
FILE *fp;

main(){
    int op=0, num=0, pos=0, pos_rel=0, exc_cont=0, rel_cont=0;
    int cod=0, ano=0, fai=0;
    char art[20], nom[50], exc;
    char c[20][100], aux[100];
    float val=0;
    int x=0, y=0, z=0;
    if((arq_cd=fopen("CAD_CD.dat", "rb+")) == NULL){
		arq_cd=fopen("CAD_CD.dat", "wb+");
		//fwrite(&carro, sizeof(struct registro_carro),1, arq_carro);
		cdx.codigo = 1;
		cdx.ano = 1;
		fseek(arq_cd, (long)sizeof(struct registro_cd)*0, SEEK_SET );
		fwrite(&cdx, sizeof(registro_cdx), 1, arq_cd);	
		printf("Arquivo Criado!!");
		pausa
	}
    do{
    	fseek(arq_cd, (long)sizeof(struct registro_cd)*0, SEEK_SET );
		fread(&cdx, sizeof(registro_cdx), 1, arq_cd);
		pos = cdx.codigo;
		pos_rel = cdx.ano;
        limpa
        printf(":::::::::MENU::::::::::");
        printf("\n1 - Cadastro\n2 - Alteracao\n3 - Exclusao\n4 - Consulta\n5 - Relatorio\n6 - Sair\nOpcao: ");
        scanf("%d", &op);
        fflush(stdin);
        switch(op){
            case 1:
         	     limpa
                 #include "cad.h"
                 pausa
            break;
            case 2:
         	     limpa
                 #include "alt.h"
                 pausa
            break;
            case 3:
         	     limpa
                 #include "exc.h"
                 pausa
            break;
            case 4:
         	     limpa
                 #include "cons.h"
                 pausa
            break;
            case 5:
         	     limpa
                 #include "rel.h"
                 pausa
            break;
            case 6:
                 fclose(arq_cd);
            break;
            case 7:
                 printf("Posicao de salvamento: %d", pos);
                 pausa
            break;
            case 8:
                 printf("Posicao de salvamento do relatorio: %d", pos_rel);
                 pausa
            break;
            default:
  	            limpa
                printf("Opcao invalida");
                pausa           
        }
    }while(op != 6);
}
