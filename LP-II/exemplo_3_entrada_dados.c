#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //este programa calcula a idade de uma pessoa
    float ano_nasc,ano_atual,idade;

    printf("Que ano voce nasceu?\n");
    scanf("%f",&ano_nasc);
     
    printf("Em que ano estamos?\n");
    scanf("%f",&ano_atual);
     
    idade = ano_atual - ano_nasc;
     
    printf("\nVoce tem %.1f anos de vida!! Viva!!\n",idade);
    system("pause"); 	
    return 0;
}
