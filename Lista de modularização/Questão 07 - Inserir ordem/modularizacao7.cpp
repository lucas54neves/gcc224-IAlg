#include <iostream>
#include <string>
using namespace std;
struct contato
{
	string nome;
	int telefone;
};
void ordenar (int contador, contato aux, contato info[])
{
	for (int i = 0; i < contador-1; i++)
	{
		if (info[i].nome>info[i+1].nome)
		{
			aux.nome=info[i].nome;
			aux.telefone=info[i].telefone;
			info[i].nome=info[i+1].nome;
			info[i].telefone=info[i+1].telefone;
			info[i+1].nome=aux.nome;
			info[i+1].telefone=aux.telefone;
		}
	}
}
void imprimir (int contador, contato info[])
{
	for (int i = 0; i < contador; i++)
	{
		cout<<info[i].nome<<" "<<info[i].telefone<<endl;
	}
}
int main ()
{
	int n, contador=0;
	cin>>n;
	contato info[n], aux;
	for (int i = 0; i < n; i++)
	{
		cin>>info[i].nome>>info[i].telefone;
		contador++;
		ordenar(contador, aux, info);
		imprimir(contador, info);
	}
	return 0;
}
