#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main () {
	double n, h, x;

	cin >> n;

	x = pow(((n + sqrt(pow(n, 2) + 4))) / 2.0, 2);
	h = log (x);

	cout << h << endl;

	return 0;
}
