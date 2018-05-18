#include <iostream>
using namespace std;
int main () {
	int num1, num2, mult;
	num1 = 1;
	num2 = 1;
	while (num1 <= 10) {
		while (num2 <= 10) {
			mult = num1 * num2;
			cout << num1 << " x " << num2 << " = " << mult << endl;
			num2 = num2 + 1;
		}
		num2 = 1;
		num1 = num1 + 1;
	}
	return 0;
}
