#include <iostream>
using namespace std;
int main () {
	int matriz[10][10], vetor[10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin>>matriz[i][j];
		}
	}
	// 1ª troca: A linha 2 com a linha 8
	for (int i = 0; i < 10; i++)
	{
		vetor[i]=matriz[1][i];
		matriz[1][i]=matriz[7][i];
		matriz[7][i]=vetor[i];
	}
	cout<<"1."<<endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	for (int i = 0; i < 10; i++)
	{
		vetor[i]=matriz[1][i];
		matriz[1][i]=matriz[7][i];
		matriz[7][i]=vetor[i];
	}
	// 2ª troca: a coluna 4 com a coluna 10
	for (int i = 0; i < 10; i++)
	{
		vetor[i]=matriz[i][3];
		matriz[i][3]=matriz[i][9];
		matriz[i][9]=vetor[i];
	}
	cout<<"2."<<endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	for (int i = 0; i < 10; i++)
	{
		vetor[i]=matriz[i][3];
		matriz[i][3]=matriz[i][9];
		matriz[i][9]=vetor[i];
	}
	// 3ª troca: a diagonal principal com a diagonal secundária
	int a=0, b=10, c=0, i=0;
	while (i<10)
	{
		vetor[i]=matriz[a][a];
		matriz[a][a]=matriz[b][c];
		i++;
		a++;
		b--;
		c++;
	}
	
	cout<<"3."<<endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
