#include <iostream>
using namespace std;
struct entrevistados {
	char sexo;
	int idade;
	char resposta;
};
int main () {
	int n;
	cin>>n;
	entrevistados info[n];
	for (int i = 0; i < n; i++)
	{
		cin>>info[i].sexo
			>>info[i].idade
			>>info[i].resposta;
	}
	int respostaSim=0, respostaNao=0, maiores18Sim=0, menores18Nao=0, maiores18FemNao=0, menores18MasSim=0;
	for (int i = 0; i < n; i++)
	{
		if (info[i].resposta=='S')
		{
			respostaSim++;
		}
		if (info[i].resposta=='N')
		{
			respostaNao++;
		}
		if ((info[i].idade>=18)&&(info[i].resposta=='S'))
		{
			maiores18Sim++;
		}
		if ((info[i].idade<18)&&(info[i].resposta=='N'))
		{
			menores18Nao++;
		}
		if ((info[i].idade>=18)&&(info[i].sexo=='F')&&(info[i].resposta=='N'))
		{
			maiores18FemNao++;
		}
		if ((info[i].idade<18)&&(info[i].sexo=='M')&&(info[i].resposta=='S'))
		{
			menores18MasSim++;
		}
	}
	cout<<respostaSim<<endl
		<<respostaNao<<endl
		<<maiores18Sim<<endl
		<<menores18Nao<<endl
		<<maiores18FemNao<<endl
		<<menores18MasSim<<endl;
}
