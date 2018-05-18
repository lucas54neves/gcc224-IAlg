#include <iostream>
using namespace std;
int main () {
	double R, progressao = 1, contador = 1;
	int N;
	cin >> R >> N;
	while (contador <= N) {
		cout << progressao << endl;
		progressao = progressao * R;
		contador++;
	}
	return 0;
}
