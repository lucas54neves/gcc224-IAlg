#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	string nomeArquivo;
	cin >> nomeArquivo;
	string palavra;
	cin >> palavra;
	
	ofstream arquivo (nomeArquivo.c_str());
	arquivo << palavra << endl;
	
	arquivo.close();
	
	return 0;
}
