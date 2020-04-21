#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
    char nome[100][100];
    int qtd_alun = 0, x=0, cont3=0;
	float n1[100], n2[100], n3[100], n4[100], n5[100];
	printf("Quantidade de alunos: ");
	scanf("%d", &qtd_alun);
	fflush(stdin);
    while(x < qtd_alun){
		printf("Nome do aluno: ");
		scanf("%100[^\n]s", nome[x]);
		fflush(stdin);
		printf("Nota materia 1: ");
		scanf("%f", &n1[x]);
		fflush(stdin);
		printf("Nota materia 2: ");
		scanf("%f", &n2[x]);
		fflush(stdin);
		printf("Nota materia 3: ");
		scanf("%f", &n3[x]);
		fflush(stdin);
		printf("Nota materia 4: ");
		scanf("%f", &n4[x]);
		fflush(stdin);
		printf("Nota materia 5: ");
		scanf("%f", &n5[x]);
		fflush(stdin);
		if(n3[x] >= 7){
			cont3++;
		}
		x++;
    };
    x=0;
	printf("\nAlunos aprovados em todas as materias: ");
	while(x <= qtd_alun){
		if((n1[x] >= 7) && (n2[x] >= 7) && (n3[x] >= 7) && (n4[x] >= 7) && (n5[x] >= 7)){
			printf("\nNome: %s", nome[x]);
		}
		x++;
	}
    x=0;
	printf("\nAlunos aprovados nas materias 1 e 4: ");
	while(x <= qtd_alun){
		if((n1[x] >= 7) && (n4[x] >= 7)){
			printf("\nNome: %s", nome[x]);
		}
		x++;
	}
	printf("\nPorcentagem de alunos aprovados na materia 3: %.0f\n\n", ((float)cont3 / qtd_alun) * 100);
    system("pause");
}
