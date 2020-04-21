#include <stdio.h>
#include <stdlib.h>


main(){
       int placa, pf;
       printf("\nPLACA\n");
       scanf("%d", &placa);
       pf = placa % 10;
       switch(pf){
       	   case 1:
       	   	   printf("\nmes de emplacamento: JANEIRO\n");
       	   break;
       	   case 2:
       	   	   printf("\nmes de emplacamento: FEVEREIRO\n");
       	   break;
       	   case 3:
       	   	   printf("\nmes de emplacamento: MARCO\n");
       	   break;
       	   case 4:
       	   	   printf("\nmes de emplacamento: ABRIL\n");
       	   break;
       	   case 5:
       	   	   printf("\nmes de emplacamento: MAIO\n");
       	   break;
       	   case 6:
       	   	   printf("\nmes de emplacamento: JUNHO\n");
       	   break;
       	   case 7:
       	   	   printf("\nmes de emplacamento: JULHO\n");
       	   break;
       	   case 8:
       	   	   printf("\nmes de emplacamento: AGOSTO\n");
       	   break;
       	   case 9:
       	   	   printf("\nmes de emplacamento: SETEMBRO\n");
       	   break;
       	   case 0:
       	   	   printf("\nmes de emplacamento: OUTUBRO\n");
       	   break;
       }
		
	   
       printf("\n\n\n");
       system("pause");
       
}      
