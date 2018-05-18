#include <iostream>
#include <math.h>
using namespace std;
int main () {
	char funcao, medida;
	float valorAngulo, valorFuncao;
	cin >> funcao >> medida >> valorAngulo;
	if (medida == 'g') {
		valorAngulo = valorAngulo / 180 * M_PI;
	}
	if (medida == 'r') {
		valorAngulo = valorAngulo;
	}
	if (funcao == 's') {
		valorFuncao = sin(valorAngulo);
	}
	if (funcao == 'c') {
		valorFuncao = cos(valorAngulo);
	}
	cout << valorFuncao << endl;
	return 0;
}
