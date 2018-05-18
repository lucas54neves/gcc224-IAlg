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
	int c=(n-1), l=1, soma=0, t=n-1;
	while (c>(n/2))
	{
		while (l<t)
		{
			soma=soma+matriz[l][c];
		}
		l++;
		t--;
		c--;
	}
	cout<<soma<<endl;
	return 0;
}
