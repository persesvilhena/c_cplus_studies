#include <stdio.h>
#include <stdlib.h>

int main()
{
   int meuvet[5], x, y, mult=0, contador=0, total=0;
   
   for(x=0; x<5; x++)
   {
      printf("Digite o Valor: ");
      scanf("%d", &meuvet[x]);
      contador = contador + 1;
      total = total + meuvet[x];
   }

   mult = meuvet[1] * meuvet[2];    

   for(y=0; y<5; y++)
   {
      printf("%d", meuvet[y]);
      printf("\n");
   }   

   printf("A Multiplicacao do Segundo e Terceiro Elemento do Vetor e: %d",mult);
   printf("\n\n");
   printf("O Resultado do Contador e: %d",contador);
   printf("\n\n");
   printf("O Total e: %d",total);      

   printf("\n\n");
   system("pause");

}
