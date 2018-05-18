#include <iostream>
#include <fstream>
using namespace std;

int main () {

	ifstream arquivoA("arquivoA.txt");
	ifstream arquivoB("arquivoB.txt");
	ofstream arquivoC("arquivoC.txt");

	string palavrasA[100];
	string palavrasB[100];

	int n = 0;
	while(arquivoA >> palavrasA[n] && arquivoB >> palavrasB[n])
		n++;
	
	while(arquivoA >> palavrasA[n]) 
		n++;

	while(arquivoB >> palavrasB[n]) 
		n++;

	for (int i = 0; i < n; ++i) {
		arquivoC << palavrasA[i] << " ";
		arquivoC << palavrasB[n-1-i] << " ";
	}

	arquivoA.close();
	arquivoB.close();
	arquivoC.close();

	return 0;
}