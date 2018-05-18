#include <iostream>
using namespace std;
int main () {
	float n1, n2, n3, maior;
	cin >> n1 >> n2 >> n3;
	if (n1 > n2 && n1 > n3) {
		maior = n1;
	}
	else {
		if (n2 > n3) {
			maior = n2;
		}
		else {
			maior = n3;
		}
	}
	cout << maior << endl;
	return 0;
}
