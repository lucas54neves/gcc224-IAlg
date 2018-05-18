#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int nTermos, n;
	double valorPi, a1;
	cin >> nTermos;
	valorPi = 1;
	a1 = 0;
	n = 1;
	while (n <= nTermos) {
		a1 = sqrt(a1+2);
		valorPi *= a1/2;
		n++;
	}
	valorPi = pow(valorPi/2, -1);
	cout << valorPi << endl;
	return 0;
}
