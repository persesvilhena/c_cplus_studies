#include <stdio.h>
#include <stdlib.h>

main(){
    float salmin, sal, desc, aliq, nmin, imposto[10] = {0};
    int ndepe[10] = {0}, x = 0, cpf[10] = {0};
    printf("salario minimo: ");
    scanf("%f", &salmin);
    for (x=0;x<3;x++){
        printf("\n\nCPF: ");
        scanf("%d", &cpf[x]);
        printf("Numero de dependentes: ");
        scanf("%d", &ndepe[x]);
        printf("Salario mensal: ");
        scanf("%f", &sal);
        desc = sal * ((ndepe[x] * 5)/100);
        nmin = (sal - desc) / salmin;
        if(nmin < 2){
            aliq = 0;
        }else{
            if(nmin >= 2 && nmin < 3){
                aliq = 5;
            }else{
                if(nmin >= 3 && nmin < 5){
                    aliq = 10;
                }else{
                    if(nmin >= 5 && nmin < 7){
                        aliq = 15;
                    }else{
                        aliq = 20;
                    }
                }
            }
        }
        imposto[x] = sal * (aliq / 100);
    }
    printf("*********************************************************\n");
    for(x=0;x<3;x++){
        printf("\nCPF:   %d", cpf[x]);
        printf("\nNumero de dependentes:   %d", ndepe[x]);
        printf("\nImposto a ser pago:   %.2f", imposto[x]);
        printf("\n------------------------------------------------------------\n");
    }
    system("pause");
    


}
