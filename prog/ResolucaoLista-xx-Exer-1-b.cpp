#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numalunos=0, contacima6=0, x;
    float nota=0.0, media=0.0, somatn=0.0;
    
    printf("Digite o Número de A Alunos: ");
    scanf("%d",&numalunos);
    
    for(x=0;x < numalunos; x++)
    {
        printf("Digite a Nota: ");
        scanf("%f",&nota);
        
        somatn = somatn + nota; // Soma Todas as Notas
        
        if(nota > 6.0)
           contacima6 = contacima6 + 1;
          
    }
          
     printf("\n O Total da Notas e: %.1f", somatn);
     printf("\n A Media de Todas as Notas e: %.1f", somatn/numalunos);
     printf("\n Numero Alunos Com Nota Acima de 6: %d", contacima6);
     printf("\n\n");

      if(contacima6 == 0)
      {
           printf("\n\n Nenhum Aluno Tirou Nota Acima de 6");     
           printf("\n\n");
      }

     system("pause");
    
}
