#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,num1,num2,resto;
   
   for(x=0;x<2;x++)
   {
      printf("Numero 1: ");
      scanf("%d",&num1);
      printf("Numero 2: ");
      scanf("%d",&num2);
      
      resto=num1 % num2; // O Sinal % é o Operador Resto da Divisão 
      printf("O Resto da Divisao e: %d\n",resto);
            
      if(resto > 0)
        printf("\n E Impar \n\n");
      else
        printf("\n E Par \n\n");

   }
     system("pause");
}
