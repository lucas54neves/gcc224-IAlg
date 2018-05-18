#include <iostream>
using namespace std;
int main () {
	int ano, bissexto;
	cin >> ano;
	if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		bissexto = 1;
	}
	else {
		bissexto = 0;
	}
	cout << bissexto << endl;
	return 0;
}
