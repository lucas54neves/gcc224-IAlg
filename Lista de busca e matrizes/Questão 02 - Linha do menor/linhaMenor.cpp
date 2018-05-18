#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int matriz[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>matriz[i][j];
		}
	}
	int menor, linhaMenor;
	linhaMenor=0;
	menor=matriz[0][0];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
		{
			if (matriz[i][j]<menor)
			{
				menor=matriz[i][j];
				linhaMenor=i;
			}
		}
	}
	cout<<linhaMenor<<endl;
	return 0;
}
