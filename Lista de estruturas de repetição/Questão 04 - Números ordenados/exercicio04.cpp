#include <iostream>
using namespace std;
int main () {
	int contador, numero, aux;
	bool ordem = true;
	contador = 1;
	while (contador < 6) {
		cin >> numero;
		if (contador==1) aux = numero;
		if (numero < aux) {
			ordem = false;
		}
		contador++;
		aux = numero;
	}
	cout << ordem << endl;
	return 0;
}
