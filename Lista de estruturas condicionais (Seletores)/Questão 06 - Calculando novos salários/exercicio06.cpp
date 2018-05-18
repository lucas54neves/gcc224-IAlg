#include <iostream>
using namespace std;
int main () {
	float salarioAtual, salarioNovo, salarioAumento;
	cin >> salarioAtual;
	if (salarioAtual <= 300) {
		salarioNovo = salarioAtual * 1.15;
	}
	if (salarioAtual > 300 && salarioAtual <= 600) {
		salarioNovo = salarioAtual * 1.1;
	}
	if (salarioAtual > 600 && salarioAtual <= 900) {
		salarioNovo = salarioAtual * 1.05;
	}
	if (salarioAtual > 900) {
		salarioNovo = salarioAtual;
	}
	salarioAumento = salarioNovo - salarioAtual;
	cout << salarioAumento << endl;
	cout << salarioNovo << endl;
	return 0;
}
