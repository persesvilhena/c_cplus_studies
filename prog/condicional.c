#include <stdio.h>

int main ()
{
	int num;
	
	printf ("Voce e bom em advinhacao?\n\n");
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	
	if (num>10)//aqui não se coloca chaves porque há somente uma linha de instrução a seguir
   		printf ("\nO numero e maior que 10\n");
   		
	if (num==10)
        {//coloca-se chaves quando há mais de uma linha de instrução como nesse caso
        	printf ("\nVoce acertou!\n");
        	printf ("O numero e igual a 10\n");
        }//aqui fecha-se as chaves
        
	if (num<10)
   		printf ("\nO numero e menor que 10\n");
	
    system ("pause");
	return(0);
}
