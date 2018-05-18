#include <iostream>
#include <string>
using namespace std;
struct impostos
{
	string nomeImposto;
	float valorImposto;
};
struct fiscal
{
	string descricaoNota;
	float valorNota;
	string impostoNota;
};
void lerImposto (int qtdImposto, impostos infoImpostos[])
{
	for (int i = 0; i < qtdImposto; i++)
	{
		cin>>infoImpostos[i].nomeImposto
			>>infoImpostos[i].valorImposto;
	}
}
void lerNotas (int j, fiscal infoNotas[])
{
	cin>>infoNotas[j].descricaoNota
	>>infoNotas[j].valorNota
	>>infoNotas[j].impostoNota;
}
void chamarNotas (int qtdNotas, fiscal infoNotas[])
{
	for (int i = 0; i < qtdNotas; i++)
	{
		lerNotas(i, infoNotas);
	}
}
void calculoImposto (int qtdNotas, int qtdImpostos, fiscal infoNotas[], impostos infoImpostos[], float calculo[])
{
	float taxa;
	for (int i = 0; i < qtdNotas; i++)
	{
		for (int j = 0; j < qtdImpostos; j++)
		{
			if (infoNotas[i].impostoNota==infoImpostos[j].nomeImposto)
			{
				taxa=infoImpostos[j].valorImposto;
			}
		}
		calculo[i]=taxa*infoNotas[i].valorNota;
	}
}
float calculoTotal (int qtdNotas, float calculo[])
{
	float total=0;
	for (int i = 0; i < qtdNotas; i++)
	{
		total+=calculo[i];
	}
	return total;
}
int main ()
{
	int qtdImpostos;
	cin>>qtdImpostos;
	impostos infoImpostos[qtdImpostos];
	lerImposto (qtdImpostos, infoImpostos);
	int qtdNotas;
	cin>>qtdNotas;
	fiscal infoNotas[qtdNotas];
	chamarNotas (qtdNotas, infoNotas);
	float calculo[qtdNotas];
	calculoImposto (qtdNotas, qtdImpostos, infoNotas, infoImpostos, calculo);
	cout<<calculoTotal(qtdNotas, calculo);
	return 0;
}
