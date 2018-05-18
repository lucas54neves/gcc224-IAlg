#include <iostream>
using namespace std;
int main () {
	int contador, letraA, letraB;
	char letra;
	
	contador = 1;
	letraA = 0;
	letraB = 0;
	
	while (contador <= 10) {
		cin >> letra;
		
		if (letra == 'a') {
			letraA = letraA + 1;
		} else if (letra == 'b') {
			letraB = letraB + 1;
		}
		contador ++;
	}
	
	if (letraA < letraB) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
