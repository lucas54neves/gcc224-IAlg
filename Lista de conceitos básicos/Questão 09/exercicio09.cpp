#include <iostream>

using namespace std;

int main () {
	int largura, altura, xMouse, yMouse;
	float larguraCenter, alturaCenter, x, y;

	cin >> largura;
	cin >> altura;
	cin >> xMouse;
	cin >> yMouse;

	larguraCenter = largura / 2.0;
	alturaCenter = (double) altura / 2;
	x = (xMouse - larguraCenter) / larguraCenter;
	y = (alturaCenter - yMouse) / alturaCenter;

	cout << x << endl;
	cout << y << endl;
	
	return 0;

}
