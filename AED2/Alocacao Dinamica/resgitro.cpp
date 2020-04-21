#include<stdio.h>
#include<stdlib.h>
/*              NAO FUNCIONA PORRA
typedef struct {
	char nome[32];
	double peso;
	int idade;
} pessoa;
*/
struct pessoa{
	char nome[32];
	double peso;
	int idade;
};

main(){
	struct pessoa *p;
	/*
	pessoa *p;
	p = malloc(sizeof (void));*/
	int i,cont;
	printf("Digite o nome da pessoa:\n");
	scanf("%32[^\n]s", p->nome);
	fflush(stdin);
	printf("Digite o peso da pessoa:\n");
	scanf("%lf",&p->peso);
	printf("Digite a idade da pessoa:\n");
	scanf("%d",&p->idade);
	printf("%s %lf %d\n",p->nome,p->peso,p->idade);
	free(p);
	system("pause>nul");
}
