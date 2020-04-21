#include <stdio.h>
#include <stdlib.h>

main(){
    double area, valhc, val;
    int op, cod;
    printf("escolha:\n");
    printf("1 - pulverizacao contra erva daninha.\n");
    printf("2 - pulverizacao contra gafanhotos.\n");
    printf("3 - pulverizacao contra broca.\n");
    printf("4 - pulverizacao contra todos acima.\n");
    scanf("%d", &op);
    printf("Area em hectares:");
    scanf("%lf", &area);
    printf("Codigo da fazenda:");
    scanf("%d", &cod);
    switch(op){
        case 1:
            valhc = 5;
        break;
        case 2:
            valhc = 10;
        break;
        case 3:
            valhc = 15;
        break;
        case 4:
            valhc = 25;
        break;
        default:
            printf("problema na escolha do tipo.");
    }
    if(area > 300){
        val = (valhc * area) * 0.95;
        if(val > 1750){
            val = ((val - 1750) * 0.9) + 1750;
        }
    }else{
        val = valhc * area;
        if(val > 1750){
            val = ((val - 1750) * 0.9) + 1750;
        }
    }
    printf("Valor: %.2lf\n", val);
    system("pause");
}
