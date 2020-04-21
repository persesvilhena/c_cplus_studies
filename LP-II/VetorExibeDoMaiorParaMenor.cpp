#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, vet[5];

  	printf("\t\t Resolucao Exercicio \n\n");
	
    for(i=0;i<5;i++)
    {
  	   printf("Digite o %d numero: ",i+1);
	   scanf("%d",&vet[i]);
    }

    for (j=i-1;j>=0;j--)
    {
       printf("%d\n",vet[j]);
    }  

    system("pause");    
    return 0;
}
