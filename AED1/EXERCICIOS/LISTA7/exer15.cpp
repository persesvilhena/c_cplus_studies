#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str[50], nova[50];
	int i=0, x=0, y=0;
	printf("string: ");
	scanf("%50[^\n]s", str);
	fflush(stdin);
	while(str[i] != '\0'){
		i++;
	}
	y = i - 1;
	for(x=0;x<i;x++){
		nova[y] = str[x];
		y = y - 1;
	}
	nova[i] = '\0';
	printf("%s\n", nova);
	system("pause");
}
