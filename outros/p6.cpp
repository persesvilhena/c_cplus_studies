#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, y;
    printf("Numero: ");
    scanf("%d", &num);

    for (y=0;y<10;y++)
    {
        printf("\n%d", y);
        printf(" x %d", num);
        printf(" : %d", num * y);
    }
    printf("\n\n\n");
    system("pause");
}
