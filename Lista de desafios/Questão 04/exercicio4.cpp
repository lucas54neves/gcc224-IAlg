#include <iostream>

using namespace std;

int main () {
	int dividendo, divisor, resultado=0;
	cin >> dividendo >> divisor;
	if (dividendo < divisor || divisor == 0) {
		cout << -1 << endl;
	} else {
		while (dividendo >= divisor) {
			dividendo-=divisor;
			resultado++;
			cout << dividendo << endl;
		}
		cout << resultado << endl;
	}
	return 0;
}
