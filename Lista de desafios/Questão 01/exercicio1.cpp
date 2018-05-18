#include <iostream>

using namespace std;

int main () {
	int largura, altura, xMouse, yMouse;
	float xConvertido, yConvertido, larguraCentro, alturaCentro;

	cin >> largura;
	cin >> altura;
	cin >> xMouse;
	cin >> yMouse;

	larguraCentro = largura / 2.0;
	alturaCentro = altura / 2.0;
	xConvertido = (xMouse - larguraCentro) / larguraCentro;
	yConvertido = (double)(alturaCentro - yMouse) / alturaCentro;

	cout << xConvertido << endl;
	cout << yConvertido << endl;

	return 0;
}
