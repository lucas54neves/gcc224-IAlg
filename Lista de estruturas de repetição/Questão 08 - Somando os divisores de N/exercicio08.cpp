#include <iostream>
using namespace std;
int main () {
	int numero, contador, soma;
	cin >> numero;
	contador = 1;
	soma = 0;
	while (contador <= numero) {
		if (numero % contador == 0) {
			soma = soma + contador;
			cout << contador;
			if (contador < numero) {
			cout << "+";
			}
			if (contador == numero) {
				cout << "=" << soma;
			}
		}
		contador++;
	}
	return 0;
}
