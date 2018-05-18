#include <iostream>
using namespace std;
int main () {
	int N1 = 0, N2 = 1,	contador = 1, numero;
	
	cin >> numero;
	
	while (contador <= numero) {
		N1 = N1 + N2;
		N2 = N1 - N2;
		
		cout<<N2<<endl;
		contador++;
	}
	return 0;
}
