#include <iostream>
using namespace std;
int fetuccine (int n, int n1, int n2)
{
	if (n==0)
	{
		return n1;
	}
	else if (n==1)
	{
		return n2;
	}
	else if (n>=2)
	{
		if (n%2==0)
		{
			return fetuccine(n-1, n1, n2) + fetuccine(n-2, n1, n2);
		}
		if (n%2==1)
		{
			return fetuccine(n-1, n1, n2) - fetuccine(n-2, n1, n2);
		}
	}
	return 0;
}
int main ()
{
	int n;
	cin>>n;
	int n1, n2;
	cin>>n1>>n2;
	for (int i = 0; i < n; i++)
	{
		cout<<fetuccine(i, n1, n2)<<" ";
	}
	return 0;
}
