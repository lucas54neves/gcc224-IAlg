#include <iostream>
using namespace std;
int main ()
{
	int matriz[3][4];
	int pares=0, impares=0;
	float soma=0, media;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin>>matriz[i][j];
		}
		
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((matriz[i][j]%2)==0)
			{
				pares++;
			}
			if ((matriz[i][j])%2==1)
			{
				impares++;
			}
			soma+=(matriz[i][j]);
		}
	}
	media=soma/12.0;
	cout<<pares<<endl<<impares<<endl<<media<<endl;
}
