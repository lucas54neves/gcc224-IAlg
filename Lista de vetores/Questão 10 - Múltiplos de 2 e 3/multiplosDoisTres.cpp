#include <iostream>
using namespace std;
int main () {
	int vetor[7], mult2[7], n2=0, mult3[7], n3=0, mult23[7], n23=0;
	for (int i = 0; i < 7; i++)
	{
		cin>>vetor[i];
	}
	for (int i = 0; i < 7; i++)
	{
		if (vetor[i]%2==0)
		{
			mult2[n2]=vetor[i];
			n2=n2+1;
		}
		if (vetor[i]%3==0)
		{
			mult3[n3]=vetor[i];
			n3=n3+1;
		}
		if ((vetor[i]%2==0)&&(vetor[i]%3==0))
		{
			mult23[n23]=vetor[i];
			n23=n23+1;
		}
	}
	if (n2==0)
	{
		cout<<"0"<<endl;
	} else
	{
		for (int i = 0; i < n2; i++)
		{
			if (i==(n2-1))
			{
				cout<<mult2[i]<<endl;
			} else
			{
				cout<<mult2[i]<<" ";
			}			
		}
	}
	if (n3==0)
	{
		cout<<"0"<<endl;
	} else
	{
		for (int i = 0; i < n3; i++)
		{
			if (i==(n3-1))
			{
				cout<<mult3[i]<<endl;
			} else
			{
				cout<<mult3[i]<<" ";
			}
		}
	}	
	if (n23==0)
	{
		cout<<"0"<<endl;
	} else
	{
		for (int i = 0; i < n23; i++)
		{
			if (i==(n23-1))
			{
				cout<<mult23[i]<<endl;
			} else
			{
				cout<<mult23[i]<<" ";
			}
		}
	}	
	return 0;
}
