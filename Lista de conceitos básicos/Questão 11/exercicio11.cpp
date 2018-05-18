#include <iostream>

using namespace std;

int main () {
	int valor_conta, pagamento_cliente, diferenca, notas20, notas10, notas5, notas2, notas1;
	
	cin >> pagamento_cliente;
	cin >> valor_conta;

	diferenca = pagamento_cliente - valor_conta;

	notas20 = diferenca / 20;
	diferenca = diferenca % 20;

	notas10 = diferenca / 10;
	diferenca = diferenca % 10;

	notas5 = diferenca / 5;
	diferenca = diferenca % 5;

	notas2 = diferenca / 2;
	diferenca = diferenca % 2;

	notas1 = diferenca / 1;
	diferenca = diferenca % 1; 

	cout << notas20 << endl;
	cout << notas10 << endl;
	cout << notas5 << endl;
	cout << notas2 << endl;
	cout << notas1 << endl;

	return 0;
}
