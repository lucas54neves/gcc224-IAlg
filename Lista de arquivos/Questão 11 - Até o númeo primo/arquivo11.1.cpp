#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	string entrada;
	cin >> entrada;
	ifstream arquivoEntrada(entrada.c_str());
	if (arquivoEntrada)
	{
		int resto, n;
		int primeiroMenor, segundoMenor, soma=0;
		arquivoEntrada >> primeiroMenor;
		arquivoEntrada >> segundoMenor;
		bool primo = false;
		while (primo==false)
		{
			arquivoEntrada >> n;
			int d = 2;
			while (d <= n / 2)
			{
				resto = n % d;
				if (resto != 0)
				{
					primo = true;
				} else
				{
					primo = false;
				}
				
				d = d + 1;
			}
			if (n < primeiroMenor)
			{
				soma = soma + segundoMenor;
				segundoMenor = primeiroMenor;
				primeiroMenor = n;
			}
			else if (n < segundoMenor)
			{
				soma = soma + segundoMenor;
				segundoMenor = n;
			}
		}
		string saida;
		arquivoEntrada >> saida;
		ofstream arquivoSaida (saida.c_str());
		arquivoSaida << primeiroMenor << endl;
		arquivoSaida << segundoMenor << endl;
		arquivoSaida << soma << endl;
	}
	return 0;
}
