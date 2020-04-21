#include <stdio.h>
#include <stdlib.h>

main(){
	int *vetora;
    vetora = (int *)malloc(20 * sizeof(int));
    int *vetorb;
    vetorb = (int *)malloc(20 * sizeof(int));
    int x = 0, y = 0;
    for(x=0;x<20;x++){
    	printf("Numero: ");
    	scanf("%d", &vetora[x]);
    }
    for(x=0;x<20;x++){
    	if(vetora[x] >= 0){
    		if(vetora[x] != NULL){
    			vetorb[y] = vetora[x];
    			y++;
    		}
    	}
    }
    for(x=0;x<y;x++){
    	printf("Vetor b: %d\n", vetorb[x]);
    }
    system("pause");
    free(vetora);
    free(vetorb);
}
