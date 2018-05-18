#include <iostream>
#include <math.h>

using namespace std;

int main () {
	float alturaDegraus, alturaTotal;
	int numeroDegraus;

	cin >> alturaDegraus>> alturaTotal;

	alturaDegraus = alturaDegraus / 100;
	numeroDegraus = (int) ceil(alturaTotal / alturaDegraus);

	cout << numeroDegraus << endl;

	return 0;
}
