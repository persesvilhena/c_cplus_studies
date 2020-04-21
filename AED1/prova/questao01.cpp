#include <stdio.h>
#include <stdlib.h>

main(){
    double renda_pessoal=1, renda_familiar, gasto_alimentacao, gasto_outros;
    int cont_go=0, cont_re=0, cont=0;
    while(renda_pessoal != 0){
        printf("\nRenda pessoal: ");
        scanf("%lf", &renda_pessoal);
        
        if(renda_pessoal != 0){
            printf("Renda Familiar: ");
            scanf("%lf", &renda_familiar);
            printf("Gasto com alimentacao: ");
            scanf("%lf", &gasto_alimentacao);
            printf("Gasto com outros despesas: ");
            scanf("%lf", &gasto_outros);
            if(gasto_outros > 200){
                cont_go++;
            }
            if(renda_pessoal > renda_familiar){
                cont_re++;
            }
            printf("\nPorcentagem gasta com alimentacao em relacao a renda pessoal: %.2lf%%", (gasto_alimentacao / renda_pessoal) * 100.0);
            printf("\nPorcentagem gasta com outras despesas em relacao a renda pessoal: %.2lf%%", (gasto_outros / renda_pessoal) * 100.0);
            printf("\nPorcentagem gasta com alimentacao em relacao a renda familiar: %.2lf%%", (gasto_alimentacao / renda_familiar) * 100.0);
            printf("\nPorcentagem gasta com outras despesas em relacao a renda familiar: %.2lf%%", (gasto_outros / renda_familiar) * 100.0);
            cont++;
        }
    }
    printf("\n\nPorcentagem de alunos com outros gasto maior que 200 reais: %.0f%%", ((float)cont_go / cont) * 100.0);
    printf("\nQuantidade de alunos com renda pessoal maior que renda familiar: %d\n", cont_re);
    system("pause");
}
    
