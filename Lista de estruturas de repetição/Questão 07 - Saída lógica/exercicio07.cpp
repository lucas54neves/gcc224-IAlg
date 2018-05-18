#include <iostream>
using namespace std;
int main () {
	int divisor, dividendo, resto, quociente;
	cin >> divisor;
	do {
		cin >> dividendo;
		quociente = dividendo / divisor;
		resto = dividendo % divisor;
	} while (resto != 2);
	cout << quociente << endl;
	return 0;
}
