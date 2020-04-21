#include<stdio.h>
#include<stdlib.h>

main(){

	int num,cont,soma;
	
	for (num=1;num<=100;num++){
		for (soma=0,cont=1;cont<num;cont++){
			if (num%cont==0){
				soma=soma+cont;
			}
		}
		if (soma==num){
			printf("%d\n",num);
		}
	}
	system("PAUSE");
}
