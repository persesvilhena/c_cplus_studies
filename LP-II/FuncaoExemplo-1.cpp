#include <stdio.h>
#include <stdlib.h>

int quadrado(int a) // Fun��o Para Calcular o Quadrado N�mero
{
    return (a*a);
}

int main()
{
   int num,result;
   printf("Digite o Numero: ");
   scanf("%d",&num);
   
   result = quadrado(num); // Realiza a Chamada da Fun��o quadrado
   
   printf("\n\n O Quadrado de %d",result);
   printf("\n\n");

   system("pause");
}
