#include <iostream>
using namespace std;
int main () {
	int codigoProduto;
	float valorAtual, valorDesconto, valorNovo;
	cin >> valorAtual >> codigoProduto;
	if (valorAtual <= 30) {
		valorNovo = valorAtual;
		valorDesconto = valorAtual - valorNovo;
	}
	else {
		if (valorAtual > 30 && valorAtual <= 100) {
			valorNovo = valorAtual * 0.9;
			valorDesconto = valorAtual - valorNovo;
		}
		else {
			valorNovo = valorAtual * 0.85;
			valorDesconto = valorAtual - valorNovo;
		}
	}
	cout << valorDesconto << endl << valorNovo << endl;
	return 0;
}
