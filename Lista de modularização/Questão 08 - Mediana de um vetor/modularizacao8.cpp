#include <iostream>
using namespace std;
void mediana (float vetor[], int tam)
{
	int meio=(tam-1)/2;
	float mediana;
	for (int i = 0; i < tam; i++)
	{
		cin>>vetor[i];
	}
	if (tam%2==1)
	{
		cout<<vetor[meio]<<endl;
	}
	else if (tam%2==0)
	{
		mediana=float(vetor[meio+1]+vetor[meio])/2;
		cout<<mediana<<endl;
	}
	
}
int main ()
{
	int tam;
	cin>>tam;
	float vetor[tam];
	mediana (vetor, tam);
	return 0;
}
