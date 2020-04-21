#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str[50], c;
	int cont=0, i=0;
	printf("string: ");
	scanf("%50[^\n]s", str);
	fflush(stdin);
	while(str[i] != '\0'){
		if(str[i] == 'a'){
			str[i] = '*';
		}
		i++;
	}
	printf("%s\n", str);
	system("pause");
}
