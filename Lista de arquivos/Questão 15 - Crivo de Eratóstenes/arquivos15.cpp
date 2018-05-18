#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
void removerMultiplos (int pos, int vetor[], int& cont, int num)
{
	for (int i = (pos+1); i < cont; i++)
	{
		if (vetor[i] % num == 0)
		{
			for (int j = i; j < (cont-1); j++)
			{
				vetor[j] = vetor[j+1];
			}
			cont--;
		}
	}
	
}
int main ()
{
	int limite, maior;
	cin >> limite;
	double raiz;
	raiz = sqrt (limite);
	maior = floor(raiz);
	int n = 2, cont = (limite-1);
	int vetor[cont], pos = 0;
	for (int i = 0; i < cont; i++)
	{
		vetor[i] = n;
		n++;
	}
	int num = vetor[pos];
	do
	{
		removerMultiplos(pos, vetor, cont, num);
		pos++;
		num = vetor[pos];
	} while (num <= maior);
	ofstream saida ("saida.txt");
	if (saida)
	{
		for (int i = 0; i < cont; i++)
		{
			saida << vetor[i] << " ";
		}
	}
	saida.close();
	return 0;
}
