#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totjose=0,totmaria=0,totmanoel=0,totpedro=0;
    int totbranco=0,totnulo=0,totgeral=0,x,voto;
    
    //totjose=0;
    //totmaria=0;
    
    printf("\n\n\n Sistema Controle Eleitoral \n\n\n");
        
    for (x=0;x<3;x++)
    {
        printf("1-Jose");
        printf("\n 2-Maria");
        printf("\n 3-Manoel");
        printf("\n 4-Pedro");
        printf("\n 0-Branco");
        printf("\n Outros Numeros - Voto Nulo");
        printf("\n -1-Sair");
        printf("\n Digite Seu Voto");
        scanf("%d",&voto);
        
        if (voto == 1)
        {
           totjose = totjose + 1;
        }
        
        if (voto == 2)
        {
           totmaria = totmaria + 1;
        }

        if (voto == 3)
        {
           totmanoel = totmanoel + 1;
        }

        if (voto == 4)
        {
           totpedro = totpedro + 1;
        }

        if (voto == 0)
        {
           totbranco = totbranco + 1;
        }

        if(voto > 4)
        {
           totnulo = totnulo + 1;
        }
    }
        
        printf("\n Total de Votos do Jose: %d", totjose);
        printf("\n Total de Votos do Maria: %d", totmaria);
        printf("\n Total de Votos do Manoel: %d", totmanoel);
        printf("\n Total de Votos do Pedro: %d", totpedro);
        printf("\n Total de Votos Brancos: %d", totbranco);
        printf("\n Total de Votos Nulos: %d", totnulo);

        totgeral = totjose + totmaria + totmanoel + totpedro + totbranco + totnulo;

        printf("\n Total Geral de Votos: %d", totgeral);
        printf("\n\n\n");
                        
        system("pause");
   
}
