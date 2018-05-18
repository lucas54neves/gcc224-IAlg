#include <iostream>
using namespace std;
int main () {
	int log[15], aed[10];
	for (int i = 0; i < 15; i++)
	{
		cin>>log[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin>>aed[i];
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (log[i]==aed[j])
			{
				cout<<log[i]<<endl;
			}
		}
	}
	return 0;
}
