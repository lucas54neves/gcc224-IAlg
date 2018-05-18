#include <iostream>
using namespace std;
int main () {
	int vetor1[10], vetor2[5], n, m, qtdDivisores;
	for (int i = 0; i < 10; i++)
	{
		cin >> vetor1[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> vetor2[i];
	}
	n = 0;
	m = 0;
	while (n < 10)
	{
		while (m < 5)
		{
			if ((vetor1[n] % vetor2[m]) == 0)
			{
				qtdDivisores = qtdDivisores + 1;
			}			
			m++;
		}
		cout << vetor1[n] << " " << qtdDivisores << endl;
		n++;
		m = 0;
		qtdDivisores = 0;
	}	
	return 0;
}
