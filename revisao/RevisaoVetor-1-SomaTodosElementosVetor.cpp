#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor1[5];
  int x,soma=0;
  
  for(x=0;x<5;x++)
  {
     printf("Digite o Valor: ");
     scanf("%d",&vetor1[x]); // Entrada de Dados Vetor
     soma = soma + vetor1[x];
  }

  // Exibição da Soma dos Elementos do Vetor
   printf("\n\n");
   printf("Soma do Valor: %d",soma);
   printf("\n\n");

  // Exibição dos Valores do Vetor
  
  for(x=0;x<5;x++)
  {
     printf("Digite o Valor: %d",vetor1[x]);
     printf("\n");
     
  }
   system("pause");

}
