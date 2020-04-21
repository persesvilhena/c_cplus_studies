#include <stdio.h>
#include <stdlib.h>


main(){
       int tamanho,velocidade,velmb,temp,c,seg,s;
       //int seg,c;
       printf("tamanho do arquivo MB : \n");
       scanf("%d", &tamanho);
       printf("velocidade Mbps : \n");
       scanf("%d", &velocidade);

       velmb = velocidade / 8;
       temp = (tamanho / velmb) / 60;
       seg = (tamanho / velmb) % 60;



       printf("\ntempo em min: %.d", temp);
       printf(" e %.d", seg);
       printf(" segundos");





       printf("\n\n");
       system("pause");
}
