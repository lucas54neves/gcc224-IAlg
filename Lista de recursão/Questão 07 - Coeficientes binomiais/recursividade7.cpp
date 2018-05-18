#include <iostream>
using namespace std;
int coeficientes (int n, int k)
{
	if (k==0||k==n)
	{
		return 1;
	}
	else
	{
		return coeficientes(n-1, k-1)+coeficientes(n-1, k);
	}
}
int main ()
{
	int a, b;
	cin>>a>>b;
	cout<<coeficientes(a, b);
	return 0;
}
