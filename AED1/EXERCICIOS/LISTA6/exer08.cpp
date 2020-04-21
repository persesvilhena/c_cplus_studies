#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 0, cap = 0, cre = 0;
    float prova1[5], prova2[5], medtot = 0;
    char nome[5][50];
    for(x=0; x<5; x++){
        printf("Nome: ");
        gets(nome[x]);
        fflush(stdin);
        printf("prova 1: ");
        scanf("%f", &prova1[x]);
        fflush(stdin);
        printf("prova 2: ");
        scanf("%f", &prova2[x]);
        fflush(stdin);
    }
    for(x=0; x<5; x++){
        printf("\nNome do aluno: ");
        puts(nome[x]);
        printf("Prova 1: %.1f", prova1[x]);
        printf("\nProva 2: %.1f", prova2[x]);
        printf("\nMedia: %.1f", (prova1[x] + prova2[x]) / 2.0);
        medtot = medtot + ((prova1[x] + prova2[x]) / 2.0);
        if(((prova1[x] + prova2[x]) / 2.0) >= 6.0){
            printf("\nSituacao: Aprovado\n\n");
            cap++;
        }else{
            printf("\nSituacao: Reprovado\n\n");
            cre++;
        }
    }
    printf("\n\nMedia da classe: %.1f", medtot / 5.0);
    printf("\nQuantide de aprovados: %d", cap);
    printf("\nQuantida de reprovados: %d\n\n", cre);
    system("pause");

}
