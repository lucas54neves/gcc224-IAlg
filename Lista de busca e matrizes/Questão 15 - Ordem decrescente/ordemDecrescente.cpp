#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int vetor[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	int procurado;
	bool achou=false;
	cin>>procurado;
	for (int i = 0; i < n; i++)
	{
		if (procurado==vetor[i])
		{
			cout<<i<<endl;
			achou=true;
		}
	}
	if (achou==0)
	{
		cout<<"-1"<<endl;
	}
	return 0;
}
