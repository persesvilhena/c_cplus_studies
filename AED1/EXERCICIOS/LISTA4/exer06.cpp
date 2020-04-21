#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x = 1, contp = 0, conti = 0, medi = 0, medp = 0, menor = 999999, maior = 0;
    while(x >= 0){
        printf("digite um numero: ");
        scanf("%d", &x);
        if(x >= 0){
            if((x % 2) == 0){
                medp = medp + x;
                contp++;
                if(x > maior){
                    maior = x;
                }
            }else{
                medi = medi + x;
                conti++;
                if(x < menor){
                    menor = x;
                }
            }
        }
    }
    printf("\nMedia par: %.2f", (float)medp / contp);
    printf("\nMedia impar: %.2f", (float)medi / conti);
    printf("\nMaior par: %d", maior);
    printf("\nMenor impar: %d", menor);
    system("pause");
    
}
