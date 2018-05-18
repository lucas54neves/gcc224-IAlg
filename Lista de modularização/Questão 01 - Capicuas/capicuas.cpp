#include <iostream>
using namespace std;
bool capicuaOuNao (int n)
{
	int aux=n, nInvertido=0;
	while (aux>0)
	{
		nInvertido=nInvertido*10;
		nInvertido=nInvertido+(aux%10);
		aux=aux/10;
	}
	if (n==nInvertido)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void maiorMenor (int contadorCapicua, int vetCapicua[], int &maior, int &menor)
{
	for (int i = 0; i < contadorCapicua; i++)
	{
		if (vetCapicua[i]>maior)
		{
			maior=vetCapicua[i];
		}
		if (vetCapicua[i]<menor)
		{
			menor=vetCapicua[i];
		}
	}
}
int main ()
{
	int total;
	cin>>total;
	int contadorCapicua=0, contadorNaoCapicua=0, numero;
	int vetCapicua[total], vetNaoCapicua[total];
	while (contadorCapicua+contadorNaoCapicua<total)
	{
		cin>>numero;
		if (capicuaOuNao(numero)==true)
		{
			vetCapicua[contadorCapicua]=numero;
			contadorCapicua++;
		}
		else
		{
			vetNaoCapicua[contadorNaoCapicua]=numero;
			contadorNaoCapicua++;
		}
	}
	int maior=0, menor=0;
	if (contadorCapicua!=0)
	{
		if (vetCapicua[0]>vetCapicua[1])
		{
			menor=vetCapicua[1];
			maior=vetCapicua[0];
		}
		else
		{
			menor=vetCapicua[0];
			maior=vetCapicua[1];
		}
		maiorMenor (contadorCapicua, vetCapicua, maior, menor);
	}
	for (int i = 0; i < contadorNaoCapicua; i++)
	{
		cout<<vetNaoCapicua[i]<<endl;
	}
	if (menor!=0)
	{
		cout<<menor<<endl;
	}
	if (maior!=0)
	{
		cout<<maior<<endl;
	}
	
	return 0;
}
