#include <iostream>
using namespace std;
int fibonacci (int n)
{
	int fib0=0, fib1=1, fibn=(fib1+fib0);
	cout<<fib0<<"\t"<<fib1<<"\t";
	for (int i = 2; i < n; i++)
	{
		fibn=(fib1+fib0);
		cout<<fibn<<"\t";
		fib0=fib1;
		fib1=fibn;
	}
	cout<<endl;
	return 0;
}
int main () {
	int qtd;
	cin>>qtd;
	fibonacci (qtd);
	return 0;	
}
