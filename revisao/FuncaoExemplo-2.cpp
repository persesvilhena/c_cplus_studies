#include <stdio.h>
#include <stdlib.h>

int mult(float a, float b, float c) // Declara��o da Fun��o mul
{
    printf("O Resultado e: %.2f", a * b * c);
    printf("\n\n\n");
    return(0);
}

int main()
{
   float num1,num2,num3;
   printf("Digite o Numero: ");
   scanf("%f",&num1);
   printf("Digite o Numero: ");
   scanf("%f",&num2);
   printf("Digite o Numero: ");
   scanf("%f",&num3);
   
   mult(num1,num2,num3); // Chamada da Fun��o mult

   system("pause");
}
