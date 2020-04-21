#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char nome[100];
	
	printf ("Digite o seu nome: ");
	gets (nome);
	printf ("Ola %s!\n",nome);//observe o "%s" de string
	system("pause");
    return(0);
}
