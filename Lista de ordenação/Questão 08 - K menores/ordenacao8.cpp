#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int vetor[n];
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	int k;
	cin>>k;
	for (int i = 0; i < n; i++)
	{
		int menor=vetor[i];
		int j=i-1;
		while ((j>=0)&&(vetor[j]>menor))
		{
			vetor[j+1]=vetor[j];
			j--;
		}
		vetor[j+1]=menor;
	}
	for (int i = 0; i < k; i++)
	{
		cout<<vetor[i];
		if (i==k-1)
		{
			cout<<endl;
		}
		else
		{
			cout<<" ";
		}
	}
}

