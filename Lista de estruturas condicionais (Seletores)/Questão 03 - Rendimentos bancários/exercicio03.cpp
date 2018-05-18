#include <iostream>
using namespace std;
int main () {
	int tipoInvestimento;
	float valorInicial, valorFinal;
	cin >> tipoInvestimento;
	cin >> valorInicial;
	if (tipoInvestimento == 1) {
		valorFinal = valorInicial * 1.005;
	} if (tipoInvestimento == 2) {
		valorFinal = valorInicial * 1.03 - 30;
	}
	cout << valorFinal << endl;
	return 0;
}
