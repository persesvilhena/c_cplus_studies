#include <stdio.h>

int main ()
{
	int num;
	
	printf ("Voce e bom em advinhacao?\n\n");
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	
	if (num>10)//aqui n�o se coloca chaves porque h� somente uma linha de instru��o a seguir
   		printf ("\nO numero e maior que 10\n");
   		
	if (num==10)
        {//coloca-se chaves quando h� mais de uma linha de instru��o como nesse caso
        	printf ("\nVoce acertou!\n");
        	printf ("O numero e igual a 10\n");
        }//aqui fecha-se as chaves
        
	if (num<10)
   		printf ("\nO numero e menor que 10\n");
	
    system ("pause");
	return(0);
}
