#include <iostream>
using namespace std;
int contaDigitos (int n)
{
	int aux=n, contadorDigitos=0;
	do
	{
		contadorDigitos++;
		aux=aux/10;
	} while (aux!=0);	
	return contadorDigitos;
}
void transfVetor (int n, int vetor[], int qtdDigitos)
{
	int aux=n;
	for (int i = qtdDigitos-1; i >= 0; i--)
	{
		vetor[i]=aux%10;
		aux=aux/10;
	}
}
int main ()
{
	int n;
	cin>>n;
	int qtdDigitos=contaDigitos(n);
	int vetor[qtdDigitos];
	transfVetor(n, vetor, qtdDigitos);
	if (n>0)
	{
		for (int i = 0; i < qtdDigitos; i++)
		{
			cout<<vetor[i]<<" ";
		}
		cout<<endl;
	}
	else if (n==0)
	{
		cout<<0<<endl;
	}
	
	return 0;
}
