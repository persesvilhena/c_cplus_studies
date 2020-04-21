#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[5][50];
	float matriz[5][5];
	float consumo;
	int x=0, y=0;
	for(x=0;x<5;x++){
		printf("cidade: ");
		scanf("%50[^\n]s", nome[x]);
		fflush(stdin);
	}
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			if(x == y){
				printf("\nDistancia de %s ate %s : 0", nome[x], nome[y]);
				matriz[x][y] = 0;
			}else{
				printf("\nDistancia de %s ate %s :", nome[x], nome[y]);
				scanf("%f", &matriz[x][y]);
				fflush(stdin);
			}
		}
	}
	printf("\nConsumo(km/l): ");
	scanf("%f", &consumo);
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			if(x == y){
				printf("\nDistancia de %s ate %s : 0", nome[x], nome[y]);
				printf("\nConsumo: 0 l");
			}else{
				printf("\nDistancia de %s ate %s : %.0f", nome[x], nome[y], matriz[x][y]);
				printf("\nConsumo: %.0f l", matriz[x][y] / consumo);
				
			}
		}
	}
	system("pause");
}
