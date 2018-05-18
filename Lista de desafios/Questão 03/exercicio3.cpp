#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int ms, h, min, ms_h, ms_min;
	float sec, ms_sec;

	cin >> ms;

	ms_h = 3600000;
	ms_min = 60000;
	ms_sec = 1000.0;

	h = floor(ms / ms_h);
	ms = ms - (h * ms_h);
	min = floor(ms / ms_min);
	ms = ms - (min * ms_min);
	sec = (double)(ms / ms_sec);

	cout << h << " : " << min << " : " << sec << endl;

	return 0;
}
