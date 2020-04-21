#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor1[5];
  int x,soma;
  
  for(x=0;x<5;x++)
  {
     printf("Digite o Valor: ");
     scanf("%d",&vetor1[x]); // Entrada de Dados Vetor
  }

  // Exibição dos Valores do Vetor
   printf("\n\n");
   soma = vetor1[1]+vetor1[3];
   printf("Soma do Valor: %d",soma);
   printf("\n\n");
  
  for(x=0;x<5;x++)
  {
     printf("Digite o Valor: %d",vetor1[x]);
     printf("\n");
     
  }
   system("pause");

}
