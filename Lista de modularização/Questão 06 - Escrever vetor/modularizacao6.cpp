#include <iostream>
using namespace std;
void escrita (int tamanho)
{
	int vetor[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		cin>>vetor[i];
	}
	if (tamanho==0)
	{
		cout<<"[]";
	}
	for (int i = 0; i < tamanho; i++)
	{
		if (i==0)
		{
			cout<<"[";
		}
		if (i!=tamanho)
		{
			cout<<vetor[i];
			if (i!=tamanho-1)
			{
				cout<<", ";
			}
		}
		if (i==tamanho-1)
		{
			cout<<"]";
		}
		
	}
	cout<<endl;	
}
int main ()
{
	int tamanho;
	cin>>tamanho;
	escrita (tamanho);
}
