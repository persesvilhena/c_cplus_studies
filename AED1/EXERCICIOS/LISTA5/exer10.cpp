#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int op=0, meses=0;
	double sal=0, novosal=0;
	do{
		system("cls");
		printf("******MENU******\n1- Novo salário\n2- Férias\n3- Décimo terceiro\n4- Sair\nOpcao: ");
		scanf("%d", &op);
		fflush(stdin);
		switch(op){
			case 1:
				system("cls");
				printf("Salario: ");
				scanf("%lf", &sal);
				fflush(stdin);
				if(sal < 210){
					novosal = sal * 1.15;
				}else{
					if(sal < 600){
						novosal = sal * 1.10;
					}else{
						novosal = sal * 1.05;
					}
				}
				printf("Novo salario: %.2lf", novosal);
				system("pause");
			break;
			case 2:
				system("cls");
				printf("Salario: ");
				scanf("%lf", &sal);
				fflush(stdin);
				novosal = sal * 1.33;
				printf("Ferias: %2.lf", novosal);
				system("pause");
			break;
			case 3:
				system("cls");
				printf("Salario: ");
				scanf("%lf", &sal);
				fflush(stdin);
				printf("Meses trabalhados: ");
				scanf("%d", &meses);
				fflush(stdin);
				printf("Decimo terceiro: %.2lf", (sal * meses) / 12);
				system("pause");
			break;
			case 4:
				//printf("fechando programa");
			break;
			default:
			printf("Opcao Invalida");
			system("pause");
			system("cls");
		}
	}while(op != 4);
}
