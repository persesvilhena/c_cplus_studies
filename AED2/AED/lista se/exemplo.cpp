#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

main( )
{
lista L;
create(&L);
insert(&L,12);
insert(&L,320);
insert(&L,197);
insert(&L,26);
imprime(L);
remover(&L,320);
imprime(L);
}
