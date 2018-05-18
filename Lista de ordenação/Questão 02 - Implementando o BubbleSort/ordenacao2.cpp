#include <iostream>
using namespace std;
void bubbleComum (int n, int vetor[])
{
	int k=n-1, aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (vetor[j]>vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
		k--;
	}
	cout<<"levando os maiores elementos para o final do vetor"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
}
void bubbleAlternativo (int n, int vetor[])
{
	int	k=n-2, aux;
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = k; j >= 0; j--)
		{
			if (vetor[j]>vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
			k--;
	}
	cout<<"levando os menores elementos para o inicio do vetor"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
}
void bubbleInversa(int n, int vetor[])
{
	int k=n-1, aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (vetor[j]<vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
		k--;
	}
	cout<<"levando os maiores elementos para o inicio do vetor"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
}
void bubbleAlternativoInverso (int n, int vetor[])
{
	int k=n-2, aux;
	for (int i = n; i >= 0; i--)
	{
		for (int j = k; j >= 0; j--)
		{
			if (vetor[j]<vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
		k--;
	}
	cout<<"levando os menores elementos para o final do vetor"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
}
void desordena (int n, int vetor[], int vetorAux[])
{
	for (int i = 0; i < n; i++)
	{
		vetor[i]=vetorAux[i];
	}
}
int main ()
{
	int n;
	cin>>n;
	int vetor[n], vetorAux[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
		vetorAux[i]=vetor[i];
	}
	bubbleComum(n, vetor);
	desordena(n, vetor, vetorAux);
	bubbleAlternativo(n, vetor);
	desordena(n, vetor, vetorAux);
	bubbleInversa(n, vetor);
	desordena(n, vetor, vetorAux);
	bubbleAlternativoInverso(n, vetor);
	return 0;
}
