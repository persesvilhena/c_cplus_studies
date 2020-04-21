#include <stdio.h>
#include <stdlib.h>


main()
{
int x, y;
int *px, *py;
x = 100;
px = &x;
py = px;
y = *py;
printf("%d %d %d %d", *px, *py, px, py);
system("pause");
}
