#include <stdio.h>
#include <stdlib.h>

main(){
    int nas_dia, nas_mes, nas_ano, atu_dia, atu_mes, atu_ano, idade;
    printf("Dia do nascimento: ");
    scanf("%d", &nas_dia);  
    printf("Mes do nascimento: ");
    scanf("%d", &nas_mes);
    printf("Ano do nascimento: ");
    scanf("%d", &nas_ano);
    printf("Dia atual: ");
    scanf("%d", &atu_dia);  
    printf("Mes atual: ");
    scanf("%d", &atu_mes);
    printf("Ano atual: ");
    scanf("%d", &atu_ano);
    if((atu_dia >= nas_dia) && (atu_mes >= nas_mes)){
        idade = atu_ano - nas_ano;
    }else{
        idade = atu_ano - nas_ano - 1;
    }
    printf("Idade: %d\n", idade);
    system("pause");
}
