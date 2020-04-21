#include "fila.h"

main(){
	fila f;
	int N;
	create(&f);
	insert(&f,666);
	insert(&f,320);
	insert(&f,413);
	printf("Ordem de chegada:\n");
	while(!isEmpty(f)){
		remove(&f, &N);
		printf("Retirou: %d\n",N);
	}
}
