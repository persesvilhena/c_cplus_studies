#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcao;

   printf ("Digite a Opcao: ");
   scanf("%d",&opcao);
   
   switch (opcao)
   {
       case 1:
            printf("Selecionou a Opcao 1");
            break;
       case 2:
            printf("Selecionou a Opcao 2");
            break;
       case 3:
            printf("Selecionou a Opcao 3");
            break;
       case 4:
            printf("Selecionou a Opcao 4");
            break;
       default:
            printf("Voce Digitou Uma Opcao Invalida!");
   }
     printf("\n\n");
     system("pause");
}
