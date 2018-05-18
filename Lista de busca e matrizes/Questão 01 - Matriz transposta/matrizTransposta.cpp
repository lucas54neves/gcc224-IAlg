#include <iostream>
using namespace std;
int main () {
	int linhas, colunas;
	cin>>linhas>>colunas;
	int matriz[linhas][colunas];
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			cin>>matriz[i][j];
		}
	}
	for (int j = 0; j < colunas; j++)
	{
		for (int i = 0; i < linhas; i++)
		{
			cout<<matriz[j][i]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
