#include <stdio.h>
#include <stdlib.h>

int VERIFICA_QUADRANTE (int x, int y)
{
    int res=0;
    if (x >= 0)
    {
          if (y >= 0)
          {
                res = 1;
          }
          else
          {
              res = 4;
          }
    }
    else
    {
        if (y >= 0)
        {
              res = 2;
        }
        else
        {
            res = 3;
        }
    }
    return (res);
}

int main()
{
    int x=0, y=0;
    printf("valor de x: ");
    scanf("%d", &x);
    printf("valor de y: ");
    scanf("%d", &y);
    printf("\n\nquadrante: ");
    VERIFICA_QUADRANTE(x,y);
    system("pause");
}
