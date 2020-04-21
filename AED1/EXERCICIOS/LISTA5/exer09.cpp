#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int idade=0, x=0, maior_idade=0, menor_idade = 999, cont=0, ms_idade=0;
	double sal=0, media=0, menor_salario=99999999;
	char sexo, ms_sexo;
	do{
		printf("Idade: ");
		scanf("%d", &idade);
		fflush(stdin);
		if(idade >= 0){
			printf("Sexo: ");
			scanf("%c", &sexo);
			fflush(stdin);
			printf("Salario: ");
			scanf("%lf", &sal);
			fflush(stdin);
			media = media + sal;
			if(idade > maior_idade){
				maior_idade = idade;
			}
			if(idade < menor_idade){
				menor_idade = idade;
			}
			if(sexo == 'F' && sal <= 200){
				cont++;
			}
			if(sal < menor_salario){
				menor_salario = sal;
				ms_idade = idade;
				ms_sexo = sexo;
			}
			x++;
		}
	}while(idade >= 0);
	printf("\nA média de salários do grupo: %.2lf", media / x);
	printf("\nA maior idade do grupo: %d", maior_idade);
	printf("\nA menor idade do grupo: %d", menor_idade);
	printf("\nA quantidade de mulheres com salário até R$ 200,00: %d", cont);
	printf("\nA idade da pessoa que possui o menor salário: %d", ms_idade);
	printf("\nO sexo da pessoa que possui o menor salário: %c\n", ms_sexo);
	system("pause");
}
