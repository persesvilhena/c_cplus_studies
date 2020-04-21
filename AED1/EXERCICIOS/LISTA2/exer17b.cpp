#include <stdio.h>
#include <stdlib.h>
void in(float salhr, float hrtrab){
    float sal = 540, salini;
    salini = salhr * hrtrab;
       printf("\nvalor da hora trabalhada %.2f", salhr);
       printf("\nsalario incial: %.2f", salini);
       if(salini < 300){
           printf("\nauxilio alimentacao %.2f", salini * 0.2);
           printf("\nsalario final %.2f", salini * 1.2);
       }else{
             if(salini > 300 && salini < 600){
                 printf("\nauxilio alimentacao %.2f", salini * 0.15);
                 printf("\nsalario final %.2f", salini * 1.15);
             }else{
                 printf("\nauxilio alimentacao %.2f", salini * 0.05);
                 printf("\nsalario final %.2f", salini * 1.05);
             }
       }
}
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
                               in(salhr, hrtrab);
                          break;
                          case 1:
                               salhr = sal * 0.1;
                               in(salhr, hrtrab);
                          break;
                          case 2:
                               salhr = sal * 0.1;
                               in(salhr, hrtrab);
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
                               in(salhr, hrtrab);
                          break;
                          case 1:
                               salhr = sal * 0.15;
                               in(salhr, hrtrab);
                          break;
                          case 2:
                               salhr = sal * 0.15;
                               in(salhr, hrtrab);
                          break;
                          default:
                               printf("turno errado");
                   }
              break;
              default:
                   printf("categoria errada");
       }
       printf("\ncodigo: %i", cod);


       printf("\n\n\n");
      system("pause");


      

}      

