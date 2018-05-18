#include <iostream>
#include <string>
using namespace std;
struct cliente
{
	int conta;
	string nome;
};
struct transacao
{
	int numeroConta;
	string descricao;
	double valor;
};
int main ()
{
	cliente pessoas[20];
	transacao movimentacoes[100];
	int a=0;
	cin>>pessoas[a].conta;
	do
	{
		cin>>pessoas[a].nome;
		a++;
		cin>>pessoas[a].conta;
	} while (pessoas[a].conta>0);
	int b=0;
	cin>>movimentacoes[b].numeroConta;
	do
	{
		cin>>movimentacoes[b].descricao;
		cin>>movimentacoes[b].valor;
		b++;
		cin>>movimentacoes[b].numeroConta;
	} while (movimentacoes[b].numeroConta>0);
	int numero;
	cin>>numero;
	do
	{
		for (int i = 0; i < a; i++)
		{
			if (numero==pessoas[i].conta)
			{
				cout<<pessoas[i].nome<<endl;
				for (int j = 0; j < b; j++)
				{
					if (movimentacoes[j].numeroConta==numero)
					{
						cout<<movimentacoes[j].descricao<<"\t"<<movimentacoes[j].valor<<endl;
					}
				}
			}
		}
		cin>>numero;
	} while (numero>0);
	return 0;
}
