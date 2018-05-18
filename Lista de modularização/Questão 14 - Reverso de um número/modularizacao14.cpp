#include <iostream>
using namespace std;
int inverter (int numero)
{
	int invertido=0;
	while (numero>0)
	{
		invertido=invertido*10;
		invertido=invertido+(numero%10);
		numero=numero/10;
	}
	return invertido;
}
int main ()
{
	int numero;
	cin>>numero;
	cout<<inverter(numero)<<endl;
	return 0;
}
