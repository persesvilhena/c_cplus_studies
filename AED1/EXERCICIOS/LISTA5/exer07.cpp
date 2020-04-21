#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 0, idade = 0, sexo = 0, totid = 0, c1 = 0, c2 = 0;
    do{
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo: (0-masculino, 1-feminino)");
        scanf("%d", &sexo);
        if(idade > 0){
            x++;
            totid = totid + idade;
            if(sexo == 1 && idade >= 30 && idade <= 45){
                c1++;
            }else if(sexo == 0){
                c2++;
            }
        }
    }while(idade > 0);
    printf("\nMedia das idades: %d", totid / x);
    printf("\nTotal de pessoas do sexo feminino com idade entre 30-45: %d", c1);
    printf("\nNúmero total de pessoas do sexo masculino: %d\n", c2);
    system("pause");
}
