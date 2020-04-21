#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matriz1[5][4];
  int x,y,soma=0;

  for(x=0;x<5;x++)
  {
    for(y=0;y<4;y++)
    {
      printf("Valor: ");
      scanf("%d",&matriz1[x][y]);
      soma = soma + matriz1[x][y];
    }
  }

  printf("A Soma e: %d",soma);

  printf("\n\n");
  
  for(x=0;x<5;x++)
  {
    for(y=0;y<4;y++)
    {
      printf("Valor: %d",matriz1[x][y]);
      printf("\n");
    }
  }  
 
 
 
  //printf("Nome: %s",nomep);
  //printf("\n\n");
  //printf("A Quantidade de Caracteres e: %d",contac);     
  //printf("\n\n");
  system("pause");

}
