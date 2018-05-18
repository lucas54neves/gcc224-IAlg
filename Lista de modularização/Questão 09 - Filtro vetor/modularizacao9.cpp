#include <iostream>
using namespace std;
void filtro (int qtd, int vetor[])
{
	int cont=0;
	for (int i = 0; i < qtd; i++)
	{
		if (vetor[i]%6==0)
		{
			cont++;
		}
	}
	int divisiveis[cont], i=0, j=0;
	while (i<qtd)
	{
		if (vetor[i]%6==0)
		{
			if (j<cont)
			{
				divisiveis[j]=vetor[i];
				j++;
			}
		}
		i++;
	}
	for (int i = 0; i < cont; i++)
	{
		cout<<divisiveis[i]<<endl;
	}
	
}
int main ()
{
	int qtd;
	cin>>qtd;
	int vetor[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin>>vetor[i];
	}
	filtro(qtd, vetor);
	return 0;
}
