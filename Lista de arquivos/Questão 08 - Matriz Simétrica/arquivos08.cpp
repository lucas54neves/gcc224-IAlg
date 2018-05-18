#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	ifstream arquivo ("matriz.txt");
	
	int m;
	
	if (arquivo)
	{
		arquivo >> m;
		int matriz[m][m];
		while (!arquivo.eof())
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < m; j++)
				{
					arquivo >> matriz[i][j];
				}
			}
		}
		bool simetrica=true;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (matriz[i][j]!=matriz[j][i])
				{
					simetrica=false;
				}
			}
		}
		if (simetrica==false)
		{
			cout<<"nao simetrica"<<endl;
		}
		else
		{
			cout<<"simetrica"<<endl;
		}
	}
	
	return 0;
}
