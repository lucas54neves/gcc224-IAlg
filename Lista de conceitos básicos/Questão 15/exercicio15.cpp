#include <iostream>

using namespace std;

int main () {
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;

	cin >> nota1 >> nota2 >> nota3;
	cin >> peso1 >> peso2 >> peso3;

	media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

	cout << media << endl;
}
