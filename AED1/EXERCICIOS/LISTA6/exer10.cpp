#include <stdlib.h>
#include <stdio.h>

main(){
    int x=0, i=0, res[8], r=0, c=0, ap=0, qtd_alu=0;
    float med[10];
    for(x=0; x<8; x++){
        printf("Questao %d: ", x);
        scanf("%d", &res[x]);
    }
	qtd_alu = 10;
    for(x=0; x<qtd_alu; x++){
        c = 0;
        printf("\naluno %d\n", x);
        for(i=0; i<8; i++){
            printf("Resposta %d: ", i);
            scanf("%d", &r);
            if(res[i] == r){
                c++;
            }
        }
		printf("\n%d", c);
        med[x] = (float)c / 0.8;
        if(med[x] >= 6.0){
            ap++;
        }
    }
    for(x=0; x<qtd_alu; x++){
        printf("\nAluno %d, Nota: %.1f", x, med[x]);
    }
    printf("\nPorcentagem de aprovacao: %.0f%%\n", ((float)ap/(float)qtd_alu)*100.0);
    system("pause");
}
