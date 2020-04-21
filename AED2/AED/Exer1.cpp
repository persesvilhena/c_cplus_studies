#include <stdio.h>
#include <stdlib.h>

void QuickSort(int vet[ ], int esq, int dir){
	int i=esq, j=dir; int x,y;
	x = vet[(esq+dir)/2];
	
	do{
		while ((vet[i] < x) && (i < dir))
		i++;
		while ((x < vet[j]) && (j > esq))
		j--;
		if ( i <= j ){
			y = vet[i]; vet[i] = vet[j]; vet[j] = y;
			i++; j--;
		}
	}while ( i <=j );

	if ( esq < j ){
		QuickSort(vet, esq, j);
	}else{
		if ( i < dir ){
			QuickSort(vet, i, dir);
		}
	}
}

main(){
    int t, n, x, y, i, cont=0, z=0;
    scanf("%d", &t);
    for(x=0; x<t; x++){
        scanf("%d", &n);
        int vet[n];
        for(y=0; y<n; y++){
            scanf("%d", &vet[y]);
        }
        QuickSort(vet, 0, n);
        for(i=0; i<n-1; i++){
            if(vet[i] == vet[i+1]){
                cont++;
            }
        }
        z = n - cont;
        printf("%d\n", z);
        cont = 0;
        z = 0;
    }
    system("pause");
}
