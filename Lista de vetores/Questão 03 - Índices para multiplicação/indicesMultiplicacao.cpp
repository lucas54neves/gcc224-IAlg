#include <iostream>
using namespace std;
int main () {
	int vetor [7], n, mult = 1;
	for (int i = 0; i < 7; i++)
	{
		cin >> vetor[i];
	}
	cin >> n;
	do
	{
		mult = mult * vetor[n];
		cin >> n;
	} while (n >= 0);
	cout << mult << endl;
	return 0;
}
