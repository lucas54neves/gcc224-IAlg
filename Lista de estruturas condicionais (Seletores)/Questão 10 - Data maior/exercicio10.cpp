#include <iostream>
using namespace std;
int main () {
	int dia1, mes1, ano1, dia2, mes2, ano2;
	cin >> dia1 >> mes1 >> ano1 >> dia2 >> mes2 >> ano2;
	if (ano1 == ano2) {
		if (mes1 > mes2) {
			cout << dia1 << " " << mes1 << " " << ano1;
			return 0;
		}
		else {
			if (mes1 < mes2) {
				cout << dia2 << " " << mes2 << " " << ano2;
				return 0;
			}
			if (mes1 == mes2) {
				if (dia1 < dia2) {
					cout << dia2 << " " << mes2 << " " << ano2;
					return 0;
				}
				if (dia1 > dia2) {
					cout << dia1 << " " << mes1 << " " << ano2;
					return 0;
				}
			}
		}
	}
	if (ano1 > ano2) {
		cout << dia1 << " " << mes1 << " " << ano1;
		return 0;
	}
	if (ano1 < ano2) {
		cout << dia2 << " " << mes2 << " " << ano2;
		return 0;
	}
	return 0;
}
