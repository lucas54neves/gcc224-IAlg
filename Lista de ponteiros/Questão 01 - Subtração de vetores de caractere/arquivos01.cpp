#include <iostream>
using namespace std;
int main ()
{
	int a;
	cin >> a;
	char* vetorA = new char[a];
	for (int i = 0; i < a; i++)
	{
		cin >> vetorA[i];
	}
	int b;
	cin >> b;
	char* vetorB = new char[b];
	for (int i = 0; i < b; i++)
	{
		cin >> vetorB[i];
	}
	int qtd = 0;
	bool achou = false;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (vetorA[i]==vetorB[j])
			{
				achou = true;
			}
		}
		if (!achou)
		{
			qtd = qtd + 1;
			achou = false;
		}
	}
	char* vetor = new char[qtd];
	achou = false;
	int h=0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (vetorA[i]==vetorB[j])
			{
				achou = true;
			}
		}
		if (achou==false)
		{
			vetor[h] = vetorA[i];
			h = h + 1;
			achou = false;
		}
	}
	or (int i = 0; i < qtd; i++)
	{
		cout << vetor[i];
		if (i == qtd - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	delete[] vetorA;
	delete[] vetorB;
	delete[] vetor;
	return 0;
}
