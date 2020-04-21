#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0, y=0, n=0, m=0, cont=0, cont2=0;
    int l1[999] = {0}, l2[999] = {0};
    scanf("%d", &n);
    scanf("%d", &m);
    for(x=0;x<m;x++){
        scanf("%d", &l1[x]);
        scanf("%d", &l2[x]);
    }
    for(x=0;x<n;x++){
        cont=0;
        for(y=0;y<m;y++){
            if(x == l1[y] || x == l2[y]){
                 cont++;
            }
        }
        if(cont > 2){
            cont2++;
        }
    }
    printf("%d", cont2);
    system("pause");
}
