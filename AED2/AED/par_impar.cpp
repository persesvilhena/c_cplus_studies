#include <stdio.h>
#include <stdlib.h>

void QuickSort(int vet[ ], int esq, int dir) {
	int i=esq, j=dir;
	int x,y;
	x = vet[(esq+dir)/2];
	do {
		while ((vet[i] < x) && (i < dir))
			i++;
		while ((x < vet[j]) && (j > esq))
			j--;
		if ( i <= j ) {
			y = vet[i];
			vet[i] = vet[j];
			vet[j] = y;
			i++;
			j--;
		}
	} while ( i <=j );
	if ( esq < j )
		QuickSort(vet, esq, j);
	if ( i < dir )
		QuickSort(vet, i, dir);
}

main(){
	int qtd=0, x=0, cp=0, ci=0, num=0, vetor_par[100000], vetor_impar[100000];
	scanf("%d", &qtd);
	
	for(x-0;x<qtd;x++){
		scanf("%d", &num);
		if((num % 2) == 0){
			vetor_par[cp] = num;
			cp++;
		}else{
			vetor_impar[ci] = num;
			ci++;
		}
	}
	QuickSort(vetor_par, 0, cp-1);
	QuickSort(vetor_impar, 0, ci);
	
	for(x=0;x<cp;x++){
		printf("%d\n", vetor_par[x]);
	}
	for(x=ci;x>0;x--){
		printf("%d\n", vetor_impar[x]);
	}
	system("pause");
}

