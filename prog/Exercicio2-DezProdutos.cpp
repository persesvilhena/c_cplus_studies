#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cod,qtde,z;
  float preco, desc, totunit, totgeral;

  for(z=0;z<2;z++)
  {
      printf("Codigo: ");
      scanf("%d",&cod);
      printf("Preco: ");
      scanf("%f",&preco);
      printf("Quantidade: ");
      scanf("%d",&qtde);
      totunit = preco * qtde;
      printf("\n O Valor Sem Desconto: %.2f", totunit);
      
      if(totunit >= 50)
      {
          desc = totunit * 0.10;
          totunit = totunit - desc;
          printf("\n O Valor do Desconto: %.2f", desc);
          printf("\n O Valor Com Desconto: %.2f", totunit);
      }
      else
      {
          printf("\n Nao Ha Desconto: \n");
      }
      
      totgeral = totgeral + totunit; // Calcula o Total Geral da Compra

      printf("\n\n");
      printf("================================");
      printf("\n\n");
  }
  printf("\n\n Total Geral da Compra: %.2f", totgeral);
  printf("\n\n");
  system("pause");
}
