#include <stdio.h>
#include <stdlib.h>

main(){
	int vc=3, vl=4;
	int **matriz, **matriz2, i,j;
	matriz = (int **)malloc(vl*sizeof(int *));
	matriz2 = (int **)malloc(vl*sizeof(int *));
	for(i=0;i<vl;i++){
		matriz[i] = (int *)malloc(vc*sizeof(int));
		matriz2[i] = (int *)malloc(vc*sizeof(int));
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz %dx%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			matriz2[i][j] = matriz[i][j] * 3;
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz %dx%d: %d\n", i, j, matriz2[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		free(matriz[i]);
		free(matriz2[i]);
	}
	free(matriz);
	free(matriz2);
	system("pause>nul");
}
