#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vet[5];

  	printf("\t\tExercicio 2\n\n");
	
    for(i=0;i<5;i++)
    {
  	   printf("Digite o %d numero: ",i+1);
	   scanf("%d",&vet[i]);  // 10  -  20  -  5

      if(vet[i] == 3)
      {
          printf("\n\n O Valor e: %d \n\n", vet[i]);
      }

      if(vet[i] > 4)
      {
          printf("\n\n E Maior Que 4: \n\n");
      }

    }

    system("pause");    
    return 0;
}
