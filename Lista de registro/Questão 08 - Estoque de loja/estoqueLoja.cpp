#include <iostream>
using namespace std;
struct produto {
	int codigo;
	float preco;
	int disponivel;
	char deposito[9];
};
int main () {
	produto info[60];
	int j=0;
	cin>>info[j].codigo;
	while (info[j].codigo>0)
	{
	cin>>info[j].preco
		>>info[j].disponivel
		>>info[j].deposito;
	j++;
	cin>>info[j].codigo;
	}
	int vendas;
	cin>>vendas;
	bool acabou=false;
	while (vendas>0)
	{
		for (int i = 0; i < j; i++)
		{
			if (vendas==info[i].codigo)
			{
				info[i].disponivel--;
				if (info[i].disponivel<0)
				{
					acabou=true;
				}
				
			}
		}
		if (acabou==0)
		{
			cin>>vendas;
		}
		else
		{
			vendas=0;
		}
	}
	if (acabou==1)
	{
		cout<<"erro 3221"<<endl;
	}
	else
	{
		int menor=info[0].disponivel, menorP=0;
		for (int i = 1; i < j; i++)
		{
			if (menor>info[i].disponivel)
			{
				menorP=i;
			}
		}
		cout<<info[menorP].codigo<<"\t"
			<<info[menorP].disponivel<<"\t"
			<<info[menorP].deposito;
	}
	return 0;
}
