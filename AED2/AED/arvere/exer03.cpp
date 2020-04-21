#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"

main(){
	Arvore A = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	possuemSub(A);
		
}
