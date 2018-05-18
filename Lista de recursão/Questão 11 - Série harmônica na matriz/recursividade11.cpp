#include <iostream>
using namespace std;
double serie (int n)
{
	if (n>=2)
	{
		return (1/n) + serie(n-1);
	}
	else
	{
		return 1;
	}
}
int main ()
{
	int n;
	cin>>n;
	//~ int contador=0;
	//~ float matriz[m][m];
	//~ for (int i = 0; i < m; i++)
	//~ {
		//~ for (int j = 0; j < m; j++)
		//~ {
			
		//~ }
		
	//~ }
	cout<<serie(n);
}
