#include <stdio.h>
#include <stdlib.h>

main(){
    int x, idade, a = 0, b = 0, c = 0, d = 0;
    float peso, altura;
    char cor_olhos, cor_cabelo;
    for (x=1;x<3;x++){
        printf("\nIdade: ");
        scanf("%d", &idade);
        printf("\nPeso: ");
        scanf("%f", &peso);
        printf("\nAltura: ");
        scanf("%f", &altura);
        printf("\nCor dos olhos: ");
        scanf("%c ", &cor_olhos);
        printf("\nCor dos cabelos: ");
        scanf("%c ", &cor_cabelo);
        if(idade > 50 && peso < 60){
            a++;
        }
        if(altura < 1.5){
            b = b + idade;
        }
        if(cor_olhos == 'a'){
            c++;
        }else if(cor_cabelo = 'r'){
            d++;
        }
        printf("t1: %d\n", idade);
        printf("t1: %f\n", peso);
        printf("t1: %f\n", altura);
        printf("t1: %c\n", cor_olhos);
        printf("t1: %c\n", cor_cabelo);
    }
    system("pause");
    system("cls");
    system("pause");
}
