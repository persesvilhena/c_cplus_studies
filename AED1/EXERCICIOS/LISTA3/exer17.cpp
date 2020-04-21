#include <stdio.h>
#include <stdlib.h>

main(){
    int num, x, cont = 0, s = 0, y;
    printf("digite um numero: ");
    scanf("%d", &num);
	for(y=1;y<=num;y++){
		cont=0;
	    for(x=1;x<=y;x++){
	        if((y % x) == 0){
	            cont++;
	        }
	    }
	    if(cont == 2){
	        s = s + y;
	    }
	}
	printf("res: %d", s);
    system("pause");
}
