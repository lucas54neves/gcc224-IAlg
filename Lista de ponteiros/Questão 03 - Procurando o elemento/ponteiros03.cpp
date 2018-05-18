#include <iostream>
using namespace std;
int main ()
{
	int l, c;
	cin >> l >> c;
	int** matriz = new int*[l];
	for (int i = 0; i < l; i++)
	{
		matriz[i] = new int[c];
	}
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> matriz[i][j];
		}
	}
	bool achou = false;
	int procurado;
	cin >> procurado;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (procurado == matriz[i][j])
			{
				achou = true;
			}
			
		}
	}
	cout << achou;
	for (int i = 0; i < l; i++)
	{
		delete[] matriz[i];
	}
	delete[] matriz;
	return 0;
}
