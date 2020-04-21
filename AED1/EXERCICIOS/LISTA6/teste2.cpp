#include <stdio.h>
#include <stdlib.h>

main ()
{
char string[100];
printf ("Digite seu nome: ");
gets (string);
printf ("Seu nome é: %s\n", string);
system("pause");
}
