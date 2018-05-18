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
	int soma=0, l=0;
	while (l<n)
	{
		soma+=matriz[l][l];
		l++;
	}
	float media=(float(soma)/float(n));
	cout<<media<<endl;
	return 0;
}
