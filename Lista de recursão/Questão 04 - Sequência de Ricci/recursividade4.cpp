#include <iostream>
using namespace std;
int ricci (int x, int y, int z)
{
	if (z==0)
	{
		return x;
	}
	else if (z==1)
	{
		return y;
	}
	else if (z>1)
	{
		return ricci(x, y, z-1)+ricci(x, y, z-2);
	}
	return 0;
}
int main ()
{
	int a, b, n;
	cin>>a>>b>>n;
	for (int i=n; i>0; i--)
	{
		cout<<ricci(a, b, n-i)<<" ";
	}
	return 0;
}
