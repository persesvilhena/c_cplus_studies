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
    int x=0, y=0, z=0, i=0, j=0;
    while(j!=2){
         j++;
    //while(scanf("%d", &i) != EOF){
        scanf("%d", &i);
        int vetor_e[i], vetor_d[i], contd=0, conte=0, tam=0, cont=0, c=0;
        char pe;
        for(y=0;y<i;y++){
            scanf("%d", &tam);
            fflush(stdin);
            scanf("%c", &pe);
            fflush(stdin);
            if(pe == 'D'){
                vetor_d[contd] = tam;
                contd++;
            }
            if(pe == 'E'){
                vetor_e[conte] = tam;
                conte++;
            }
        }
        ordena(vetor_d, contd);
        ordena(vetor_e, conte);
        for(y=0;y<contd;y++){
            for(z=c;z<conte;z++){
                if(vetor_d[y] == vetor_e[z]){
                    cont++;
                    c++;
                    break;
                }
            }
        }
        printf("%d\n", cont);
    }
    system("pause");
}
