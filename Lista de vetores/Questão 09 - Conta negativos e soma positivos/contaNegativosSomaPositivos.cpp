#include <iostream>
using namespace std;
int main () {
	double vetor[10], quantidade=0, soma=0;
	for (int i = 0; i < 10; i++)
	{
		cin>>vetor[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (vetor[i]<0)
		{
			quantidade=quantidade+1;
		} else
		{
			soma=soma+vetor[i];
		}
	}
	cout<<quantidade<<endl;
	cout<<soma<<endl;	
	return 0;
}
