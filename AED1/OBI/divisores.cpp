#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0, n=0, c=0;
    scanf("%d", &n);
    for(x=1;x<=n;x++){
        if((n % x) == 0){
            c++;
        }
    }
    printf("%d\n", c);
    system("pause");
}
