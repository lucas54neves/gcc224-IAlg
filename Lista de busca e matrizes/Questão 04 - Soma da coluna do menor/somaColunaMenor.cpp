#include <iostream>
using namespace std;
int main () {
	int l, c;
	cin>>l>>c;
	double matriz[l][c];
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin>>matriz[i][j];
		}
	}
	double menor, soma;
	int cMenor;
	menor=matriz[0][0];
	soma=0.0;
	cMenor=0;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (menor>matriz[i][j])
			{
				menor=matriz[i][j];
				cMenor=j;
			}
		}
	}
	for (int i = 0; i < l; i++)
	{
		soma=soma+matriz[i][cMenor];
	}
	cout<<menor<<endl
		<<soma<<endl;
	return 0;
}
