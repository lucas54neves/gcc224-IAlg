#include <iostream>
using namespace std;
bool trocaOuNaoTroca (int n, int vetor[], int pos1, int pos2)
{
	if (vetor[pos1]>vetor[pos2])
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
void imprimirVetor (int n, int vetor[], int pos1, int pos2, bool troca, bool ordenado)
{
	for (int i = 0; i < n; i++)
	{
		if (ordenado==false)
		{
			if (i==pos1||i==pos2)
			{
				if (troca==true)
				{
					cout<<vetor[i]<<"t"<<"\t";
				}
				else
				{
					cout<<vetor[i]<<"*"<<"\t";
				}
			}
			else
			{
				cout<<vetor[i]<<"\t";
			}
		}
		else
		{
			cout<<vetor[i]<<"\t";
		}
		
	}
	cout<<endl;
}
void bubbleSort (int n, int vetor[])
{
	int aux, k=n-1, pos1, pos2;
	bool troca=false;
	bool ordenado=false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			pos1=j;
			pos2=j+1;
			troca=trocaOuNaoTroca(n, vetor, pos1, pos2);
			if (troca==true)
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
				imprimirVetor(n, vetor, pos1, pos2, troca, ordenado);
			}
			else
			{
				imprimirVetor(n, vetor, pos1, pos2, false, ordenado);
			}
		}
		k--;
	}
	ordenado=true;
	imprimirVetor(n, vetor, pos1, pos2, false, ordenado);
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
	bubbleSort(n, vetor);
	return 0;
}
