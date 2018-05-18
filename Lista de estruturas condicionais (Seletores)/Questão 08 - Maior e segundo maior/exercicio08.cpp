#include <iostream>
using namespace std;
int main () {
	float n1, n2, n3, n4, primeiro, segundo;
	cin >> n1 >> n2 >> n3 >> n4;
	primeiro = n1;
	segundo = n2;
	if (n1 > primeiro) {
		segundo = primeiro;
		primeiro = n1;
	}
	if (n2 > primeiro) {
		segundo = primeiro;
		primeiro = n2;
	}
	if (n3 > primeiro) {
		segundo = primeiro;
		primeiro = n3;
	}
	if (n4 > primeiro) {
		segundo = primeiro;
		primeiro = n4;
	}
	if (n1 > segundo && n1 < primeiro) {
		segundo = n1;
	}
	if (n2 > segundo && n2 < primeiro) {
		segundo = n2;
	}
	if (n3 > segundo && n3 < primeiro) {
		segundo = n3;
	}
	if (n4 > segundo && n4 < primeiro) {
		segundo = n4;
	}
	cout << primeiro << endl;
	cout << segundo << endl;
	return 0;
}
