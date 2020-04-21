#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char string[1000];
	int i, x;
	pilha p1;
	
	create(&p1);
	
	gets(string);
	fflush(stdin);
	
	i = strlen(string);
	
	for(x-0; x<1; x++){
		if(strcmp(string[x] == '(')){
			push(&p1, ')');
		}
		if(strcmp(string[x] == ')')){
			pop(&p1, '(');
		}
	}
}
