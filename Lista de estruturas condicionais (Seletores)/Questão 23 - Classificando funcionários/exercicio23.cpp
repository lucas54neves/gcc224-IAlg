#include <iostream>
using namespace std;
int main () {
	int tempoServico;
	float salarioBase, gratificacao, imposto, salarioLiquido;
	char categoria;
	cin >> salarioBase >> tempoServico;
	if (salarioBase < 200.0) {
		imposto = 0.0;
	}
	else {
		if (salarioBase >= 200.0 && salarioBase <= 450.0) {
			imposto = salarioBase * 0.03;
		}
		else {
			if (salarioBase > 450.0 && salarioBase < 700.0) {
				imposto = salarioBase * 0.08;
			}
			else {
				imposto = salarioBase * 0.12;
			}
		}
	}
	if (salarioBase > 500.0) {
		if (tempoServico < 3) {
			gratificacao = salarioBase * 0.2;
		}
		else {
			gratificacao = salarioBase * 0.3;
		}
	}
	else {
		if (tempoServico < 3) {
			gratificacao = salarioBase * 0.23;
		}
		else {
			if (tempoServico < 6) {
				gratificacao = salarioBase * 0.35;
			}
			else {
				gratificacao = salarioBase * 0.33;
			}
		}
	}
	salarioLiquido = salarioBase - imposto + gratificacao;
	if (salarioLiquido < 350.0) {
		categoria = 'A';
	}
	else {
		if (salarioLiquido < 600.0) {
			categoria = 'B';
		}
		else {
			categoria = 'C';
		}
	}
	cout << imposto << endl << gratificacao << endl << salarioLiquido << endl << categoria << endl;
	return 0;
}
