#include <iostream>
#include <cmath>
using namespace std;
struct pontos
{
	double distanciaReferencia;
	double pontoX;
	double pontoY;
};
double calculcaDistancia (double x2, double x1, double y2, double y1)
{
	double distancia=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	return distancia;
}
void bubble (pontos valores[], int qtd)
{
	pontos aux;
	int k=qtd-1;
	for (int i = 0; i < qtd; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (valores[j].distanciaReferencia>valores[j+1].distanciaReferencia)
			{
				aux.distanciaReferencia=valores[j].distanciaReferencia;
				aux.pontoX=valores[j].pontoX;
				aux.pontoY=valores[j].pontoY;
				valores[j].distanciaReferencia=valores[j+1].distanciaReferencia;
				valores[j].pontoX=valores[j+1].pontoX;
				valores[j].pontoY=valores[j+1].pontoY;
				valores[j+1].distanciaReferencia=aux.distanciaReferencia;
				valores[j+1].pontoX=aux.pontoX;
				valores[j+1].pontoY=aux.pontoY;
			}
		}
		k--;
	}
}
int main ()
{
	float referenciaX, referenciaY;
	cin>>referenciaX>>referenciaY;
	int qtd;
	cin>>qtd;
	pontos valores[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin>>valores[i].pontoX;
		cin>>valores[i].pontoY;
		valores[i].distanciaReferencia=calculcaDistancia(valores[i].pontoX, referenciaX, valores[i].pontoY, referenciaY);
	}
	bubble(valores, qtd);
	for (int i = 0; i < qtd; i++)
	{
		cout<<valores[i].distanciaReferencia<<" "
		<<valores[i].pontoX<<" "
		<<valores[i].pontoY<<" "<<endl;
	}
	
	return 0;
}
