/* Dados os seguintes campos de um registro: nome, dia de anivers�rio e m�s de
anivers�rio, desenvolver um algoritmo que mostre em cada um dos meses do ano quem
s�o as pessoas que fazem anivers�rio, exibir tamb�m o dia. Considere um conjunto de 40
pessoas. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
	char nome[30];
    int mes;
	int dia;	
	
}aniversario;

main(){
	aniversario **a;
	int i, j;
	a = (aniversario **)malloc(5*sizeof(aniversario *));
	for(i=0;i<5;i++){
		a [i]= (aniversario *)malloc(sizeof(aniversario));
	}
	
	for(i=0;i<2;i++){
			
		printf("Nome: ");
		fflush(stdin);
		gets(a[i]->nome);
		
		printf("Mes: ");
		fflush(stdin);
		scanf("%d", &a[i]->mes);
		
		printf("Dia :");
		scanf("%i",&a[i]->dia);
		
	}
	for(j=1;j<=12;j++){
	    printf("\n::::::::Mes %d::::::::::\n", j);
        for(i=0;i<2;i++){
    		if (a[i]->mes == j){
    		    printf("Nome:  %s   \nDia:  %i \n\n",a[i]->nome,a[i]->dia );	
            }
		} 
	}
	system("pause");
}
