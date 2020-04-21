#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
char nome[32];
double peso;
int idade;
}pessoa;
main()
{
pessoa **p;
int i;
p = (pessoa **)malloc(MAX*sizeof(pessoa *));
for(i=0;i<MAX;i++)
p[i] = (pessoa *)malloc(sizeof(pessoa));
for(i=0;i<MAX;i++)
{
printf("Digite o nome da pessoa:\n");
fflush(stdin);
gets(p[i]->nome);
printf("Digite o peso da pessoa:\n");
scanf("%lf",&p[i]->peso);
printf("Digite a idade da pessoa:\n");
scanf("%d",&p[i]->idade);
printf("%s %lf %d\n",p[i]->nome,p[i]->peso,p[i]->idade);
}
for(i=0;i<MAX;i++)
free(p[i]);
free(p);
system("pause>nul");
}
