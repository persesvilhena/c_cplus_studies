#include <stdio.h>
#include <stdlib.h>

main(){
	int vc=0, vl=0;
	printf("Quantidade de linhas: ");
	scanf("%d", &vl);
	printf("Quantidade de colunas: ");
	scanf("%d", &vc);
	int **matriz, **matriz2, **matriz3, i,j;
	matriz = (int **)malloc(vl*sizeof(int *));
	matriz2 = (int **)malloc(vl*sizeof(int *));
	matriz3 = (int **)malloc(vl*sizeof(int *));
	for(i=0;i<vl;i++){
		matriz[i] = (int *)malloc(vc*sizeof(int));
		matriz2[i] = (int *)malloc(vc*sizeof(int));
		matriz3[i] = (int *)malloc(vc*sizeof(int));
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz 1 %dx%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz 2 %dx%d: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			matriz3[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz %dx%d: %d\n", i, j, matriz3[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		free(matriz[i]);
		free(matriz2[i]);
		free(matriz3[i]);
	}
	free(matriz);
	free(matriz2);
	free(matriz3);
	system("pause>nul");
}
