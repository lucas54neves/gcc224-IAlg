#include <iostream>
using namespace std;
void selectionSort (int vetor[], int n)
{
	int aux, menor=0;
	for (int i = n-1; i >= 0; i--)
	{
		menor=i;
		for (int j = i-1; j >=0 ; j--)
		{
			if (vetor[j]<vetor[menor])
			{
				menor=j;
			}
		}
		if (menor!=i)
		{
			aux=vetor[menor];
			vetor[menor]=vetor[i];
			vetor[i]=aux;
			for (int k = 0; k < n; k++)
			{
				cout<<vetor[k];
				if (k!=n-1)
				{
					cout<<" ";
				}
				else
				{
					cout<<endl;
				}
			}
		}
	}
}
void buscaBinaria (int vetor[], int n, int busca)
{
	int fim=n-1, inicio=0, pos=0, qtdLaco=0;
	int meio=0;
	bool achou=false;
	while (achou==false)
	{
		meio=(fim+inicio)/2;
		if (vetor[meio]==busca)
		{
			pos=meio;
			qtdLaco++;
			achou=true;
		}
		else if (fim<inicio)
		{
			achou=true;
			pos=-1;
			qtdLaco++;
		}
		else if (vetor[meio]<busca)
		{
			meio--;
			fim=meio;
			qtdLaco++;
		}
		else if (vetor[meio]>busca)
		{
			meio++;
			inicio=meio;
			qtdLaco++;
		}
		
	}
	cout<<pos<<endl<<qtdLaco<<endl;
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
	int busca;
	cin>>busca;
	selectionSort (vetor, n);
	buscaBinaria (vetor, n, busca);
	return 0;
}
