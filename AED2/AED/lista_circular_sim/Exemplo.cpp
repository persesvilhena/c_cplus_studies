#include<stdio.h>
#include<stdlib.h>
#include "lista_cir.h"


main(){
		
	listaC L;
	create(&L);
	insert(&L,12);
	insert(&L,320);
	insert(&L,413);
	printf("Imprimir Lista Cricular\n");
	imprime(L);
	remover(&L,320);
	printf("\n\n\nImprimir depois da remocao\n");
	imprime(L);
}
