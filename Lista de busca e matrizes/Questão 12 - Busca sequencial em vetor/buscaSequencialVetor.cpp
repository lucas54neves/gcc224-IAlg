#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool achou=false;
	cin>>n;
	char vetor[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	char busca;
	cin>>busca;
	for (int i = 0; i < n; i++)
	{
		if (busca==vetor[i])
		{
			achou=true;
			if (achou==1)
			{
				cout<<i<<"\t";
			}
		}
	}
	if (achou==0)
	{
		cout<<"-1"<<endl;
	}
}
