#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, menor=0.0, maior=0.0, media=0.0;
    int i;

  	printf("\t\tExercicio 2\n\n");
	
    for(i=0;i<10;i++)
    {
  	   printf("Digite o %d numero: ",i+1);
	   scanf("%f",&numero);  // 10  -  20  -  5
	   
	   if(i==0)
       {
	      menor=numero;  //  20
	      maior=numero;  //  20
       }
       else
       {
	   	   if(numero < menor)
	         menor = numero; //  0  -  20  -  5
	       if(numero > maior)
             maior = numero;  //  10  -  20  -  
       }
          
       media = ((media*i) + numero)/(i+1);
                  
    }
    printf("Maior: %.2f; Menor: %.2f; Media %.2f\n", maior, menor, media);
    
    system("pause");    
    return 0;
}
