#include <iostream>
using namespace std;
int main () {
	int dia, hora, minuto, duracao, dia2, hora2, minuto2;
	cin >> dia >> hora >> minuto >> duracao;
	dia2 = (duracao / 1440);
	dia2 = dia + dia2;
	duracao = (duracao % 1440);
	hora2 = (duracao / 60);
	hora2 = hora + hora2;
	duracao = (duracao % 60);
	minuto2 = minuto + duracao;
	if (minuto2 >= 60) {
		minuto2 = minuto2 - 60;
		hora2 = hora2 + 1;
	}
	if (hora2 >= 24) {
		hora2 = hora2 - 24;
		dia2 = dia2 + 1;
	}
	cout << dia2 << " " << hora2 << " " << minuto2 << endl;
	return 0;
}
