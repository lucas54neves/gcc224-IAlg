#include <iostream>

using namespace std;

int main () {
	float raio, diametro, area, volume;

	cin >> raio;

	diametro = 2 * raio;
	area = 4 * 3.14 * raio * raio;
	volume = 4 * 3.14 * (raio * raio * raio) / 3;

	cout << diametro << endl;
	cout << area << endl;
	cout << volume << endl;
}
