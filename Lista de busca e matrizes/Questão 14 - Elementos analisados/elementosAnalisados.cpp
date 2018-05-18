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
	int procurado, inicio=0, meio, fim=(n-1);
	cin>>procurado;
	do
	{
		meio=(inicio+fim)/2;
		cout<<vetor[meio]<<"\t";
		if (vetor[meio]==procurado)
		{
			inicio=fim+1;
		}
		else
		{
			if (procurado<vetor[meio])
			{
				fim=meio-1;
			}
			else
			{
				inicio=meio+1;
			}
		}
	} while (inicio<=fim);
	return 0;
}
