#include <iostream>
using namespace std;
int main () {
	int codigoCargo;
	float salarioAtual, salarioAumento, salarioNovo, taxaAumento;
	string cargo;
	cin >> codigoCargo >> salarioAtual;
	switch (codigoCargo) {
		case 1:
			cargo = "Escriturario";
			taxaAumento = 0.5;
			break;
		case 2:
			cargo = "Secretario";
			taxaAumento = 0.35;
			break;
		case 3:
			cargo = "Caixa";
			taxaAumento = 0.2;
			break;
		case 4:
			cargo = "Gerente";
			taxaAumento = 0.1;
			break;
		case 5:
			cargo = "Diretor";
			taxaAumento = 0;
			break;
	}
	salarioAumento = salarioAtual * taxaAumento;
	salarioNovo = salarioAtual + salarioAumento;

	cout << cargo << endl << salarioAumento << endl << salarioNovo << endl;

	return 0;
}
