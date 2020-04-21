#include <stdio.h>
#include <stdlib.h>


main()
{
char a, b, *p;
b = 'c';
p = &a;
*p = b;
printf("%c %c %c %x",a,b,*p,p);
system("pause");
}
