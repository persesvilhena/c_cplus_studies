#include <stdio.h>
#include <stdlib.h>

int pesquisa(char vet[], int tam, char dado[]){
	int i;
	for (i=0;i<tam;i++){
		if ( vet[i] == dado[0] && vet[i+1] == dado[1] && vet[i+2] == dado[2]){
  		    return(i);
		}else{
  		    return(0);
		}
	}
}

main(){
	char vetor[9], dado[3];
	scanf("%9[^\n]s", vetor);
	fflush(stdin);
	scanf("%9[^\n]s", dado);
	fflush(stdin);
	/*vetor = "ALGORITMO";
	dado = "RIT";*/
	printf("%d\n", pesquisa(vetor, 9, dado));
}
