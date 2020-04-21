#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nome[12][50], sexo[12];
	int x=0, idade[12] = {0};
	for(x=0;x<12;x++){
	    printf("Nome: ");
	    scanf("%50[^\n]s", nome[x]);
	    getchar();
	    printf("Idade: ");
	    scanf("%d", &idade[x]);
	    getchar();
	    printf("Sexo: ");
	    scanf(" %c", &sexo[x]);
	    getchar();
	}
	for(x=0;x<12;x++){
		if((idade[x] > 18) && (sexo[x] == 'M')){
			printf("\nNome: %s\nIdade: %d\nSexo: %c\n", nome[x], idade[x], sexo[x]);
		}
	}
	system("pause");
}
