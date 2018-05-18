#include <iostream>

using namespace std;

int main () {
	int lados, diagonais;

	cin >> lados;

	diagonais = lados * (lados - 3) / 2;

	cout << diagonais << endl;
}
