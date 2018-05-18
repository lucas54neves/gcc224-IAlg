#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int distancia;
	cin>>distancia;
	int matriz[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>matriz[i][j];
		}
	}
	int lCacador=(n/2), cCacador=(n/2), soma=0;
	int l1=(lCacador-distancia), l2=(lCacador+distancia), c1=(cCacador-distancia), c2=(cCacador+distancia);
	for (int i = c1; i < c2; i++)
	{
		soma+=matriz[l1][i];
	}
	for (int i = l1; i < l2; i++)
	{
		soma+=matriz[i][c2];
	}
	for (int i = c2; i > c1; i--)
	{
		soma+=matriz[l2][i];
	}
	for (int i = l2; i > l1; i--)
	{
		soma+=matriz[i][c1];
	}
	cout<<soma<<endl;
}
