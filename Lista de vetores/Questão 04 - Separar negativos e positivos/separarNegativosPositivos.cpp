#include <iostream>
using namespace std;
int main () {
	int p = 0, n = 0, numeros[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> numeros[i];
	}
	for (int i = 0; i < 8; i++)
	{
		if (numeros[i] >= 0)
		{
			p++;
		} else
		{
			n++;
		}
	}
	int positivos[p], negativos[n];
	p = 0;
	n = 0;
	for (int i = 0; i < 8; i++)
	{
		if (numeros[i] >= 0)
		{
			positivos[p] = numeros[i];
			p++;
		} else
		{
			negativos[n] = numeros[i];
			n++;
		}
	}
	for (int i = 0; i < p; i++)
	{
		cout << positivos[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << negativos[i] << " ";
	}
	cout << endl;
	return 0;
}
