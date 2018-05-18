#include <iostream>
#include <string>
using namespace std;
struct cliente
{
	int clienteCodigo;
	string clienteNome;
};
struct conta
{
	int contaCodigo;
	int contaCliente;
};
struct compra
{
	int compraCodigo;
	int compraConta;
	int compraValor;
};
int main ()
{
	cliente dadosCliente[100];
	conta dadosConta;
	compra dadosCompra;
	int acao, i=0, l=0;
	cin>>acao;
	do
	{
		switch (acao)
		{
			case 1: // Inserir cliente
				cin>>dadosCliente[i].clienteCodigo
					>>dadosCliente[i].clienteNome;
				for (int j = 0; j < i; j++)
				{
					if (dadosCliente[i].clienteCodig==dadosCliente[j].clienteCodig)
					{
						cout<<"ERRO"<<endl;
					}
				}
				i++;
				break;
			case 2: // Inserir conta
				cin>>dadosConta.contaCodigo
					>>dadosConta.contaCliente;
				for (int k = 0; k < i; k++)
				{
					if (dadosConta.contaCliente==dadosCliente[i].clienteCodigo)
					{
						if (/* condition */)
						{
							/* code */
						}
					}
				}
				l++;
				break;
			case 3: // Inserir compra
				
				break;
			case 4: // Remover cliente
				
				break;
		}
		cin>>acao;
	} while (acao>0)
	
}
