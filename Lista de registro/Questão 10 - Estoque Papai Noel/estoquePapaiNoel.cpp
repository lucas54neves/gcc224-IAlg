#include <iostream>
#include <string>
using namespace std;
struct cartinha {
	string nome, brinquedoPedido;
};
struct brinquedo {
	string nomeBrinquedo;
	int disponivel, pedido;
};
int main () {
	int numCart;
	cin>>numCart;
	cartinha carta[numCart];
	for (int i = 0; i < numCart; i++)
	{
		cin>>carta[i].nome
			>>carta[i].brinquedoPedido;
	}
	int numBrin;
	cin>>numBrin;
	brinquedo presente[numBrin];
	for (int i = 0; i < numBrin; i++)
	{
		cin>>presente[i].nomeBrinquedo
			>>presente[i].disponivel;
	}
	int n;
	for (int i = 0; i < numBrin; i++)
	{
		n=0;
		for (int j = 0; j < numCart; j++)
		{
			if (presente[i].nomeBrinquedo==carta[j].brinquedoPedido)
			{
				n++;
			}
			if ((j==(numCart-1))&&(n>presente[i].disponivel))
			{
				cout<<presente[i].nomeBrinquedo<<"\t";
			}
		}
	}
	return 0;
}
