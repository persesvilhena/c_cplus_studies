#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x=0, n[1000] = {0}, num=0, i=0;
	printf("Num: ");
	scanf("%d", &num);
	for(x=0;x<1000;x++){
		n[x] = i;
		i++;
		if(i == num){
			i=0;
		}
	}
	for(x=0;x<1000;x++){
		printf("%d\n", n[x]);
	}
	system("pause");
}
