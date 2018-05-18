#include <iostream>
#include <string>
using namespace std;
struct paciente {
	string nome;
	char sexo;
	double altura, peso;
};
int main () {
	int qtd;
	cin>>qtd;
	double diferenca, pesoIdeal;
	paciente informacoes[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin>>informacoes[i].nome
			>>informacoes[i].sexo
			>>informacoes[i].altura
			>>informacoes[i].peso;
	}
	int maior=0;
	for (int i = 0; i < qtd; i++)
	{
		if (informacoes[i].peso>informacoes[maior].peso)
		{
			maior=i;
		}
	}
	cout<<informacoes[maior].nome<<endl;
	for (int i = 0; i < qtd; i++)
	{
		if (informacoes[i].sexo=='H')
		{
			pesoIdeal=(double)(72.7*informacoes[i].altura)-58;
			if (pesoIdeal<informacoes[i].peso)
			{
				diferenca=pesoIdeal-informacoes[i].peso;
				cout<<informacoes[i].nome<<"\t"
					<<diferenca<<endl;
			}
		}
		if (informacoes[i].sexo=='M')
		{
			pesoIdeal=(double)(62.1*informacoes[i].altura)-44.7;
			if (pesoIdeal<informacoes[i].peso)
			{
				diferenca=pesoIdeal-informacoes[i].peso;
				cout<<informacoes[i].nome<<"\t"
					<<diferenca<<endl;
			}
		}
	}
	for (int i = 0; i < qtd; i++)
	{
		if (informacoes[i].sexo=='H')
		{
			pesoIdeal=(double)(72.7*informacoes[i].altura)-58;
			if (pesoIdeal>informacoes[i].peso)
			{
				diferenca=pesoIdeal-informacoes[i].peso;
				cout<<informacoes[i].nome<<"\t"
					<<diferenca<<endl;
			}
		}
		if (informacoes[i].sexo=='M')
		{
			pesoIdeal=(double)(62.1*informacoes[i].altura)-44.7;
			if (pesoIdeal>informacoes[i].peso)
			{
				diferenca=pesoIdeal-informacoes[i].peso;
				cout<<informacoes[i].nome<<"\t"
					<<diferenca<<endl;
			}
		}
	}
	return 0;
}
