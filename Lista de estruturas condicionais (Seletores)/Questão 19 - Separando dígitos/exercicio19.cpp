#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int numero, digitos5, dezenaMilhar, unidadeMilhar, centena, dezena, unidade;
	cin >> numero;
	digitos5 = ceil(numero/100000);
	if (digitos5 >= 1) {
		cout << "invalido" << endl;
	}
	else {
		dezenaMilhar = floor(numero / 10000);
		numero = ceil(numero % 10000);
		unidadeMilhar = floor(numero / 1000);
		numero = ceil(numero % 1000);
		centena = floor(numero / 100);
		numero = ceil(numero % 100);
		dezena = floor(numero / 10);
		unidade = ceil(numero % 10);
		cout << dezenaMilhar << "..." << unidadeMilhar << "..." << centena << "..." << dezena << "..." << unidade << endl;
	}
	return 0;
}
