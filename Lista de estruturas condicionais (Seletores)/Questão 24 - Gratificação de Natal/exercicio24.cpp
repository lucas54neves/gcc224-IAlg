#include <iostream>
using namespace std;
int main () {
	float horasExtras, horasFaltas, h;
	int premio;
	cin >> horasExtras >> horasFaltas;
	h = horasExtras * 60 - (2/3*(horasFaltas*60));
	if (h > 2400) {
		premio = 500;
	}
	else {
		if (h > 1800) {
			premio = 400;
		}
		else {
			if (h > 1200) {
				premio = 300;
			}
			else {
				if (h > 600) {
					premio = 200;
				}
				else {
					premio = 100;
				}
			}
		}
	}
	cout << premio << endl;
	return 0;
}
