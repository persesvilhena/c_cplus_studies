#include <stdio.h>
#include<stdlib.h>


main(){
	
	int linha, coluna, **mtrA, **mtrB, x, y;
	
	printf("Linhas: ");
	scanf("%d", &linha);
	
	printf("Colunas: ");
	scanf("%d", &coluna);
	
	
	mtrA = (int **)malloc(linha*(sizeof(int *)));
	mtrB = (int **)malloc(linha*(sizeof(int *)));
		
	for(x=0; x< linha; x++){
		mtrA[x] = (int *)malloc(coluna*(sizeof(int *)));
		mtrB[x] = (int *)malloc(coluna*(sizeof(int *)));
	}
	
	
	printf("Matriz A\n");
	for(x=0; x<linha; x++){
		for(y=0; y<coluna; y++){
			printf("Linha %d, Coluna %d: ", x, y);
			scanf("%d", &mtrA[x][y]);
		}
	}
	
	printf("Matriz B\n");
	for(x=0; x<linha; x++){
		for(y=0; y<coluna; y++){
			printf("Linha %d, Coluna %d: ", x, y);
			scanf("%d", &mtrB[x][y]);
		}
	}
	
	
	printf("Soma das Matrizes");
	for(x=0; x<linha; x++){
		for(y=0; y<coluna; y++){
			printf("Soma da Linha %d, Coluna %d: %d\n", x, y, mtrA[x][y]+mtrB[x][y]);
			
		}
	}
}
