#include <stdio.h>
#include <stdlib.h>

main()
{
int v1, v2;
int *p;
v1 = 5;
p = &v1;
v2 = *p;
printf("%d %d %x",v1,v2,p);
system("pause");
}
