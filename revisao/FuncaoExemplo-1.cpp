#include <stdio.h>
#include <stdlib.h>

int quadrado(int a) // Função Para Calcular o Quadrado Número
{
    return (a*a);
}

int main()
{
   int num,result;
   printf("Digite o Numero: ");
   scanf("%d",&num);
   
   result = quadrado(num); // Realiza a Chamada da Função quadrado
   
   printf("\n\n O Quadrado de %d",result);
   printf("\n\n");

   system("pause");
}
