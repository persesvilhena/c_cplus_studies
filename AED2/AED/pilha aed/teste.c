#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

main(){
	int n;
	pilha p1;
	create(&p1);
	push(&p1, 1);
	push(&p1, 2);
	push(&p1, 3);
	push(&p1, 4);
	if(!isEmpty(p1)){
		while(!isEmpty(p1)){
			pop(&p1, &n);
			printf("Desempilhou: %d\n",n);
		}
	}
}
