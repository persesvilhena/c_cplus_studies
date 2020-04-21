#include <iostream>
using namespace std;

char frase[50], nova[50];
int x,espacos,contador;

int main()
{
	cout << "Digite sua frase: ";
	cin.getline(frase,50);

	contador=0;
	espacos=0;
	for(x=0;x<=strlen(frase);x++)
		if(frase[x]!=' ') nova[contador++]=frase[x];
		else espacos++;
	nova[contador]=0;

	cout << "Frase sem espaços: " << nova << "\n";
	cout << "Espaços encontrados: " << espacos << "\n";
	system("pause");
}
