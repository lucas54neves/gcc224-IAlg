#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main ()
{
	ifstream arquivoA ("arquivoA.txt");
	ifstream arquivoB ("arquivoB.txt");
	ofstream arquivoC ("arquivoC.txt");
	
	if (arquivoA && arquivoB && arquivoC)
	{
		string vetorA[100], vetorB[100];
		int n = 0;
		while (arquivoA >> vetorA[n] && arquivoB >> vetorB[n])
		{
			n++;
		}
		
		for (int i = 0; i < n; ++i)
		{
			arquivoC << vetorA[i] << " ";
			arquivoC << vetorB[n-1-i] << " ";
		}
	}
	
	arquivoA.close();
	arquivoB.close();
	arquivoC.close();
	
	return 0;
}
