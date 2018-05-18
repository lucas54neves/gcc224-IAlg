#include <iostream>
#include <cmath>

using namespace std;

int main () {
	float x1, y1, x2, y2, deltaX, deltaY, quadradoX, quadradoY, somaQuadrado, resultado;

	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	deltaX = x2 - x1;
	deltaY = y2 - y1;
	quadradoX = pow(deltaX, 2);
	quadradoY = pow(deltaY, 2);
	somaQuadrado = quadradoX + quadradoY;
	resultado = sqrt(somaQuadrado);

	cout << resultado << endl;
}
