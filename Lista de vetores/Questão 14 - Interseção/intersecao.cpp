#include <iostream>
using namespace std;
int main () {
	int n1, n2;
	cin>>n1>>n2;
	int primeiro[n1], segundo[n2];
	for (int i = 0; i < n1; i++)
	{
		cin>>primeiro[i];
	}
	for (int i = 0; i < n2; i++)
	{
		cin>>segundo[i];
	}
	bool achou=false;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (primeiro[i]==segundo[j])
			{
				cout<<primeiro[i]<<"\t";
				achou=true;
			}
		}
	}
	if (achou==0)
	{
		cout<<"-1"<<endl;
	}
}
