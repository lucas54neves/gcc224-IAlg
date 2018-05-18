#include <iostream>
using namespace std;
int contaSequencias (int n, int vetor[])
{
	int qtdSequencias=0;
	bool seq=false;
	for (int i = 1; i < n; i++)
	{
		if (vetor[i]<vetor[i-1]&&seq==false)
		{
			qtdSequencias++;
			seq=true;
		}
		if (vetor[i]>vetor[i-1])
		{
			seq=false;
		}
		
	}
	return qtdSequencias;
}
int main ()
{
	int n;
	cin>>n;
	int vetor[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	cout<<contaSequencias(n, vetor)<<endl;
}
