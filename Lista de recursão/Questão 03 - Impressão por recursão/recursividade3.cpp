#include <iostream>
using namespace std;
void impressao (int numero)
{
	if (numero<0)
	{
		return;
	}
	else
	{
		impressao(numero-1);
		cout<<numero<<" ";
	}
}
int main ()
{
	int numero;
	cin>>numero;
	impressao(numero);
	cout<<endl;
	return 0;
}
