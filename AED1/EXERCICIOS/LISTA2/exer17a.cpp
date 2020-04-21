#include <stdio.h>
#include <stdlib.h>


main(){
       float hrtrab, sal = 540, salini, salhr;
       int cod, turno, cat;
       printf("codigo do funcionario: ");
       scanf("%d", &cod);
       printf("numero de horas trabalhadas: ");
       scanf("%f", &hrtrab);
       printf("categoria: ");
       scanf("%d", &cat);
       switch (cat){
              case 10:
                   printf("turno:\n");
                   scanf("%d", &turno);
                   switch (turno){
                          case 3:
                               salhr = sal * 0.13;
                               #include <D:\aed\pl1>
                          break;
                          case 1:
                               salhr = sal * 0.1;
                               #include <D:\aed\pl1>
                          break;
                          case 2:
                               salhr = sal * 0.1;
                               #include <D:\aed\pl1>
                          break;
                          default:
                               printf("turno errado");
                   }
              break;
              case 20:
                   printf("turno:\n");
                   scanf("%d", &turno);
                   switch (turno){
                          case 3:
                               salhr = sal * 0.18;
                               #include <D:\aed\pl1>
                          break;
                          case 1:
                               salhr = sal * 0.15;
                               #include <D:\aed\pl1>
                          break;
                          case 2:
                               salhr = sal * 0.15;
                               #include <D:\aed\pl1>
                          break;
                          default:
                               printf("turno errado");
                   }
              break;
              default:
                   printf("categoria errada");
       }

       printf("\n\n\n");
       system("pause");
       
}      
