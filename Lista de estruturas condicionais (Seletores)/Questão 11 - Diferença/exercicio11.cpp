#include <iostream>
using namespace std;
int main () {
	int n1, n2, diferenca;
	cin >> n1 >> n2;
	if (n1 > n2) {
		diferenca = n1 - n2;
	} else {
		diferenca = n2 - n1;
	}
	cout << diferenca << endl;
	return 0;
}
