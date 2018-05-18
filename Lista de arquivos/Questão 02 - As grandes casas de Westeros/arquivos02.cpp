#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct casa
{
	string familia;
	string cidade;
	string brasao;
};
int main ()
{
	ifstream arquivo("casas.txt");
	casa info[100];
	int i=0;
	if (arquivo)
	{
		while (!arquivo.eof())
		{
			arquivo >> info[i].familia;
			arquivo >> info[i].cidade;
			arquivo >> info[i].brasao;
			i++;
		}
	}
	string procura;
	char escolha;
	cin >> procura;
	cin >> escolha;
	for (int j = 0; j < i; j++)
	{
		if (info[j].familia==procura)
		{
			if (escolha=='c')
			{
				cout << info[j].cidade;
			}
			else if (escolha=='b')
			{
				cout << info[j].brasao;
			}
		}
	}
	return 0;
}
