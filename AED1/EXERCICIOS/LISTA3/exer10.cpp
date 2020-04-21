#include <stdio.h>
#include <stdlib.h>

main(){
    int x, idade, nota, id_ruim = 0, maior_id_pess = 0, maior_id_otimo = 0, dif = 0;
    float qtd_otimo = 0, qtd_ruim = 0, qtd_pess = 0, qtd_bom = 0, qtd_reg = 0;
    float teste, per_bomreg, per_regbom, per_pess;
    for(x = 0; x < 10; x++){
        printf("idade:");
        scanf("%d", &idade);
        printf("nota:");
        scanf("%d", &nota);
        if(nota == 1){
            qtd_otimo++;
            if(idade > maior_id_otimo){
                maior_id_otimo = idade;
            }
        }
        if(nota == 2){
            qtd_bom++;
        }
        if(nota == 3){
            qtd_reg++;
        }
        if(nota == 4){
            id_ruim = id_ruim + idade;
            qtd_ruim++;
        }
        if(nota == 5){
            qtd_pess++;
            if(idade > maior_id_pess){
                maior_id_pess = idade;
            }
        }
    }
    per_regbom = (qtd_reg / (qtd_bom + qtd_reg))*100;
    per_bomreg = (qtd_bom / (qtd_bom + qtd_reg))*100;
    per_pess = qtd_pess / (qtd_bom + qtd_reg + qtd_pess + qtd_ruim + qtd_otimo)*100;
    printf("\nQuantidade de respostas otimo: %.0f", qtd_otimo);
    printf("\nPercentual bom em relacao ao regular: %.0f%%", per_bomreg);
    printf("\nPercentual regular em relacao ao bom: %.0f%%", per_regbom);
    printf("\nMedia da idade das pessoas q responderam ruim: %.0f", id_ruim / qtd_ruim);
    printf("\nPercentual que responderam pessimo: %.0f%%", per_pess);
    if(maior_id_pess > maior_id_otimo){
        dif = maior_id_pess - maior_id_otimo;
    }else{
        dif = maior_id_otimo - maior_id_pess;
    }
    printf("\nMaior idade que respondeu pessimo: %d", maior_id_pess);
    printf("\nDiferenca da idade entra maior pessimo e maior otimo: %d", dif);
    system("pause");
    


}
