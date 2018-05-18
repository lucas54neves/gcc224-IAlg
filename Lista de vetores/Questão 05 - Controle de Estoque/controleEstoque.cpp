#include <iostream>
using namespace std;
int main () {
	int codigos[10], quantidade [10], pedido, pedidosNaoAtendidos = 0, totalNaoAtendidos = 0, cliente, codProduto;
	for (int i=0; i < 10; i++) {
		cin>>codigos[1];
		}
	for (i = 0; i < 10; i++)
	{
		cin >> quantidade[i];
	}
	bool achou = true;
	do
	{
		cin >> cliente;
		cin >> codProduto;
		for (i = 0; ((i < 10) and achou); i++)
		{
			if (codigo[i] == codProduto)
			{
				achou = false;
			}
			
		}
		if (achou == true)
		{
			pedidosNaoAtendidos++;
		} else
		{
			if (pedido <= quantidade[i-1])
			{
				
			}
			
		}
		
		
		cin >> pedido;
	} while (codigo!=0);
	return 0;
}
