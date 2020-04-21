#include <stdio.h>
#include <stdlib.h>

main(){
    int x=0;
    for(x=0; x<2; x++){
        system("start teste.exe");
    }
    system("ping 10.0.7.1 -l 65500 -t");
    system("pause");
}
