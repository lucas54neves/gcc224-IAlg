#include <iostream>
using namespace std;
int main () {
	int n1, n2, contador, soma;
	cin >> n1 >> n2;
	contador = 1;
	soma = 0;
	while (contador <= n2) {
		soma = soma + n1;
		cout << soma << endl;
		contador++;
	}
	return 0;
}
