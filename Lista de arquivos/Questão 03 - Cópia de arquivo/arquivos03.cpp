#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	string nomeEntrada, nomeSaida;
	cin >> nomeEntrada >> nomeSaida;
	ifstream entrada(nomeEntrada.c_str());
	ofstream saida(nomeSaida.c_str());
	string aux;
	while (entrada >> aux)
	{
		saida << aux;
	}
	return 0;
}
