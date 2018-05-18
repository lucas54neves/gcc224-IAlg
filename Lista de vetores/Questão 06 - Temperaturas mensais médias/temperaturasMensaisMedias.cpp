#include <iostream>
using namespace std;
int main () {
	int posicaoQuente, posicaoFrio;
	float temperaturas[12], frio, quente;
	for (int i = 0; i < 12; i++)
	{
		cin >> temperaturas[i];
	}
	if (temperaturas[0] < temperaturas[1])
	{
		frio = temperaturas[0];
		posicaoFrio = 0;
		quente = temperaturas[1];
		posicaoQuente = 1;
	}
	if (temperaturas[0] > temperaturas[1])
	{
		frio = temperaturas[1];
		posicaoFrio = 1;
		quente = temperaturas[0];
		posicaoQuente = 0;
	}
	for (int i = 0; i < 12; i++)
	{
		if (temperaturas[i] < frio)
		{
			frio = temperaturas[i];
			posicaoFrio = i;
		}
		if (temperaturas[i] > quente)
		{
			quente = temperaturas[i];
			posicaoQuente = i;
		}
	}
	switch (posicaoQuente)
	{
		case 0:
			cout << "janeiro" << endl;
			break;
		case 1:
			cout << "fevereiro" << endl;
			break;
		case 2:
			cout << "marco" << endl;
			break;
		case 3:
			cout << "abril" << endl;
			break;
		case 4:
			cout << "maio" << endl;
			break;
		case 5:
			cout << "junho" << endl;
			break;
		case 6:
			cout << "julho" << endl;
			break;
		case 7:
			cout << "agosto" << endl;
			break;
		case 8:
			cout << "setembro" << endl;
			break;
		case 9:
			cout << "outubro" << endl;
			break;
		case 10:
			cout << "novembro" << endl;
			break;
		case 11:
			cout << "dezembro" << endl;
			break;
	}
	switch (posicaoFrio)
	{
		case 0:
			cout << "janeiro" << endl;
			break;
		case 1:
			cout << "fevereiro" << endl;
			break;
		case 2:
			cout << "marco" << endl;
			break;
		case 3:
			cout << "abril" << endl;
			break;
		case 4:
			cout << "maio" << endl;
			break;
		case 5:
			cout << "junho" << endl;
			break;
		case 6:
			cout << "julho" << endl;
			break;
		case 7:
			cout << "agosto" << endl;
			break;
		case 8:
			cout << "setembro" << endl;
			break;
		case 9:
			cout << "outubro" << endl;
			break;
		case 10:
			cout << "novembro" << endl;
			break;
		case 11:
			cout << "dezembro" << endl;
			break;
	}
	return 0;
}
