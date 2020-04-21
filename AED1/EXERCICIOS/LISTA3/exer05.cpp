#include <stdio.h>
#include <stdlib.h>

main(){
    int x, qtd = 0;
    double valor = 0, soma = 0;
    printf("Alunos na turma: ");
    scanf("%d", &qtd);
    for(x=0;x<qtd;x++){
        scanf("%lf", &valor);
        soma = soma + valor;
    }
    printf("media: %.2lf\n", soma / qtd);
    system("pause");
}
