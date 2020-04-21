#include<stdio.h>
#include<stdlib.h>

main(){
	int **matrizA, **matrizB, x, y;
	
	matrizA = (int **)malloc(3*sizeof(int *));
	matrizB = (int **)malloc(3*sizeof(int *));
	
	
	for(x=0; x<3; x++){
		matrizA[x] = (int *)malloc(4*sizeof(int *));
		matrizB[x] = (int *)malloc(4*sizeof(int *));
	}
	
	
	printf("Matriz A\n");
	
	for(x=0; x<3; x++){
		for(y=0; y<4; y++){
			printf("Linha %d Pos. %d: ", x,y);
			scanf("%d", &matrizA[x][y]);
			matrizB[x][y] = 3*matrizA[x][y];
		}
	}
	
	printf("Matriz B\n");
	
	for(x=0; x<3; x++){
		for(y=0; y<4; y++){
			printf("Linha %d Pos. %d: %d\n", x,y,matrizB[x][y]);

		}
	}
	
	
} 
