#include <iostream>

using namespace std;

int main () {
	float baseMenor, baseMaior, altura, area, somaBases;

	cin >> baseMaior >> baseMenor >> altura;

	somaBases = baseMenor + baseMaior;
	area = (somaBases * altura) / 2;

	cout << area << endl;

	return 0;
}
