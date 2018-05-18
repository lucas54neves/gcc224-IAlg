#include <iostream>
using namespace std;
void calcVetorAlturas (int tamanhoVetor, int vetor[], int alturas[], int alturaInicial, int tamanhoExtra)
{
	alturas[0]=alturaInicial;
	int j=0;
	for (int i = 1; i < tamanhoExtra; i++)
	{
		if (j<tamanhoVetor)
		{
			alturas[i]=alturas[i-1]+vetor[j];
		}
		j++;
	}		
}
void calcVetorAnos (int anos[], int anoInicial, int tamanhoExtra)
{
	anos[0]=anoInicial;
	for (int i = 1; i < tamanhoExtra; i++)
	{
		anoInicial++;
		anos[i]=anoInicial;
	}
}
void acharMaiores (int tamanhoExtra, int alturas[], int &posMaior,int &posSegundo)
{
	if (alturas[0]>alturas[1])
	{
		posSegundo=1;
	}
	else
	{
		posSegundo=0;
		posMaior=1;
	}
	
	for (int i = 2; i < tamanhoExtra; i++)
	{
		if (alturas[i]>alturas[posMaior])
		{
			posSegundo=posMaior;
			posMaior=i;
		}
		else if (alturas[i] > alturas[posSegundo]) {
			posSegundo=i;
		}
	}
}
void escreverAnos (int &ano1, int &ano2, int anos[], int posMaior, int posSegundo, int tamanhoExtra)
{
	ano1=anos[posMaior];
	ano2=anos[posSegundo];
}
int main ()
{
	int anoInicial;
	cin>>anoInicial;
	int alturaInicial;
	cin>>alturaInicial;
	int tamanhoVetor;
	cin>>tamanhoVetor;
	int vetor[tamanhoVetor];
	int tamanhoExtra=tamanhoVetor+1;
	int alturas[tamanhoExtra], anos[tamanhoExtra];
	for (int i = 0; i < tamanhoVetor; i++)
	{
		cin>>vetor[i];
	}
	calcVetorAlturas (tamanhoVetor, vetor, alturas, alturaInicial, tamanhoExtra);
	calcVetorAnos (anos, anoInicial, tamanhoExtra);
	int posMaior=0, posSegundo=0;
	acharMaiores (tamanhoExtra, alturas, posMaior, posSegundo);
	int ano1=0, ano2=0;
	escreverAnos(ano1, ano2, anos, posMaior, posSegundo, tamanhoExtra);
	cout<<ano1<<endl;
	cout<<ano2<<endl;
	return 0;
}
