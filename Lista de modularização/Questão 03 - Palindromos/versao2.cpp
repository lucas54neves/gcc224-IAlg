#include <iostream>
#include <string>
using namespace std;
bool palindromoOuNao (string palavra)
{
	int qtdCaracteres;
	qtdCaracteres=palavra.length();
	bool achou=false;
	for (int i = 0; i < qtdCaracteres; i++)
	{
		for (int j = qtdCaracteres-1; j >= 0; j--)
		{
			if (palavra[i]==palavra[j])
			{
				achou=true;
			}
			else
			{
				achou=false;
			}
		}
	}
	if (achou)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void menorMaior (string &maior, string &menor, int contadorPalindromos, string vetPalindromos[])
{
	if (contadorPalindromos==1)
	{
		menor=vetPalindromos[0];
		maior=vetPalindromos[0];
	}
	else if (contadorPalindromos>1)
	{
		if (vetPalindromos[0]>vetPalindromos[1])
		{
			maior=vetPalindromos[0];
			menor=vetPalindromos[1];
		}
		else
		{
			maior=vetPalindromos[1];
			menor=vetPalindromos[0];
		}
		for (int i = 2; i < contadorPalindromos; i++)
		{
			if (vetPalindromos[i]>maior)
			{
				maior=vetPalindromos[i];
			}
			if (vetPalindromos[i]<menor)
			{
				menor=vetPalindromos[i];
			}
		}
	}
}
int main ()
{
	int qtdPalavras;
	cin>>qtdPalavras;
	int contadorPalindromos=0, contadorNaoPalindromos=0;
	string palavra, vetPalindromos[qtdPalavras], vetNaoPalindromos[qtdPalavras];
	for (int i = 0; i < qtdPalavras; i++)
	{
		cin>>palavra;
		if (palindromoOuNao(palavra)==true)
		{
			vetPalindromos[contadorPalindromos]=palavra;
			contadorPalindromos++;
		}
		else
		{
			vetNaoPalindromos[contadorNaoPalindromos]=palavra;
			contadorNaoPalindromos++;
		}
	}
	string maior="", menor="";
	if (contadorPalindromos!=0)
	{
		menorMaior (maior, menor, contadorPalindromos, vetPalindromos);
	}
	for (int i = 0; i < contadorNaoPalindromos; i++)
	{
		cout<<vetNaoPalindromos[i]<<endl;
	}
	cout<<menor<<endl;
	cout<<maior<<endl;
	return 0;
}
