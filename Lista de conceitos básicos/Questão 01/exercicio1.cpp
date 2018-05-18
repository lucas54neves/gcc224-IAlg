#include <iostream>

using namespace std;

int main () {
	float salario_real, salario_dolar, salario_euro, salario_libra, dolar, euro, libra;
	dolar = 2.13;
	euro = 2.84;
	libra = 3.34;
	cin >> salario_real;
	salario_dolar = salario_real / dolar;
	salario_euro = salario_real / euro;
	salario_libra = salario_real / libra;
	cout << salario_dolar << endl;
	cout << salario_euro << endl;
	cout << salario_libra << endl;
}
