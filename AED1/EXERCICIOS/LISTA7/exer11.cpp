#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str[50], c;
	int cont=0, i=0;
	printf("string: ");
	scanf("%50[^\n]s", str);
	fflush(stdin);
	printf("caracter: ");
	scanf("%c", &c);
	fflush(stdin);
	while(str[i] != '\0'){
		if(str[i] == c){
			cont++;
		}
		i++;
	}
	printf("O caracter %c apareceu %d vezes!", c, cont);
	system("pause");
}
