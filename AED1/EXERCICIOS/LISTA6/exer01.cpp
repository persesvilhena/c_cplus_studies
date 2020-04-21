#include <stdlib.h>
#include <stdio.h>

main(){
    int x[999] = {0}, y[999] = {0}, i = 0, z = 0, res = 0, x1=0;
    while(x1 >= 0){
        printf("valor de x: ");
        scanf("%d", &x1);
		fflush(stdin);
		if(x1 >= 0){
			x[i] = x1;
	        printf("valor de y: ");
	        scanf("%d", &y[i]);
			fflush(stdin);
		}
		i++;
        
    }
    system("cls");
    for(z=0; z<(i - 1); z++){
        res = res + (x[z] * y[z]);
    }
    printf("res: %d\n", res);
    system("pause");
}
