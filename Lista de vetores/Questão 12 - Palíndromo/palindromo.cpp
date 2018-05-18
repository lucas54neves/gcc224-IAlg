#include <iostream>
using namespace std;
int main () {
	int n, condicao=1;
	cin>>n;
	int vetor[n], j=(n-1);
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (vetor[i]!=vetor[j])
		{
			condicao=0;
		}
		j--;
	}
	cout<<condicao<<endl;
	return 0;
}
