#include <iostream>
using namespace std;
int main () {
	int contador, numero, fatorial;
	cin >> numero;
	contador = 1;
	fatorial = 1;
	while (contador <= numero) {
		fatorial = fatorial * contador;
		contador++;
	}
	cout << fatorial << endl;
	return 0;
}
