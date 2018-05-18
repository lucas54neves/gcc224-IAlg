#include <iostream>
using namespace std;
int main () {
	int n, Tn=0, contador = 1;
	cin >> n;
	while (contador <= n) {
	Tn = Tn + (n + 1) / 2;
	contador++;
	}
	cout << Tn << endl;
	return 0;
}

