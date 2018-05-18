#include <iostream>
using namespace std;
int main () {
	int contador1, numero, contador2;
	double fatorial;
	float fatorial2;
	cin >> numero;
	contador1 = 1;
	contador2 = 1;
	fatorial = 1;
	fatorial2 = 1.0;
	while (contador1 < numero) {
		fatorial2 = 1.0;
		contador2 = 1;
		while (contador2 <= contador1) {
			fatorial2 = fatorial2 * contador2;
			contador2++;
		}
			fatorial = ((double)fatorial + (1.0 / fatorial2));
			contador1++;
		}
	cout << fatorial << endl;
	return 0;
}
