#include <iostream>
#include <string>
using namespace std;
struct palavras
{string palindromo;};
bool palindromoOuNao(string palavra)
{
	bool achou=false;
	int qtdCarac=palavra.length();
	for (int i = 0; i < qtdCarac; i++)
	{
		for (int j = qtdCarac-1; j >= 0 ; j--)
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
void menorMaior (int contadorPalindromos, string vetPalindromos[], int &maior, int &menor, int &posMaior, int &posMenor)
{
	int tamanho=0;
	for (int i = 0; i < contadorPalindromos; i++)
	{
		tamanho=vetPalindromos[i].length();
		if (tamanho>maior)
		{
			maior=tamanho;
			posMaior=i;
		}
		if (tamanho<menor)
		{
			menor=tamanho;
			posMenor=i;
		}
	}
}
int main ()
{
	int qtdPalavras;
	cin>>qtdPalavras;
	palavras palindromos[qtdPalavras];
	int contadorPalindromos=0, contadorNaoPalindromos=0;
	string vetPalindromos[qtdPalavras], vetNaoPalindromos[qtdPalavras];
	int t=0;
	while (contadorPalindromos+contadorNaoPalindromos<qtdPalavras)
	{
		cin>>palindromos[t].palindromo;
		if (palindromoOuNao(palindromos[t].palindromo)==true)
		{
			vetPalindromos[contadorPalindromos]=palindromos[t].palindromo;
			contadorPalindromos++;
		}
		else
		{
			vetNaoPalindromos[contadorNaoPalindromos]=palindromos[t].palindromo;
			contadorNaoPalindromos++;
		}
		t++;
	}
	string menor=0, maior=0;
	int posMaior=0, posMenor=0;
	if (contadorPalindromos!=0)
	{
		int tamanho0=vetPalindromos[0].length();
		int tamanho1=vetPalindromos[1].length();
		if (tamanho0<tamanho1)
		{
			posMenor=0;
			menor=tamanho0;
			posMaior=1;
			maior=tamanho1;
		}
		else
		{
			posMenor=1;
			menor=tamanho1;
			posMaior=0;
			maior=tamanho0;
		}
		menorMaior(contadorPalindromos, vetPalindromos, maior, menor, posMaior, posMenor);
	}
	for (int i = 0; i < contadorNaoPalindromos; i++)
	{
		cout<<vetNaoPalindromos[i]<<endl;
	}
	
	return 0;
}
