#include <iostream>
using namespace std;
int min (int a, int b, int c)
{
	int menor=a;
	if (menor>b)
	{
		menor=b;
	}
	if (menor>c)
	{
		menor=c;
	}
	return menor;
}
int positivos (int n)
{
	if (n<=3)
	{
		return n;
	}
	else
	{
		return min(positivos(n-1), positivos(n-2), positivos(n-3))+1;
	}
}
int main ()
{
	int x;
	cin>>x;
	cout<<positivos(x);
	return 0;
}
