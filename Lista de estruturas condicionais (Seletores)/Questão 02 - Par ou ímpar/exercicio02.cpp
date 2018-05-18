#include <iostream>

using namespace std;

int main () {
	int numero;
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "par" << endl;
	}
	if (numero % 2 != 0) {
		cout << "impar" << endl;
	}
}
