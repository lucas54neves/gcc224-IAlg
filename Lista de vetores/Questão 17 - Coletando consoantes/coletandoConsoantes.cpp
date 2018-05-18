#include <iostream>
using namespace std;
int main () 
{
	char vetor[10];
	for (int i = 0; i < 10; i++)
	{
		cin>>vetor[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if ((vetor[i]!='a')
			&&(vetor[i]!='e')
			&&(vetor[i]!='i')
			&&(vetor[i]!='o')
			&&(vetor[i]!='u'))
		{
			cout<<vetor[i];
		}
	}
	return 0;
}
