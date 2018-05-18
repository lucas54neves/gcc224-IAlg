#include <iostream>
#include <string>
using namespace std;
struct gnomo {
	string nome;
	int entrada1, saida1;
	int entrada2, saida2;
	int entrada3, saida3;
	int entrada4, saida4;
	int entrada5, saida5;
	int entrada6, saida6;
	int entrada7, saida7;
};
int main () {
	int n;
	cin>>n;
	gnomo info[n];
	for (int i = 0; i < n; i++)
	{
		cin>>info[i].nome;
		cin>>info[i].entrada1>>info[i].saida1;
		cin>>info[i].entrada2>>info[i].saida2;
		cin>>info[i].entrada3>>info[i].saida3;
		cin>>info[i].entrada4>>info[i].saida4;
		cin>>info[i].entrada5>>info[i].saida5;
		cin>>info[i].entrada6>>info[i].saida6;
		cin>>info[i].entrada7>>info[i].saida7;
	}
	int totalTrabalhado=0, horasEntrada=0, horasSaida=0;
	for (int i = 0; i < n; i++)
	{
		horasEntrada=info[i].entrada1+info[i].entrada2+info[i].entrada3+info[i].entrada4+info[i].entrada5+info[i].entrada6+info[i].entrada7;
		horasSaida=info[i].saida1+info[i].saida2+info[i].saida3+info[i].saida4+info[i].saida5+info[i].saida6+info[i].saida7;
		totalTrabalhado=horasSaida-horasEntrada;
		if (totalTrabalhado<70)
		{
			cout<<info[i].nome<<"\t"
				<<totalTrabalhado<<endl;
		}
	}
	return 0;
}
