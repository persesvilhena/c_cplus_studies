/* Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone
e pre�o de um eletrodom�stico. Desenvolver um algoritmo que permita exibir qual foi a
m�dia dos pre�os cadastrados e uma rela��o contendo o nome e o telefone das lojas cujo
pre�o estava abaixo da m�dia.*/

#include<stdio.h>
#include<stdlib.h>


typedef struct {
	char nomeloja[30],telefone[20];
	float preco;
}loja;

main(){

    loja **l;
	int i;
	float precot,media;
	l = (loja **)malloc(5*sizeof(loja *));
	for(i=0;i<15;i++){
		l [i]= (loja *)malloc(sizeof(loja));
	}

    for(i=0;i<15;i++){
        printf("\nNome da Loja:");
        fflush(stdin);
        gets(l[i]->nomeloja);

        printf("Telefone: ");
        fflush(stdin);
        gets(l[i]->telefone);

        printf("Preco Eletrodomestico:");
        scanf("%f",&l[i]->preco);

    precot=l[i]->preco+precot;
    }
      media=precot/i;
  printf("\nMedia dos Precos : %.2f\n",media);

   for(i=0;i<15;i++){
            if (l[i]->preco<media){

                printf("\nNome da Loja: %s",l[i]->nomeloja);
                printf("\nTelefone: %s\n",l[i]->telefone);
                printf("-------------//-----------------");
            }
   }
}

