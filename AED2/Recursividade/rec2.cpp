#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
int i; int f=1;
if(n==0)
f=1;
else
for (i=1;i<=n;i++)
f=f*i;
return(f);
}
main(){
    int x=0;
    x = fatorial(4);
    printf("%d", x);
    system("pause");
}
