/*7) Crie um algoritmo para guardar a matrícula, o nome e as duas notas dos 25 alunos da
disciplina de Linguagens de Programação II e depois mostrar um relatório com o número
da matrícula, nome, nota 1, nota 2, nota final e situação (A=Aprovado e R=Reprovado).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2

typedef struct{
	int matricula, situacao; 
    char nome[32];
    float nota,nota2,notaf;
}aluno;




main(){
	aluno **a;
	int i;
	a = (aluno **)malloc(MAX*sizeof(aluno *));
	for(i=0;i<MAX;i++){
		a [i]= (aluno *)malloc(sizeof(aluno));
	}
	for(i=0;i<MAX;i++){
		printf("Numero da Matricula: ");
		scanf("%i",&a[i]->matricula);
		printf("Nome do Aluno: ");
		fflush(stdin);
		gets(a[i]->nome);
		printf("Nota 1: ");
		scanf("%f",&a[i]->nota);
		printf("Nota 2: ");
		scanf("%f",&a[i]->nota2);
			
		a[i]->notaf=((a[i]->nota+a[i]->nota2)/2);
		
		
		
		if(a[i]->notaf>=6.0){
			a[i]->situacao = 1;
		}else{
			a[i]->situacao = 0;
		}
	}	
	
	printf("\n\n");
	
	
	for(i=0;i<MAX;i++){
		printf("\n******Aluno %i *******\n",i);
		printf("Matricula: %i \n",a[i]->matricula);
		printf("Nome: %s\n",a[i]->nome);
		printf("Nota 1: %.2f\n",a[i]->nota);
		printf("Nota 2: %.2f\n",a[i]->nota2);
		printf("Nota Final: %.2f\n",a[i]->notaf);
		
		if(a[i]->situacao == 1){
			printf("Situacao: A\n");
		}else{
			printf("Situacao: R\n");
		}
		
		printf("**********************\n");
	}
}


