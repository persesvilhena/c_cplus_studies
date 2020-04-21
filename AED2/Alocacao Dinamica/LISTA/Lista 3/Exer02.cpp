#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int primos = 0;	int num = 100, i;
	int *vetor;
	
	vetor = (int *) malloc(100*sizeof(int *));
	
	while( primos < 10){
		bool bPrimo = true;
		int x = num/2;
		
		while(x > 1){
			if( num % x == 0){
				bPrimo = false;
				break;
			}
			x--;		
		}		
		
		if (bPrimo)	{
			vetor[primos] = num; 
			primos++;
		}
				num++;
		}
	
	
	printf("Vetor Primos\n");
		for(i=0; i<10; i++){
			printf("Posicao %d: %d\n", i, vetor[i]);
		}
		
		system("pause");
}
				
