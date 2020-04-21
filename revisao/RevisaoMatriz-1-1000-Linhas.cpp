#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matriz1[100][29];
  int x,y,contac=0;

  for(x=0;x<100;x++)
  {
    for(y=0;y<29;y++)
    {
      printf("Valor: ");
      scanf("%d",&matriz1[x][y]);
    }
  }

  printf("\n\n");
  
  for(x=0;x<100;x++)
  {
    for(y=0;y<29;y++)
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
