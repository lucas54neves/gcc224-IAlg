#include <iostream>
#include <cfloat>

using namespace std;

int main () {
	float primeiro, segundo, soma = 0, n;
	primeito = FLT_MIN;
	segundo = FLT_MIN;
	for (int i=0; i<7; i++) {
		cin >> n;
		soma+=n;
		if (primeiro < n) {
			segundo = primeiro;
			primeiro=n
		}
		else {
			if (segundo < n) {
				segundo = n;
				}
		}
	}
	soma = soma - primeiro - segundo;
	cout << primeiro << endl;
	cout << segundo << endl;
	cout << soma/5 << endl;
	return 0;
}
