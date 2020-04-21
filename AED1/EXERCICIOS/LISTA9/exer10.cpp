#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    int cod;
	char nome[50];
	float horas_trab, salario_total, salario_extra, salario_sextra;
};
main(){
    struct funcionario f[100];
	float salario = 13, salario_extra, tot_extra = 0, tot = 0;
	int qtd = 5, x=0;
	salario_extra = salario * 1.4;
	for(x=0;x<qtd;x++){
		printf("Codigo: ");
		scanf("%d", &f[x].cod);
		fflush(stdin);
		printf("Nome: ");
		scanf("%50[^\n]s", f[x].nome);
		fflush(stdin);
		printf("Horas trabalhadas: ");
		scanf("%f", &f[x].horas_trab);
		fflush(stdin);
		tot = tot + (40 * salario);
		if(f[x].horas_trab > 40){
			f[x].salario_total = (40 * salario) + ((f[x].horas_trab - 40) * salario_extra);
			f[x].salario_extra = ((f[x].horas_trab - 40) * salario_extra);
			f[x].salario_sextra = (f[x].horas_trab * salario);
			tot_extra = tot_extra + (f[x].horas_trab - 40);
		}else{
			f[x].salario_total = (f[x].horas_trab * salario);
			f[x].salario_extra = 0;
			f[x].salario_sextra = (f[x].horas_trab * salario);	
		}
	}
	printf("\nTotal de horas extras de todos os funcionarios: %.0f\n", tot_extra);
	printf("O  percentual  relativo  ao  valor  pago  em  hora  extra  em  relação  ao  salário  normal  dos trabalhadores: %.0f%%\n\nFuncionarios que receberam hora extra:\n\n", (tot_extra / tot) * 100.0);
	for(x=0;x<qtd;x++){
		if(f[x].salario_extra > 0){
			printf("Nome do funcionario: %s", f[x].nome);
			printf("\nValor recebido de hora extra: %.2f\n\n", f[x].salario_extra * salario_extra);
		}
	}
	system("pause");

}
     
