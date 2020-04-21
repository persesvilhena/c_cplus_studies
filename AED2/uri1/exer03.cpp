//////exercicio 1410

#include <stdio.h>
#include <stdlib.h>

void ordena(int vetor[], int n){
    int aux, x, y;
    for(x=0; x<n-1; x++){
        for(y=n-1; y>x; y--){
            if(vetor[y] < vetor[y-1]){
                aux = vetor[y];
                vetor[y] = vetor[y-1];
                vetor[y-1] = aux;
            }
        }
    }
}

main(){
    int a=1, d=0, x=0, y=0, cont=0, cont1=0;
    int vetora[11], vetord[11];
    //char res[100];
    while(a != 0){
        scanf("%d", &a);
        scanf("%d", &d);
        if(a != 0){
            for(x=0;x<a;x++){
                scanf("%d", &vetora[x]);
            }
            for(x=0;x<d;x++){
                scanf("%d", &vetord[x]);
            }
            ordena(vetora, a);
            ordena(vetord, d);
            if(vetora[0] >= vetord[1]){
                /*res[cont] = 'N';
                cont++;*/
                printf("N\n");
            }else{
                /*res[cont] = 'Y';
                cont++;*/
                printf("Y\n");
            }
            //cont1++;
        }
    }
    /*for(x=0;x<cont1;x++){
        printf("%c\n", res[x]);
    }*/
    system("pause");
}
