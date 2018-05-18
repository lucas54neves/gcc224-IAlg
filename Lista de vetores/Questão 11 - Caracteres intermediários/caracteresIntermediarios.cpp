#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	char vetor[n], n1, n2;
	for (int i = 0; i < n; i++)
	{
		cin>>vetor[i];
	}
	cin>>n1>>n2;
	for (int i = 0; i < n; i++)
	{
		if (((vetor[i]>n1)&&(vetor[i]<n2))||((vetor[i]<n1)&&(vetor[i]>n2)))
		{
			cout<<vetor[i]<<" ";
		}
	}
	return 0;
}
