#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int teste;
    printf("Digite um numero: ");
    scanf("%d",&teste);
    
    if (teste >= 10)
    {
              printf("maior ou igual a 10");
    }
    else
    {
              printf("menor q 10");
    }
    system("pause");          
}
