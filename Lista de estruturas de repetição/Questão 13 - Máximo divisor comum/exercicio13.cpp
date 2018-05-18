#include <iostream>
using namespace std;
int main () {
	int primeiroN, segundoN, n1, n2, resto;
	cin >> primeiroN >> segundoN;
	if (primeiroN < segundoN) {
		n1 = primeiroN;
		n2 = segundoN;
	} else if (primeiroN > segundoN) {
		n2 = primeiroN;
		n1 = segundoN;
	}
	resto = n1 % n2;
	while (resto != 0) {
		n1 = n2;
		n2 = resto;
		resto = n1 % n2;
		
	}
	cout << n2 << endl;
	return 0;
}
