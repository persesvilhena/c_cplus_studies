#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	char cod;
	int x=0;
	double valor=0, total_vista=0, total_prazo=0, total=0;
	do{
		printf("Cod: ");
		scanf("%c", &cod);
		fflush(stdin);
		printf("Valor: ");
		scanf("%lf", &valor);
		fflush(stdin);
		if(cod == 'v' || cod == 'V'){
			total_vista = total_vista + valor;
			total = total + valor;
		}else{
			total_prazo = total_prazo + valor;
			total = total + valor;
		}
		x++;
	}while(x<15);
	printf("\nO valor total das compras à vista: %.2lf", total_vista);
	printf("\nO valor total das compras a prazo: %.2lf", total_prazo);
	printf("\nO valor total das compras efetuadas: %.2lf", total);
	printf("\nO valor da primeira prestação das compras a prazo: %.2lf", total_prazo / 3);
	system("pause");
}
