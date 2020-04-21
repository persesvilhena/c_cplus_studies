#include <stdio.h>
#include <stdlib.h>

int main()
{
   float horas,ganho10,ganho20;
   
   printf("Quantidade de Horas: ");
   scanf("%f",&horas);
   
   if (horas <= 50)
   {
       ganho10 = horas * 10;
       printf("O Valor Ganho Total Foi: %.2f", ganho10);
   }
   else
   {
       ganho10 = 10 * 50;
       ganho20 = (horas - 50) * 20;
       printf("\n O Valor Ganho de 10 Foi: %.2f", ganho10);
       printf("\n O Valor Ganho de 20 Foi: %.2f", ganho20);
       printf("\n O Valor Ganho Total Foi: %.2f", ganho10 + ganho20);
   }
   
   printf("\n\n\n");
   
   system("pause");


}
