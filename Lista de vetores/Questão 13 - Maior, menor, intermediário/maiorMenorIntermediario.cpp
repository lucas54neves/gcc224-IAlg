/*
Obs: Se o vetor não possuir elemento central imprima no lugar do elemento -1 e sua posição -1.
Entradas:
    int n - Tamanho do vetor.
    float vet[n] - Vetor que será preenchido.
Saídas:
    Maior elemento do vetor (float).
    Menor elemento do vetor (float).
    Elemento central do vetor (float).
    Posição no vetor do maior elemento (int).
    Posição no vetor do menor elemento (int).
    Posição do elemento central do vetor (int).
 */
#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	float vet[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vet[i];
	}
	float maior=vet[0], menor=vet[0], central=vet[0];
	int maiorP=0, menorP=0, centralP=0;
	for (int i = 0; i < n; i++)
	{
		if (vet[i]>maior)
		{
			maior=vet[i];
			maiorP=i;
		}
		if (vet[i]<menor)
		{
			menor=vet[i];
			menorP=i;
		}
	}
	if (n%2==1)
	{
		centralP=int(ceil(n/2));
		central=float(vet[centralP]);
	}
	else
	{
		centralP=-1;
		central=-1;
	}
	
	cout<<maior<<endl
		<<menor<<endl
		<<central<<endl
		<<maiorP<<endl
		<<menorP<<endl
		<<centralP<<endl;
}
