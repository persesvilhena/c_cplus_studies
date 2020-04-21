#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    int qtd=0, x=0, pt=0, i=0;
    int e[999] = {0}, d[999] = {0};
    char c[999], res[999];
    scanf("%d", &qtd);
    fflush(stdin);
    
    for(x=0;x<qtd;x++){
        scanf("%d", &e[x]);
        fflush(stdin);
        scanf("%c", &c[x]);
        fflush(stdin);
        scanf("%d", &d[x]);
        fflush(stdin);
    }
    while(pt != 1){
        if(x == qtd){
             x=0;
        }
        if(pt != 1){
            if(e[x] == pt){
                res[i] = c[x];
                //printf("%c", c[x]);
                i++;
                pt = d[x];
            }
            x++;
        }
    }
    printf("%s", res);
    system("pause");
}
