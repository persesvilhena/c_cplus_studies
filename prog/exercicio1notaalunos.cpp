#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, nota, contaprov, contreprov,w;
    contaprov = 0;
    contreprov = 0;

    
    for(w=0;w<10;w++)
    {
        printf("Digite o Codigo Aluno:");
        scanf("%d",&codigo);
        printf("Digite a Nota do Aluno:");
        scanf("%d",&nota);
    
        if(nota >= 6)
        {
            printf("\n Aluno Aprovado \n\n");
            contaprov = contaprov + 1;
                    
        }
        else
        {
            printf("\n Aluno Reprovado \n\n");
            contreprov = contreprov + 1;            
        }
        
        
    }

     printf("\n A Quantidade de Alunos Aprovados e: %d", contaprov);
     printf("\n A Quantidade de Alunos Reprovados e: %d", contreprov);
     printf("\n\n");
     system("pause");

}
