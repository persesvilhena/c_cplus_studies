#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str[50];
	int i=0;
	printf("string: ");
	scanf("%50[^\n]s", str);
	fflush(stdin);
	while(str[i] != '\0'){
		i++;
	}
	printf("quantidade de caracters: %d\n", i);
	system("pause");
}
