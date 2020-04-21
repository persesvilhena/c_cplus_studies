#include <iostream>
using namespace std;

char vogais[]="aeiou";
char consoantes[]="bcdfghjklmnpqrstvwxyz";
int contador,x,y;
char frase[50], frase_vogais[30], frase_consoantes[30];

int main()
{
	//receber a frase
	cout << "Digite sua frase:";
	cin.getline(frase,50);

	//separar vogais
	contador=0;
	for (x=0;x<=strlen(frase);x++)
		for (y=0;y<=strlen(vogais);y++)
			if (frase[x]==vogais[y] && frase[x]!=0) frase_vogais[contador++]=frase[x];
	frase_vogais[++contador]=0;

	//contar consoantes
	contador=0;
	for (x=0;x<=strlen(frase);x++)
		for (y=0;y<=strlen(consoantes);y++)
			if (frase[x]==consoantes[y] && frase[x]!=0) frase_consoantes[contador++]=frase[x];
	frase_consoantes[++contador]=0;

	//exibir vogais
	cout << "Vogais separadas: ";
	for(x=0;x<=strlen(frase_vogais);x++) cout << frase_vogais[x];
	cout << "\n";

	//exibir consoantes
	cout << "Consoantes separadas: ";
	for(x=0;x<=strlen(frase_consoantes);x++) cout << frase_consoantes[x];
	cout << "\n";

	system("pause");
}
