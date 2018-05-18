// v2=2*v1
#include <iostream>
using namespace std;
int main ()
{
	int n1, n2;
	cin>>n1;
	n2=2*n1;
	int vetor1[n1], vetor2[n2];
	for (int a = 0; a < n1; a++)
	{
		cin>>vetor1[a];
	}
	for (int b = 0; b < n1; b++)
	{
		cin>>vetor2[b];
	}
	int pos, n3=n1;
	cin>>pos;
	for (int d = 0; d < n1; d++)
	{
		for (int c = n3; c < pos; c--)
		{
			vetor2[n3+1]=vetor2[n3];
		}
		vetor2[pos]=vetor1[d];
		n3++;
	}
	for (int e = 0; e < n2; e++)
	{
		cout<<vetor2[e]<<"\t";
	}
	
	return 0;
}
