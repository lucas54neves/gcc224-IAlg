#include <iostream>

using namespace std;

int main () {
	int n1, n2, higher;
	cin >> n1;
	cin >> n2;
	if (n1 > n2) {
		higher = n1;
	} else {
		higher = n2;
	}
	cout << higher << endl;
	return 0;
}
