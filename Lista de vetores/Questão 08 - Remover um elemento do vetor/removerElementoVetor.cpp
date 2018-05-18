#include <iostream>
using namespace std;
int main () {
	int k, valor, teste;
	cin >> k;
	int vetor[k];
	for (int i = 0; i < k; i++)
	{
		cin >> vetor[i];
	}
	cin >> valor;
	teste = 0;
	for (int i = 0; i < k; i++)
	{
		if (vetor[i]==valor)
		{
			for (int c = i; c < k; c++)
			{
				vetor[c] = vetor[c+1];
			}
			teste = 1;
		}
		
	}
	
	for (int i = 0; i < (k-1); i++)
	{
		if (teste == 0)
		{
			cout << "ELEMENTO NAO ENCONTRADO" << endl;
			i = k;
		}
		else
		{
			cout << vetor[i] << " ";
		}
	}
	return 0;
}
