#include <iostream>
using namespace std;
struct produto {
	int codigo;
	double preco;
	int quantidade;
	char deposito[9];
};
int main () {
	produto info[60];
	cin>>info[0].codigo
		>>info[0].preco
		>>info[0].quantidade
		>>info[0].deposito;
	int n=1, condicao=info[0].codigo;
	while (condicao>0)
	{
		cin>>info[n].codigo
			>>info[n].preco
			>>info[n].quantidade
			>>info[n].deposito;
		condicao=info[n].codigo;
		n++;
	}
	int venda;
	cin>>venda;
	for (int i = 0; i < n; i++)
	{
		if (venda==info[i].codigo)
		{
			info[i].quantidade--;
		}
	}
	bool acabou=false;
	while (venda>0)
	{
		cin>>venda;
		for (int i = 0; i < n; i++)
		{
			if (info[i].quantidade==0)
			{
				acabou=true;
				i=n;
			}
			else
			{
				if (venda==info[i].codigo)
				{
					info[i].quantidade--;
				}
			}
		}
	}
	int menorQtd=info[0].quantidade, posicao=0;
	if (acabou==true)
	{
		cout<<"erro 3221"<<endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (info[i].quantidade<menorQtd)
			{
				posicao=i;
			}
		}
		cout<<info[posicao].codigo<<"\t"
			<<info[posicao].quantidade<<"\t"
			<<info[posicao].deposito<<endl;
		}
	return 0;
}
