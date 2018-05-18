#include <iostream>
#include <string>
using namespace std;
struct atletas {
	string nome, esporte;
	int idade;
	double altura;
};
int main () {
	atletas info[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>info[i].nome
			>>info[i].esporte
			>>info[i].idade
			>>info[i].altura;
	}
	int alto=0, velho=0, maisVelho=info[0].idade;
	double maisAlto=info[0].altura;
	for (int i = 0; i < 5; i++)
	{
		if (maisVelho<info[i].idade)
		{
			maisVelho=info[i].idade;
			velho=i;
		}
		if (maisAlto<info[i].altura)
		{
			maisAlto=info[i].altura;
			alto=i;
		}
	}
	cout<<info[alto].nome<<"\t"<<info[alto].esporte<<endl
		<<info[velho].nome<<"\t"<<info[velho].esporte<<endl;
	return 0;
}
