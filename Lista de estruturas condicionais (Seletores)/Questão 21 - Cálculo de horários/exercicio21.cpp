#include <iostream>
using namespace std;
int main () {
	int horasInicio, minutosInicio, horasTermino, minutosTermino, horasDuracao, minutosDuracao;
	cin >> horasInicio >> minutosInicio >> horasTermino >> minutosTermino;
	horasDuracao = horasTermino - horasInicio;
	minutosDuracao = minutosTermino - minutosInicio;
	if (horasDuracao < 0) {
		horasDuracao = horasDuracao + 24;
	}
	if (minutosDuracao < 0) {
		horasDuracao = horasDuracao - 1;
		minutosDuracao = minutosDuracao + 60;
	}
	cout << horasDuracao << " " << minutosDuracao << endl;
}
