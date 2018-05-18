#include <iostream>
using namespace std;
int main () {
	int quantidadeIngressos, numeroIngresso, premiado, ordem;
	cin >> quantidadeIngressos;
	premiado = 0;
	ordem = 1;
	while (ordem <= quantidadeIngressos) {
		cin >> numeroIngresso;
		if (numeroIngresso == ordem && premiado==0) {
			premiado = ordem;
		}
		ordem = ordem + 1;
	}
	cout << premiado << endl;
	return 0;
}

