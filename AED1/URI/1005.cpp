#include <stdio.h>
#include <stdlib.h>

main(){
       double a, b, c, media;
       scanf("%lf", &a);
       scanf("%lf", &b);
       scanf("%lf", &c);
       media = ((a * 2) + (b * 3) + (c * 5));
       printf("MEDIA = %.1lf\n", media / 10);
       system("pause");
}
