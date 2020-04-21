#include <stdio.h>
#include <stdlib.h>


main(){
       int tamanho,velocidade,velmb,temp,seg;
       printf("tamanho do arquivo MB : \n");
       scanf("%d", &tamanho);
       printf("velocidade Mbps : \n");
       scanf("%d", &velocidade);

       velmb = velocidade / 8;
       temp = (tamanho / velmb) / 60;
       seg = (tamanho / velmb) % 60;



       printf("\ntempo: %.d min e %.d segundos", temp,seg);






       printf("\n\n");
       system("pause");
}
