#include <iostream>
using namespace std;
int main () {
	float custoFabrica, precoFinal;
	cin >> custoFabrica;
	if (custoFabrica <= 20000) {
		precoFinal = custoFabrica * 1.05;
		} else if (custoFabrica > 20000 && custoFabrica <= 40000) {
			precoFinal = (custoFabrica * 1.1) * 1.3;
			} else if (custoFabrica > 40000) {
				precoFinal = (custoFabrica * 1.15) * 1.45;
				}
	cout << precoFinal << endl;
	return 0;
}
