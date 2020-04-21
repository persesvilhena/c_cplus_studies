#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str[3][50], maior[50], menor[50], meio[50];
	int x=0;
	for(x=0;x<3;x++){
	    printf("String %d: ", x + 1);
	    scanf("%50[^\n]s", str[x]);
	    fflush(stdin); 
	}
	strcpy(menor, str[1]);
	for(x=0;x<3;x++){
		if(strlen(str[x]) < strlen(menor)){
			strcpy(menor, str[x]);
		}
	}
	for(x=0;x<3;x++){
		if(strlen(str[x]) > strlen(maior)){
			strcpy(maior, str[x]);
		}
	}
	for(x=0;x<3;x++){
		if((strlen(str[x]) < strlen(maior)) && (strlen(str[x]) > strlen(menor))){
			strcpy(meio, str[x]);
		}
	}
	printf("%s, %s, %s\n", menor, meio, maior);
	system("pause");
}
