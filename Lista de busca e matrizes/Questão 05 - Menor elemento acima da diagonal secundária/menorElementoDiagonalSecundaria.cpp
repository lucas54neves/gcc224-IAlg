#include <iostream>
using namespace std;
int main ()
{
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
	int menor=matriz[0][0], j=0, i=(n-1), l;
	while (j<n)
	{
		l=(i-1);
		while (l>=0)
		{
			if (matriz[l][j]<menor)
			{
				menor=matriz[l][j];
			}
			l--;
		}
		j++;
		i--;
	}
	cout<<menor<<endl;
	return 0;
}
