#include <iostream>
using namespace std;
int main () {
	float x1, y1, x2, y2, x, y, a, b;
	char tipoReta;
	cin >> x1 >> y1 >> x2 >> y2 >> tipoReta;
	a = (y2 - y1) / (x2 - x1);
	b = y1 - (x1 * a);
	if (tipoReta == 'x') {
		cin >> x;
		y = a * x - b;
		if (x2 == x1 && x > (x1 - x2)) {
			cout << "nenhuma" << endl;
		} else if ((x >= x1) && (x <= x2)) {
			cout << y1 << endl;
		} else {
		cout << y << endl;
		}
	} else if (tipoReta == 'y') {
		cin >> y;
		x = (y - b) / a;
		if ((y2 == y1) && y > (y1 - y2)) {
			cout << "nenhuma" << endl;
		} else if ((y >= y1) && (y <= y2)) {
			cout << x1 << endl;
		} else {
			cout << x << endl;
		}
	}	
	return 0;
}
