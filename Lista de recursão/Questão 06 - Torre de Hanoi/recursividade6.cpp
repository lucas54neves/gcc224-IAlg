#include <iostream>
using namespace std;
int hanoi (int x)
{
	if (x==1)
	{
		return x;
	}
	else
	{
		return 2*hanoi(x-1)+1;
	}
}
int main ()
{
	int n;
	cin>>n;
	cout<<hanoi(n);
	return 0;
}
