#include <iostream>
using namespace std;
int main ()
{
	int n, m;
	cin>>n>>m;
	float matriz1[n][m], matriz2[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin>>matriz1[i][j];
			matriz2[i][j]=matriz1[i][j];
		}
	}
	float maior;
	bool zero=false;
	for (int i = 0; i < n; i++)
	{
		if (matriz1[i][0]<0)
		{
			maior=-matriz1[i][0];
		}
		else
		{
			maior=matriz1[i][0];
		}
		for (int j = 0; j < m; j++)
		{
			if (matriz1[i][j]<0)
			{
				if ((-matriz1[i][j])>maior)
				{
					maior=-matriz1[i][j];
				}
			}
			else if (matriz1[i][j]>maior)
			{
				maior=matriz1[i][j];
			}
			
			if (j==(m-1))
			{
				for (int k = 0; k < m; k++)
				{
					if (maior==0)
					{
						zero=true;
					}
					else
					{
						matriz2[i][k]/=maior;
					}
				}
			}
		}
	}
	if (zero==1)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout<<matriz1[i][j]<<"\t";
			}
			cout<<endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout<<matriz2[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
}
