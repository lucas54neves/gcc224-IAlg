#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int milissegundos, horas, minutos;
	double segundos;

	cin >> milissegundos;

	horas = floor(milissegundos / 3600000);
	minutos = floor((milissegundos - (horas * 3600000)) / 60000);
	segundos = (double)((milissegundos - ((horas * 3600000.0) + (minutos * 60000.0))) / 1000.0);

	cout << horas << " : " << minutos << " : " << segundos << endl;

	return 0;
}
