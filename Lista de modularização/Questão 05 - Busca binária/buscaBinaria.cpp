#include <iostream>
using namespace std;
void buscaBinaria (int tamanho, int vetor[], int elemento)
{
	int inicio=0, meio=0, qtdBusca=0, fim = tamanho-1;
	bool achou = false;
	while (achou==false)
	{
		meio=(inicio+fim)/2;
		if (vetor[meio]==elemento)
		{
			qtdBusca++;
			cout << meio << endl
				<< qtdBusca << endl;
			achou=true;
		}
		else if (vetor[meio]>elemento)
		{
			qtdBusca++;
			meio--;
			fim=meio;
			
		}
		else if (vetor[meio]<elemento)
		{
			qtdBusca++;
			meio++;
			inicio=meio;
		}
		if (fim<inicio)
		{
			meio=-1;
			cout<<meio<<endl
				<<qtdBusca<<endl;
			achou=true;
		}
	}
}
int main ()
{
	int tamanho;
	cin>>tamanho;
	int vetor[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		cin>>vetor[i];
	}
	int elememento;
	cin>>elememento;
	buscaBinaria(tamanho, vetor, elememento);
	return 0;
}
