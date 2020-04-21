#include <stdio.h>
#include <stdlib.h>


main()
{
short int x, *p1, *p2, *p3, *p4;
p1 = &x;
p2 = p1+1;
p3 = p2+1;
p4 = p3+1;
printf("%p %p %p %p",p1,p2,p3,p4);
system("pause");
}
