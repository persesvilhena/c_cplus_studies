#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0, num = 0, cp = 0, cpr = 0, cont = 0, i = 0;
    for (x=0; x<10; x++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		cont = 0;
		if((num%2) == 0){
			cp = cp + num;
		}
        for(i=1;i<=num;i++){
	        if((num % i) == 0){
	            cont++;
	        }
	    }
	    if(cont <= 2){
	        cpr = cpr + num;
	    }
    }
	printf("\nsoma dos pares: %d", cp);
	printf("\nsoma dos primos: %d", cpr);
    system("pause");
}
