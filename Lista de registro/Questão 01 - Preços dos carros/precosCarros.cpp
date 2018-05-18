#include <iostream>
using namespace std;
struct carro {
	char nome[20];
	int ano, preco;
};
int main () {
	int qtd, referencia;
	cin>>qtd;
	carro dados[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin>>dados[i].nome
			>>dados[i].ano
			>>dados[i].preco;
	}
	cin>>referencia;
	for (int i = 0; i < qtd; i++)
	{
		if (dados[i].preco<referencia)
		{
			cout<<dados[i].nome<<"\t"
				<<dados[i].ano<<"\t"
				<<dados[i].preco<<"\t"
				<<endl;
		}
	}
	return 0;
}
