#include <stdio.h>
#include <stdlib.h>

int misterio(int x, int y)
{
int z=0, w=0;
for(z=0;z<x;z++){
    w = w + y;
}
return w;
}
main(){
    int x=0;
    x = misterio(4,4);
    printf("%d", x);
    system("pause");
}
