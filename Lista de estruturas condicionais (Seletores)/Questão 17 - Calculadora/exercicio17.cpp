#include <iostream>
#include <ctype.h>
using namespace std;
int main () {
	float primeiroOperador, segundoOperador, resultado;
	char operador;
	cin >> primeiroOperador >> operador >> segundoOperador;
		if (operador == '+') {
			resultado = primeiroOperador + segundoOperador;
		}
		else {
			if (operador == '-') {
				resultado = primeiroOperador - segundoOperador;
			}
			else {
				if (operador == '*') {
					resultado = primeiroOperador * segundoOperador;
				}
				else {
					if (operador == '/') {
						resultado = primeiroOperador / segundoOperador;
					}
				}
			}
		}
	if (segundoOperador != 0) {
		cout << resultado << endl;
	}
	else {
		cout << "erro" << endl;
	}
	return 0;
}
