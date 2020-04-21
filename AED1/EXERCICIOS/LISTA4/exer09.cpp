#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int cn = 1, pes = 0, pescn4 = 0, pescn5 = 0, pescn7 = 0, pescn12 = 0, total = 0;
    while (cn != 0){
        printf("canal:");
        scanf("%d", &cn);
        printf("pessoas:");
        scanf("%d", &pes);
        if(cn == 4){
            pescn4 = pescn4 + pes;
        }else{
            if(cn == 5){
                pescn5 = pescn5 + pes;
            }else{
                if(cn == 7){
                    pescn7 = pescn7 + pes;
                }else{
                    if(cn == 12){
                        pescn12 = pescn12 + pes;
                    }
                }
            }
        }
    }
    total = pescn4 + pescn5 + pescn7 + pescn12;
    printf("\npescn4: %.0f%%", ((float)pescn4 / total) * 100.0);
    printf("\npescn5: %.0f%%", ((float)pescn5 / total) * 100.0);
    printf("\npescn7: %.0f%%", ((float)pescn7 / total) * 100.0);
    printf("\npescn12: %.0f%%", ((float)pescn12 / total) * 100.0);
    system("pause");
}
