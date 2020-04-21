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
                               salini = salhr * hrtrab;
                               #include <F:\aed1.1\perseslib>
                          break;
                          case 1:
                               salhr = sal * 0.1;
                               salini = salhr * hrtrab;
                               #include <perseslib.h>
                          break;
                          case 2:
                               salhr = sal * 0.1;
                               salini = salhr * hrtrab;
                               #include <perseslib.h>
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
                               salini = salhr * hrtrab;
                               #include <perseslib.h>
                          break;
                          case 1:
                               salhr = sal * 0.15;
                               salini = salhr * hrtrab;
                               #include <perseslib.h>
                          break;
                          case 2:
                               salhr = sal * 0.15;
                               salini = salhr * hrtrab;
                               #include <perseslib.h>
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
