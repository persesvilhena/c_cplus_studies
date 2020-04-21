#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int codCliente, numHoras;
	char nome[30], email[30];
	float vlr;
}provedor;

main(){
	provedor **a;
	int i;
	a = (provedor **)malloc(5*sizeof(provedor *));
	for(i=0;i<5;i++){
		a [i]= (provedor *)malloc(sizeof(provedor));
	}
	
	for(i=0; i<5; i++){
		printf("Codigo do Cliente: ");
		scanf("%d", &a[i]->codCliente);
		
		printf("Nome: ");
		fflush(stdin);
		gets(a[i]->nome);
		
		printf("Email: ");
		fflush(stdin);
		gets(a[i]->email);
		
		printf("Num. Horas de Acesso: ");
		scanf("%d", &a[i]->numHoras);
	
		if(a[i]->numHoras < 20){
			a[i]->vlr = 35;
		}else{
			a[i]->vlr = (a[i]->numHoras - 20) * 2.5;
		}
	}
	printf("\n\nRelatorio dos Clientes do Provedor\n");
	for(i=0; i<5; i++){
		printf("Codigo do Cliente: %d\n", a[i]->codCliente);		
		printf("Nome: %s\n", a[i]->nome);
		printf("Email: %s\n", a[i]->email);
		printf("Num. Horas de Acesso: %d\n", a[i]->numHoras);
		if(a[i]->numHoras < 20){
			a[i]->vlr = 35;
		}else{
			a[i]->vlr = ((a[i]->numHoras - 20) * 2.5)+35;
		}
		printf("Valor a Pagar: %.2f\n", a[i]->vlr);
	}
	system("pause");
	for(i=0; i<5; i++){
        free(a[i]);
    }
    free(a);
}
