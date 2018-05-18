#include <iostream>
using namespace std;
struct habitante {
	double salario;
	int idade, filhos;	
};
int main () {
	int n;
	cin>>n;
	habitante pessoas[n];
	for (int i = 0; i < n; i++)
	{
		cin>>pessoas[i].salario
			>>pessoas[i].idade
			>>pessoas[i].filhos;
	}
	double mediaSalario=0;
	for (int i = 0; i < n; i++)
	{
		mediaSalario+=pessoas[i].salario;
	}
	mediaSalario/=n;
	cout<<mediaSalario<<endl;
	double mediaFilhos=0;
	for (int i = 0; i < n; i++)
	{
		mediaFilhos+=(double)pessoas[i].filhos;
	}
	mediaFilhos/=double(n);
	cout<<mediaFilhos<<endl;
	double maiorSalario=0;
	for (int i = 0; i < n; i++)
	{
		if (maiorSalario<pessoas[i].salario)
		{
			maiorSalario=pessoas[i].salario;
		}
	}
	cout<<maiorSalario<<endl;
	double percentagem=0;
	for (int i = 0; i < n; i++)
	{
		if (pessoas[i].salario>1000.0)
		{
			percentagem++;
		}
	}
	percentagem=(percentagem*100)/double(n);
	cout<<percentagem<<"%"<<endl;
	return 0;
}
