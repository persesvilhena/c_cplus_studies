#include <stdio.h>
#include <stdlib.h>

main(){
	int vc=5, vl=5;
	double **matriz, **matriz2;
	int i,j;
	matriz = (double **)malloc(vl*sizeof(double *));
	matriz2 = (double **)malloc(vl*sizeof(double *));
	for(i=0;i<vl;i++){
		matriz[i] = (double *)malloc(vc*sizeof(double));
		matriz2[i] = (double *)malloc(vc*sizeof(double));
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz %dx%d: ", i, j);
			scanf("%lf", &matriz[i][j]);
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			matriz2[i][j] = matriz[i][j] * matriz[i][i];
		}
	}
	for(i=0;i<vl;i++){
		for(j=0;j<vc;j++){
			printf("Matriz %dx%d: %lf\n", i, j, matriz2[i][j]);
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
