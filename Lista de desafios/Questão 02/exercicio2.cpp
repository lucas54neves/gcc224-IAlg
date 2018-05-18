#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main () {
	int production, common, lux;

	cin >> production;

	lux = floor(production / 3);
	common = production - lux;

	cout << common << endl;
	cout << lux << endl;

	return 0;
}
