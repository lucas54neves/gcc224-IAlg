#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool familia (int n)
{
	bool achou=true;
	for (int i = 1; achou == true; i++)
	{
		if (n % i == 0)
		{
			achou=false;
		}
	}
	return achou;
}
int main ()
{
	char nomeEntrada[20], nomeSaida[20];
	int num, soma = 0;
	cin >> nomeEntrada;
	ifstream arquivoEntrada (nomeEntrada);
	if (arquivoEntrada)
	{
		while (!arquivoEntrada.eof())
		{
			arquivoEntrada >> num;
			if (familia(num)==true)
			{
				arquivoEntrada >> nomeSaida;
			}
			else
			{
				soma = soma + num;
			}
		}
	}
	arquivoEntrada.close();
	ofstream arquivoSaida (nomeSaida);
	if (arquivoSaida)
	{
		arquivoSaida << soma;
	}
	arquivoSaida.close();
	return 0;
}
