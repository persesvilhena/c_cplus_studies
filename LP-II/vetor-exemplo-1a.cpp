#include <stdio.h>
#include <stdlib.h>

int main()
{
   int quant[5];
   
   printf("Digite o Numero: ");
   scanf("%d",&quant[0]);
   printf("Digite o Numero: ");
   scanf("%d",&quant[1]);
   printf("Digite o Numero: ");
   scanf("%d",&quant[2]);
   printf("Digite o Numero: ");
   scanf("%d",&quant[3]);
   printf("Digite o Numero: ");
   scanf("%d",&quant[4]);   
   
   // Exibir os valores do vetor

   printf("\n O valor e: %d",quant[0]);
   printf("\n O valor e: %d",quant[1]);
   printf("\n O valor e: %d",quant[2]);
   printf("\n O valor e: %d",quant[3]);
   printf("\n O valor e: %d",quant[4]);   
  
   printf("\n\n\n");
   system("pause");
}
