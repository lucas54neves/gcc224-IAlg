#include <iostream>
using namespace std;
int main () {
	int quantidadeCartas, posicaoInicial, posicaoFinal, meio;
	cin >> quantidadeCartas >> posicaoInicial;
	meio = (quantidadeCartas / 2) - 1;
	if (posicaoInicial <= meio) {
		posicaoFinal = posicaoInicial * 2 + 1;
	}
	else {
		posicaoFinal = (posicaoInicial - (quantidadeCartas / 2)) * 2;
	}
	cout << posicaoFinal << endl;
	return 0;
}
