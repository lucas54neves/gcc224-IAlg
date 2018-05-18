#include <iostream>

using namespace std;

int main () {
	int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1, conta;

	cin >> valor;

	notas100 = valor / 100;
	conta = valor % 100;
	notas50 = conta / 50;
	conta = conta % 50;
	notas20 = conta / 20;
	conta = conta % 20;
	notas10 = conta / 10;
	conta = conta % 10;
	notas5 = conta / 5;
	conta = conta % 5;
	notas2 = conta / 2;
	notas1 = conta % 2;

	cout << notas100 << endl;
 	cout << notas50 << endl;
	cout << notas20 << endl;
	cout << notas10 << endl;
	cout << notas5 << endl;
	cout << notas2 << endl;
	cout << notas1 << endl;

	return 0;
}
