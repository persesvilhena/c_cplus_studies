#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"

main(){
	Arvore A = NULL;
	
	insertNode(&A, '1', NULL);
	insertNode(&A, '2', NULL);
	insertNode(&A, '3', NULL);
	insertNode(&A, '4', NULL);
	
	imprimir(A);
		
}
