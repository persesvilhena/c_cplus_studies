#include <stdio.h>
#include <stdlib.h>


main(){
       float matriz[2][2]; 
       int x, y;
       for(x = 0; x<2; x++){
             for(y = 0; y<2; y++){
                          printf("matriz %d , %d : \n", x , y);
                          scanf("%f", &matriz[x][y]);
             }
       }
       
       printf("\nDeterminante: %.2f", (matriz[0][0] * matriz[1][1]) - (matriz[1][0] * matriz[0][1]));


       printf("\n\n");
       system("pause");
}
