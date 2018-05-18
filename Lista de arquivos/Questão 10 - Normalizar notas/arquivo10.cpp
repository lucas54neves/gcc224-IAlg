#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
struct aluno
{
	int matricula;
	int nota;
};
void leitura (aluno dados[], int& cont)
{
	ifstream entrada ("notas.txt");
	if (entrada)
	{
		while (entrada >> dados[cont].matricula >> dados[cont].nota)
			{
				cont++;
			}
		entrada.close();
	}
}
int busca (aluno dados[], int cont)
{
	int maior = 0;
	for (int i = 1; i < cont; i++)
	{
		if (dados[i].nota > dados[maior].nota)
		{
			maior = i;
		}
	}
	return maior;
}
void normalizar (aluno dados[], int cont)
{
	int maior = busca (dados, cont);
	double taxa;
	taxa = double(100)/dados[maior].nota;
	for (int i = 0; i < cont; i++)
	{
		dados[i].nota = round((dados[i].nota) * taxa);
	}
}
void escrever (aluno dados[], int cont)
{
	ofstream saida ("notas.txt");
	if (saida)
	{
		for (int i = 0; i < cont; i++)
		{
			saida << dados[i].matricula << " ";
			saida << int(dados[i].nota) << endl;
		}
		saida.close();
	}
}
int main ()
{
	aluno dados[100];
	int cont = 0;
	leitura(dados, cont);
	normalizar(dados, cont);
	escrever(dados, cont);
	return 0;
}
