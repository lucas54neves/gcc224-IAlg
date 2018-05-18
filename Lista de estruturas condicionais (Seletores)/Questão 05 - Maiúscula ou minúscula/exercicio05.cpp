#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main () {
	char letra;
	cin >> letra;
	if (letra >= 'a' && letra <= 'z') {
		cout << "MINUSCULA" << endl;
	}
		else {
			if (letra >= 'A' && letra <= 'Z') {
				cout << "MAIUSCULA" << endl;
			}
		}
	return 0;}
