#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int numeroProduto, numeroCaixa;

	cin >> numeroProduto;

	numeroCaixa = ceil(numeroProduto / 6.0);

	cout << numeroCaixa << endl;

	return 0;
}
