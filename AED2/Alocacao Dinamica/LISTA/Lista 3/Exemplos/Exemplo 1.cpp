#include<stdio.h>
#include<stdlib.h>
#define MAX 100000000

main(){
	int *vetor, i;
	
	vetor = (int *) malloc (MAX*sizeof(int));
	
	if(vetor==NULL){
		printf("Sem Memoria!!");
		system("pause>nul");
		exit(0);
	}
	
	for(i=0;i<MAX;i++){
		vetor[i]=i;
		printf("%d\n", vetor[i]);
	}
	
	free(vetor);
	
	system("pause>nul");
}
