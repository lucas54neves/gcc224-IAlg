#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	string nomeArquivo;
	cin >> nomeArquivo;
	
	ifstream arquivo (nomeArquivo.c_str());
	string line;
	if (arquivo.is_open())
	{
		while (!arquivo.eof())
		{
			getline(arquivo, line);
			cout << line << '\n';
		}
		arquivo.close();
	}
	return 0;
}
