#include <iostream>
using namespace std;
int somaNum (int valor, int maximo)
{
	int resultado;
	if (valor<maximo)
	{
		resultado=(valor + somaNum(++valor, maximo));
	}
	return resultado;
}
int main ()
{
	int num=0;
	int soma=0;
	soma=somaNum(soma, num);
	cout<<soma<<endl;
	return 0;
}