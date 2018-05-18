#include <iostream>
using namespace std;
int main () {
	int codigoProduto, quantidadeProduto;
	float precoUnitario, valorBruto, valorDesconto, precoFinal;
	cin >> codigoProduto >> quantidadeProduto;
	if (codigoProduto <= 10) {
		precoUnitario = 10;
	}
	else {
		if (codigoProduto > 10 && codigoProduto <= 20) {
			precoUnitario = 15;
		}
		else {
			if (codigoProduto > 20 && codigoProduto <= 30) {
				precoUnitario = 20;
			}
			else {
				precoUnitario = 30;
			}
		}
	}
	valorBruto = precoUnitario * quantidadeProduto;
	if (valorBruto < 250) {
		valorDesconto = valorBruto * 0.05;
	}
	else {
		if (valorBruto >= 250 && valorBruto <= 500) {
			valorDesconto = valorBruto * 0.1;
		}
		else {
			valorDesconto = valorBruto * 0.15;
		}
	}
	precoFinal = valorBruto - valorDesconto;
	cout << precoUnitario << endl;
	cout << valorBruto << endl;
	cout << valorDesconto << endl;
	cout << precoFinal << endl;
	return 0;
}
