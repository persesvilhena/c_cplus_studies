#include <stdio.h>
#include <conio.h>      // Bibliotecas
#include <stdlib.h>

int main(){
  
  	printf("\t\tCadastro de Modelos\n\n");
    char vetor1[][10] ={};
    int vetor2[] ={};
    int i=0;                //variáveis globais
    int limite=5;

    for (i=0;i<limite;i++){
       char nome[10] = "";//variável local
       printf("Digite o nome da %da modelo: ",i+1);
	   scanf("%s",&nome);
       strcpy(vetor1[i],nome);

       int idade=0;
       printf("Digite a idade da %da modelo: ",i+1);
	   scanf("%d",&idade);
       vetor2[i]=idade;
    }

    printf("Lista de candidatas aptas:\n");
    for (i=0;i<limite;i++){
        if ((vetor2[i] >= 18) && (vetor2[i] <= 20))
          printf("Candidata %s, %d anos\n",vetor1[i],vetor2[i]);
    }
    
    system("pause");     
    return 0;
}
