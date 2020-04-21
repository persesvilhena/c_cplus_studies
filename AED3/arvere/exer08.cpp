#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "arvore.h"
char str[10000], str1[10000], str2[10000], c[2];

void concatena(Arvore t){
	if(t != NULL){
		c[0] = t->dado;
		c[1] = '\0';
		strcat(str, c);
		concatena(t->esq);
		concatena(t->dir);
	}
}


int verifica(Arvore A, Arvore B){
	concatena(A);
	strcpy(str1, str);
	strcpy(str, "");
	concatena(B);
	strcpy(str2, str);
	strcpy(str, "");
	if(strcmp(str1, str2) == 0){
		return 1;
	}
	return 0;
}


main(){
	Arvore A = NULL;
	Arvore B = NULL;
	
	insertNode(&A, 'G');
	insertNode(&A, 'C');
	insertNode(&A, 'B');
	insertNode(&A, 'J');
	
	insertNode(&B, 'G');
	insertNode(&B, 'C');
	insertNode(&B, 'B');
	insertNode(&B, 'J');
	
	printf("%d\n", verifica(A, B));
	
	//printf("%s %s", str1, str2);

		
}
