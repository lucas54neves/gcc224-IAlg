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
	int qtd=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (vetor[i]==vetor[j])
			{
				qtd++;
			}
		}
	}
	cout<<qtd;
	return 0;
}
