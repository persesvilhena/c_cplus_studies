#include <stdio.h>
#include <stdlib.h>

float reajuste (float sal, float rea)
{
      rea = rea / 100;
      return ((sal * rea) + sal);
}

int main()
{
    float s=0, r=0, f=0;
    printf("Salario: ");
    scanf("%f", &s);
    printf("Reajuste: ");
    scanf("%f", &r);
    f = reajuste(s,r);
    printf("\n\nSalario final: %.2f", f);
    system("pause");
}
