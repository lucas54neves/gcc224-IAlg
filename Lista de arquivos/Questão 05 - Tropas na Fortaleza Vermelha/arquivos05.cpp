#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream arquivo("tropas.txt");
	char simboloWesteros, simboloInimigos, simboloNeutro;
	int qtdWesteros, qtdInimigos;
	arquivo >> simboloWesteros;
	arquivo >> simboloInimigos;
	arquivo >> qtdWesteros;
	char matriz[10][10];
	int x, y;
	for (int i = 0; i < qtdWesteros; i++)
	{
		arquivo >> x;
		arquivo >> y;
		matriz[x][y] = simboloWesteros;
	}
	arquivo >> qtdInimigos;
	for (int i = 0; i < qtdInimigos; i++)
	{
		arquivo >> x;
		arquivo >> y;
		matriz[x][y] = simboloInimigos;
	}
	arquivo >> simboloNeutro;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((matriz[i][j] != simboloWesteros)
			&& (matriz[i][j] != simboloInimigos))
			{
				matriz[i][j] = simboloNeutro;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << matriz[i][j];
			if (j < 9)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << simboloWesteros << ": ";
	for (int i = 0; i < 10; i++)
	{
		int contWesteros = 0, contInimigos = 0;
		for (int j = 0; j < 10; j++)
		{
			if (matriz[i][j] == simboloWesteros)
			{
				contWesteros++;
			}
			if (matriz[i][j] == simboloInimigos)
			{
				contInimigos++;
			}
		}
		if (contWesteros > contInimigos)
		{
			cout << i << " ";
		}
	}
	arquivo.close();
}
