printf("turno:\n");
                   scanf("%d", &turno);
                   switch (turno){
                          case 3:
                               salhr = sal * 0.13;
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
                          break;
                          case 1:
                               salhr = sal * 0.1;
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
                          break;
                          case 2:
                               salhr = sal * 0.1;
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
                          break;
                          default:
                               printf("turno errado");
