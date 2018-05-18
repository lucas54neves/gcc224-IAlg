#include <iostream>
using namespace std;
int	main () {
	int vetorA[5], vetorB[5], soma, i;
	for (int i = 0; i < 5; i++)
	{
		cin >> vetorA[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> vetorB[i];
	}
	i = 0;
	soma = 0;
	while (i < 5)
	{
		soma = soma + (vetorA[i] - vetorB[i]);
		i++;
	}
	cout << soma << endl;
	return 0;
}
