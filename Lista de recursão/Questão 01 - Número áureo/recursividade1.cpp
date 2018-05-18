#include <iostream>
using namespace std;
double phi (double x)
{
	if (x==1)
	{
		return 1;
	}
	else if (x>1)
	{
		return 1 + 1/(phi(x-1));
	}
}
int main ()
{
	int n;
	cin>>n;
	cout<<phi(n);
	return 0;
}
