#include <stdlib.h>
#include <stdio.h>

main(){
    int i = 100, pr = 0, z = 0, c = 0, x[10] = {0};
    while(pr < 10){
        i++;
		c=0;
        for(z=1; z<=i; z++){
            if((i % z) == 0){
                c++;
            }
        }
        if(c == 2){
            x[pr] = i;
            pr++;
        }
    }
    for(z=0; z<10; z++){
        printf("%d\n", x[z]);
    }
    system("pause");

        

}
