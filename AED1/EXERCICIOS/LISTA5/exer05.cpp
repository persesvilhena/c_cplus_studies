#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int ing = 120, qtding=0;
    double valing = 5, lucro=0, valor=0;
    do{
        printf("ing: %d\nvalor: %.2lf\nlucro: %.2lf\n\n", ing, valing, (ing * valing)- 200);
        valing = valing - 0.5;
        ing = ing + 26;
		if(((ing * valing)- 200) > lucro){
			lucro = (ing * valing)- 200;
			qtding = ing;
			valor = valing;
		}
        
    }while(valing != 0.5);
	printf("\nLucro maximo: %.0lf", lucro);
	printf("\nQuantidade de ingressos que devem ser vendidos: %d", qtding);
	printf("\nValor do ingresso: %.2lf\n", valor);


    system("pause");
}
