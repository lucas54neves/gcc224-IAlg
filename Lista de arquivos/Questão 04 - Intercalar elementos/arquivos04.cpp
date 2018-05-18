#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream arquivoA("arquivoA.txt");
	ifstream arquivoB("arquivoB.txt");
	ofstream arquivoC("arquivoC.txt");
	int a = 0;
	int b = 0;
	string vetorA[100];
	string vetorB[100];
	if (arquivoA)
	{
		while (arquivoA >> vetorA[a])
		{
			a++;
		}
	}
	if (arquivoB)
	{
		while (arquivoB >> vetorB[b])
		{
			b++;
		}
	}
	for (int i = 0; (i < a) || (i < b); ++i)
	{
		if (i < a)
		{
			arquivoC << vetorA[i] << " ";
		}
		if (i < b)
		{
			arquivoC << vetorB[i] << " ";
		}
	}
	
	arquivoA.close();
	arquivoB.close();
	arquivoC.close();
	
	return 0;
}
