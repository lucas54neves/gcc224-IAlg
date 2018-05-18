#include <iostream>
using namespace std;
int main () {
	int idade;
	string categoria;
	cin >> idade;
	if (idade < 5) {
		cout << "Nao registrado" << endl;
	}
	else {
		if (idade < 7) {
			categoria = "Infantil";
		}
		else {
			if (idade < 11) {
				categoria = "Juvenil";
			}
			else {
				if (idade < 16) {
					categoria = "Adolescente";
				}
				else {
					if (idade < 31) {
					categoria = "Adulto";
					}
					else {
						categoria = "Senior";
					}
				}
			}
		}
	cout << categoria << endl;
	}
	return 0;
}
